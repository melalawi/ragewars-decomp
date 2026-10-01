#include "unbake_gbi.h"
/* Draws a menu option's image dimmed unless it is available (option id 0x10FE: sub-index below the
   unlock counts at 0x64D/0x64E of the save data; id 0x1194: flag byte 0x644 + sub-index), setting the
   draw alpha through func_802AA224 once (tracked by D_800E5E70 = 5), emitting a pipe sync, an other-mode
   word and a white or grey environment colour to D_80110634, and drawing it through func_802ABC18. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"







typedef struct {
    char pad0[0x20];
    s16 id;
    s16 sub;
} OptionHeader;

typedef struct {
    char pad0[0x14];
    s32 image;
    OptionHeader *header;
} Option;

typedef struct {
    char pad0[0xC];
    f32 scaleX;
    f32 scaleY;
    char pad14[2];
    s16 x;
    char pad18[6];
    s16 y;
} OptionPos;

typedef struct {
    char pad0[0x1C];
    u8 *save;
    char pad20[0x10];
    f32 alpha;
    f32 fade;
} Menu;

extern Gfx *D_80110634;
extern f32 D_800E23A0[];
extern s32 D_800E5E70;

extern void func_802AA224(s32 alpha);
extern void func_802ABC18(s32 image, s32 frame, s16 x, s16 y, f32 scaleX, f32 scaleY, s32 which);

void func_8043EFD0(Option *option, OptionPos *pos, s32 arg2, Menu *menu)
{
    s32 id;
    s32 sub;
    u8 *save;
    s32 available;

    id = option->header->id;
    save = menu->save;
    sub = option->header->sub;
    available = 0;
    switch (id) {
    case 0x10FE:
        switch (sub) {
        default:
            break;
        case 0:
        case 1:
        case 2:
            available = sub < save[0x64D];
            break;
        case 3:
        case 4:
        case 5:
            available = (sub - 3) < save[0x64E];
            break;
        }
        break;
    case 0x1194:
        available = (save + sub)[0x644] != 0;
        break;
    }
    if (D_800E5E70 != 5) {
        D_800E5E70 = 5;
        func_802AA224((s32)(menu->alpha * (menu->fade * D_800E23A0[0])));
    }
    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_2CYCLE);
    if (available) {
        gDPSetEnvColor(D_80110634++, 255, 255, 255, ((s32)(menu->alpha * (menu->fade * D_800E23A0[1]))));
    } else {
        gDPSetEnvColor(D_80110634++, 50, 50, 50, ((s32)(menu->alpha * (menu->fade * D_800E23A0[2]))));
    }
    func_802ABC18(option->image, 0, pos->x, pos->y, pos->scaleX, pos->scaleY, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E23A0_4 = 255.0f;
const float unbake_rodata_800E23A4_4 = 255.0f;
const float unbake_rodata_800E23A8_4 = 255.0f;
#endif
