#include "basetypes.h"

/* Resets a 0x1208-byte actor: clears it through func_802A101C, initialises its three lists at 0xC,
   0x20 and 0xF24 through func_80255C40, sets its words at 0x1200 and 0x38 to 1 and 2, clears those at
   0 to 8 and 0xF18 to 0xF20, and resets the parts at offset 0x40 through func_8044ADC0 and
   func_80234FDC. */
extern void func_802A101C(void *, s32, s32);
extern void func_80255C40(void *, s32, s32);
extern void func_8044ADC0(void *);
extern void func_80234FDC(void *);

typedef struct func_8044B27C_S1 func_8044B27C_S1;
struct func_8044B27C_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x38 - 0x8 - sizeof(s32)];
    s32 unk38;
    char pad38[0xF18 - 0x38 - sizeof(s32)];
    s32 unkF18;
    char padF18[0xF1C - 0xF18 - sizeof(s32)];
    s32 unkF1C;
    char padF1C[0xF20 - 0xF1C - sizeof(s32)];
    s32 unkF20;
    char padF20[0x1200 - 0xF20 - sizeof(s32)];
    s32 unk1200;
};

void func_8044B27C(char *actor) {
    char *parts;

    func_802A101C(actor, 0, 0x1208);
    func_80255C40(actor + 0xC, 0, 4);
    func_80255C40(actor + 0x20, 0, 4);
    func_80255C40(actor + 0xF24, 0, 4);
    parts = actor + 0x40;
    ((func_8044B27C_S1 *)(actor))->unk1200 = 1;
    ((func_8044B27C_S1 *)(actor))->unk0 = 0;
    ((func_8044B27C_S1 *)(actor))->unk4 = 0;
    ((func_8044B27C_S1 *)(actor))->unk8 = 0;
    ((func_8044B27C_S1 *)(actor))->unkF18 = 0;
    ((func_8044B27C_S1 *)(actor))->unkF1C = 0;
    ((func_8044B27C_S1 *)(actor))->unkF20 = 0;
    ((func_8044B27C_S1 *)(actor))->unk38 = 2;
    func_8044ADC0(parts);
    func_80234FDC(parts);
}
