#include "basetypes.h"

extern void func_80271FD8(void *out, void *a, void *b);
extern void func_80272088(void *out, void *a, void *b);
extern void func_802720EC(void *out);

typedef struct func_80297878_S1 func_80297878_S1;
typedef struct func_80297878_S2 func_80297878_S2;
struct func_80297878_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_80297878_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_80297878(void *arg0, void *arg1, void *arg2, void *arg3) {
    u8 sp10[12];
    u8 sp20[12];

    func_80271FD8(sp10, arg2, arg1);
    func_80271FD8(sp20, arg3, arg2);
    func_80272088(arg0, sp20, sp10);
    func_802720EC(arg0);
    ((func_80297878_S1 *)(arg0))->unkC = (((func_80297878_S1 *)(arg0))->unk0 * ((func_80297878_S2 *)(arg1))->unk0)
                                  + (((func_80297878_S1 *)(arg0))->unk4 * ((func_80297878_S2 *)(arg1))->unk4)
                                  + (((func_80297878_S1 *)(arg0))->unk8 * ((func_80297878_S2 *)(arg1))->unk8);
}
