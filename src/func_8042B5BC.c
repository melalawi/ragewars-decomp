/* When the global session is mode 3 with no pending state and the caller's high word and empty flag agree, resets the mode, restarts five subsystems and queues one status message. */
#include "basetypes.h"

typedef struct Target {
    char pad0[0x10];
    u8 unk10;
} Target;

typedef struct G {
    char pad0[0x3DC];
    s32 unk3DC;
    char pad3E0[0x3EC - 0x3E0];
    s32 unk3EC;
    s32 unk3F0;
    char pad3F4[0x440 - 0x3F4];
    s32 unk440;
    s32 unk444;
    s32 unk448;
    Target *unk44C;
} G;

extern G *D_800E4F60;
extern s32 D_80154020;

extern void func_8029A73C(void);
extern void func_8042A994(s32 a0);
extern void func_8040E958(s32 a0, s32 a1);
extern void func_8025DF54(s32 a0);

s32 func_8042B5BC(s32 a0, s32 a1, s32 a2, s32 a3)
{
    s32 v = D_800E4F60->unk3DC;

    if (v != 3) {
        return 0;
    }
    if (D_80154020 != -1) {
        return 0;
    }
    if ((u32)a2 >> 16 != v) {
        return 0;
    }
    if (a3 != 0) {
        return 0;
    }

    func_8029A73C();
    D_800E4F60->unk3DC = 8;
    func_8042A994(0x41);

    func_8040E958(D_800E4F60->unk440, 0);
    func_8040E958(D_800E4F60->unk444, 0);
    func_8040E958(D_800E4F60->unk448, 0);
    func_8040E958(D_800E4F60->unk3EC, 0);
    func_8040E958(D_800E4F60->unk3F0, 0);

    D_800E4F60->unk44C->unk10 = 0x5A;
    func_8025DF54(0xE7C);

    return 0;
}
