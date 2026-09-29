#include "basetypes.h"

extern void func_802737D0(void *arg0, f32 arg1);
extern void func_80273930(void *arg0, f32 arg1);
extern void func_80273B08(void *arg0, f32 arg1);
extern void func_8027302C(float *arg0, float *arg1);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(void *);

typedef struct func_80207910_S1 func_80207910_S1;
typedef struct func_80207910_S2 func_80207910_S2;
struct func_80207910_S1 {
    char pad0[0x134];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};
struct func_80207910_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x50 - 0x10 - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    f32 unk6C;
    char pad6C[0x74 - 0x6C - sizeof(f32)];
    char unk74;
};

void func_80207910(void *arg0, void *arg1) {
    f32 sp10[16];
    char *temp_s1;

    func_802737D0(sp10, ((func_80207910_S1 *)(arg1))->unk138);
    func_80273930(sp10, ((func_80207910_S1 *)(arg1))->unk134);
    func_80273B08(sp10, ((func_80207910_S2 *)(arg0))->unk6C);
    temp_s1 = &((func_80207910_S2 *)(arg0))->unk74;
    func_8027302C((float *) temp_s1, sp10);
    func_802734EC(temp_s1, ((func_80207910_S2 *)(arg0))->unk50, ((func_80207910_S2 *)(arg0))->unk54, ((func_80207910_S2 *)(arg0))->unk58);
    func_802725BC(&((func_80207910_S2 *)(arg0))->unk8, 20000.0f);
    func_802734B8(temp_s1, ((func_80207910_S2 *)(arg0))->unk8, ((func_80207910_S2 *)(arg0))->unkC, ((func_80207910_S2 *)(arg0))->unk10);
    func_80273DDC(temp_s1);
}
