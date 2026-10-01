#include "basetypes.h"

#ifdef VERSION_EU_X
#define VV_026D 0x271
#define VV_026A 0x26E
#define VV_026C 0x270
#define VV_026B 0x26F
#elif defined(VERSION_DE)
#define VV_026D 0x268
#define VV_026A 0x265
#define VV_026C 0x267
#define VV_026B 0x266
#else
#define VV_026D 0x26D
#define VV_026A 0x26A
#define VV_026C 0x26C
#define VV_026B 0x26B
#endif

/* Draws player p's badge on the screen D_800E53C0: looks up the group item the third argument
   names in the screen window, picks its child 0x26C, 0x26B or 0x26A for kinds 1 to 3 and 0x26D
   otherwise, shows it with alpha 0x96, and sets its frame at 0x2C from the rank byte at 0x92 of
   the player's 150-byte record in D_80146398, the cartridge's jump table jtbl_800E1B48 sending
   ranks 0 to 4 to frame 0x63, 0x62, 0x61 or 0x5F or to hiding it again with frame 0x60, which any
   higher rank also gets. */

struct Item {
    char pad[0x10];
    u8 alpha;
    char pad11[0x2C - 0x11];
    s32 frame;
};

struct Screen {
    char pad[0xE0];
    void *window;
};

extern struct Screen *D_800E53C0;
extern u8 D_80146398[];
extern void *jtbl_800E1B48[];
extern void *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);

void func_8042D4E4(s32 player, s32 kind, unsigned short group) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&rank_0, &&rank_1, &&rank_2, &&rank_4, &&hidden
    };
    struct Item *item;
    void *parent;
    u8 *record;
    u32 rank;
    s32 id;
    s32 frame;

    record = &D_80146398[player * 150];
    parent = func_8040ECB0(D_800E53C0->window, group);
    switch (kind) {
    case 0:
    default:
        id = VV_026D;
        break;
    case 1:
        id = VV_026C;
        break;
    case 2:
        id = VV_026B;
        break;
    case 3:
        id = VV_026A;
        break;
    }
    item = func_8040ECB0(parent, id);
    func_8040E958(item, 1);
    item->alpha = 0x96;
    rank = record[0x92];
    if (rank >= 5) {
        goto hidden;
    }
    goto *jtbl_800E1B48[rank];
rank_0:
    frame = 0x63;
    goto done;
rank_1:
    frame = 0x62;
    goto done;
rank_2:
    frame = 0x61;
    goto done;
rank_4:
    frame = 0x5F;
    goto done;
hidden:
    func_8040E958(item, 0);
    frame = 0x60;
done:
    item->frame = frame;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC7C8_14[] = {0x0042D5B0U, 0x0042D5B8U, 0x0042D5C0U, 0x0042D5C8U, 0x0042D5DCU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1B48_14[] = {0x0042D5B0U, 0x0042D5B8U, 0x0042D5C0U, 0x0042D5C8U, 0x0042D5DCU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE198_14[] = {0x0042E020U, 0x0042E028U, 0x0042E030U, 0x0042E038U, 0x0042E04CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9358_14[] = {0x0042E170U, 0x0042E178U, 0x0042E180U, 0x0042E188U, 0x0042E19CU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDB18_14[] = {0x0042D3D0U, 0x0042D3D8U, 0x0042D3E0U, 0x0042D3E8U, 0x0042D3FCU};
#endif
