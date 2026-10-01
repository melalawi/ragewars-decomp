/* Adds ammunition to a player's weapon slot: computes the slot's cap as func_80222D40 does (zero for
   no slot, the character's cap unless option D_801462D5 is 1, otherwise D_800CE3E8's cap plus the
   profile bonus from D_80102B14 unless the flag at 0x1450 is set), and when the slot has room it
   selects weapon 1, 5 or 4 at 0xCC0 for slots 0, 1 and 2 if the slot was empty and ammunition is
   added, then adds the amount clamped to the cap. Returns whether the slot had room. Adapted from
   func_80222D40 with the count read once into an int and the weapon selection as a switch. */
#include "basetypes.h"

typedef struct {
    u8 bonus2;
    u8 bonus0;
    u8 bonus1;
    char pad[0x18D];
} Profile;

typedef struct {
    char pad[0x108];
    s32 caps[4];
} Desc;

extern void *func_802AD940(s32);
extern u8 D_801462D5;
extern s32 D_800CE3E8[];
extern Profile D_80102B14[];

typedef struct func_80222BC4_S1 func_80222BC4_S1;
struct func_80222BC4_S1 {
    char pad0[0x18];
    Desc* unk18;
    char pad18[0x5D4 - 0x18 - sizeof(Desc*)];
    s32 unk5D4;
    char pad5D4[0x5F4 - 0x5D4 - sizeof(s32)];
    char unk5F4;
    char pad5F4[0xCC0 - 0x5F4 - sizeof(char)];
    s32 unkCC0;
    char padCC0[0x1450 - 0xCC0 - sizeof(s32)];
    s32 unk1450;
};

s32 func_80222BC4(void *player, s32 slot, s32 amount) {
    s16 *count;
    s32 cap;
    s32 room;
    s32 total;
    s32 have;

    count = (s16 *) (&((func_80222BC4_S1 *)(player))->unk5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else if (D_801462D5 != 1) {
        cap = (((func_80222BC4_S1 *)(player))->unk18)->caps[slot];
    } else {
        cap = D_800CE3E8[slot];
        if (((func_80222BC4_S1 *)(player))->unk1450 == 0) {
            if (slot == 0) {
                cap += D_80102B14[((func_80222BC4_S1 *)(player))->unk5D4].bonus0;
            } else if (slot == 1) {
                cap += D_80102B14[((func_80222BC4_S1 *)(player))->unk5D4].bonus1;
            } else if (slot == 2) {
                cap += D_80102B14[((func_80222BC4_S1 *)(player))->unk5D4].bonus2;
            }
        }
    }
    have = *count;
    room = have < cap;
    if (room) {
        if (have == 0 && amount > 0) {
            switch (slot) {
            case 0:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 1;
                break;
            case 1:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 5;
                break;
            case 2:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 4;
                break;
            }
        }
        total = (s16) (*count += amount);
        if (total > cap) {
            total = cap;
        }
        *count = total;
    }
    return room;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5138_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA2F8_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4EA8_4 = 0.25f;
const float unbake_rodata_800C4EAC_4 = 1.41421354f;
const float unbake_rodata_800C4EB0_4 = 0.5f;
const float unbake_rodata_800C4EB4_4 = 32.0f;
const float unbake_rodata_800C4EB8_4 = 6.0f;
const float unbake_rodata_800C4EBC_4 = 32.0f;
const float unbake_rodata_800C4EC0_4 = 0.0174532942f;
const float unbake_rodata_800C4EC4_4 = 0.0666666701f;
const float unbake_rodata_800C4EC8_4 = 10.2399998f;
const float unbake_rodata_800C4ECC_4 = 4096.0f;
const float unbake_rodata_800C4ED0_4 = 400.0f;
const float unbake_rodata_800C4ED4_4 = 4096.0f;
const float unbake_rodata_800C4ED8_4 = 400.0f;
const float unbake_rodata_800C4EDC_4 = 10.2399998f;
const float unbake_rodata_800C4EE0_4 = 0.5f;
const float unbake_rodata_800C4EE4_4 = 0.00100000005f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4E68_4 = 30.0f;
const float unbake_rodata_800C4E6C_4 = (-40.9599991f);
const float unbake_rodata_800C4E70_4 = 51.1999969f;
const float unbake_rodata_800C4E74_4 = 5.0f;
const float unbake_rodata_800C4E78_4 = 0.5f;
const float unbake_rodata_800C4E7C_4 = 10.0f;
const float unbake_rodata_800C4E80_4 = 90.0f;
const float unbake_rodata_800C4E84_4 = 0.100000001f;
const float unbake_rodata_800C4E88_4 = 5.0f;
const float unbake_rodata_800C4E8C_4 = 0.300000012f;
const float unbake_rodata_800C4E90_4 = 1.0f;
const float unbake_rodata_800C4E94_4 = 30.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C4EE0_23[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x43, 0x6F, 0x6E, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x4D, 0x61, 0x70, 0x3A, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800C4F04_28[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x43, 0x6F, 0x6E, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x4D, 0x61, 0x70, 0x3A, 0x20, 0x73, 0x69, 0x6D, 0x70, 0x20, 0x6D, 0x6F, 0x64, 0x65, 0x6C, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800C4F2C_23[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x43, 0x6F, 0x6E, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x4D, 0x61, 0x70, 0x3A, 0x20, 0x73, 0x69, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x6D, 0x6F, 0x64, 0x65, 0x6C, 0x00};
#endif
