/* Creates a frame animation for widget id of the current screen: finds the widget through
   func_8040ECB0, allocates and clears a 0x64-byte animation, sets its type fields, widget and
   -1-terminated frame list, counts the frames, initialises its playback state through
   func_80419A98, func_80419A5C, func_80419A64 and func_80419A84, attaches it to the widget through
   func_8040EE64 and returns it. */
#include "basetypes.h"

typedef struct {
    char pad0[0xC];
    s16 kindA;
    s16 kindB;
    char pad10[2];
    s16 flags;
    char pad14[0x30];
    s32 widget;
    s32 *frames;
    char pad4C[4];
    s32 count;
    s32 unk54;
    char pad58[4];
    s32 unk5C;
    char pad60[4];
} Animation;

extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32);
extern s32 func_8040ECB0(s32 screen, u16 id);
extern Animation *func_80252FFC(s32 size);
extern void func_802A1748(void *p, s32 c, s32 n);
extern void func_80419A98(Animation *anim, s32 value);
extern void func_80419A5C(Animation *anim, s32 value);
extern void func_80419A64(Animation *anim, s32 value);
extern void func_80419A84(Animation *anim, s32 value);
extern void func_8040EE64(s32 widget, Animation *anim);

Animation *func_8041994C(s32 id, s32 *frames) {
    s32 widget;
    Animation *anim;

    widget = func_8040ECB0(func_80411E4C(func_8029A958()), id);
    func_80411E4C(func_8029A958());
    anim = func_80252FFC(0x64);
    func_802A1748(anim, 0, 0x64);
    anim->kindB = 0xB5F;
    anim->flags = 8;
    anim->kindA = 0xB5F;
    anim->widget = widget;
    anim->unk54 = 0;
    anim->frames = frames;
    anim->unk5C = 0;
    anim->count = 0;
    while (frames[anim->count] != -1) {
        anim->count++;
    }
    func_80419A98(anim, 1);
    func_80419A5C(anim, 0);
    func_80419A64(anim, 0);
    func_80419A84(anim, 0);
    func_8040EE64(widget, anim);
    return anim;
}
