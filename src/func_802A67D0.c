#include "basetypes.h"

extern void func_8027302C(f32 *arg0, f32 *arg1);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_802A35C0(void *arg0, void *arg1, f32 *arg2);
extern f32 D_800CB024;

typedef struct func_802A67D0_S1 func_802A67D0_S1;
typedef struct func_802A67D0_S2 func_802A67D0_S2;
typedef struct func_802A67D0_S3 func_802A67D0_S3;
struct func_802A67D0_S1 {
    char pad0[0x7528];
    void* unk7528;
};
struct func_802A67D0_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void* unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x24 - 0x1C - sizeof(s32)];
    f32 unk24;
};
struct func_802A67D0_S3 {
    char pad0[0xC];
    s32 unkC;
};

void func_802A67D0(void *arg0, s32 arg1, char *arg2) {
    f32 sp10[16];
    f32 temp;
    f32 zero;
    void *node;

    node = ((func_802A67D0_S1 *)(arg0))->unk7528;
    if (node != 0) {
        zero = 0.0f;
        temp = D_800CB024;
        do {
            if (((func_802A67D0_S2 *)(node))->unk1C == arg1 && ((func_802A67D0_S2 *)(node))->unk24 > zero) {
                func_8027302C(sp10, (f32 *)(arg2 + (((func_802A67D0_S3 *)(((func_802A67D0_S2 *)(node))->unk8))->unkC << 6)));
                func_802734EC(sp10, temp, temp, temp);
                func_80272898(sp10);
                func_802A35C0(arg0, node, sp10);
            }
            node = ((func_802A67D0_S2 *)(node))->unk4;
        } while (node != 0);
    }
}
