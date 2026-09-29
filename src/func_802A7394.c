#include "basetypes.h"

extern f32 D_800CB050;
extern f32 D_800CB054;
extern void func_80270980(f32 *, s32);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_802A35C0(void *arg0, void *arg1, f32 *arg2);

typedef struct func_802A7394_S1 func_802A7394_S1;
typedef struct func_802A7394_S2 func_802A7394_S2;
typedef struct func_802A7394_S3 func_802A7394_S3;
struct func_802A7394_S1 {
    char pad0[0x1C];
    void* unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    f32 unk24;
};
struct func_802A7394_S2 {
    char pad0[0x118];
    void* unk118;
};
struct func_802A7394_S3 {
    char pad0[0x14];
    s32 unk14;
};

void func_802A7394(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 local[16];
    void *entry;
    f32 scale;

    entry = ((func_802A7394_S1 *)(arg1))->unk1C;
    if (entry == arg2 && ((func_802A7394_S1 *)(arg1))->unk24 > 0.0f) {
        func_80270980(local, arg3);
        scale = D_800CB050;
        if (((func_802A7394_S3 *)(((func_802A7394_S2 *)(entry))->unk118))->unk14 != 0) {
            scale = D_800CB054;
        }
        func_802734EC(local, scale, scale, scale);
        func_80272898(local);
        func_802A35C0(arg0, arg1, local);
    }
}
