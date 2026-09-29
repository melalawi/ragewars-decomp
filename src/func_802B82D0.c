#include "basetypes.h"
typedef void (*FuncPtr)(void *, s32, void *);

extern void *func_802B8CC8(void);
extern void func_802B8D0C(s32 arg0, void *arg1);

typedef struct func_802B82D0_S1 func_802B82D0_S1;
typedef struct func_802B82D0_S2 func_802B82D0_S2;
typedef struct func_802B82D0_S3 func_802B82D0_S3;
typedef struct func_802B82D0_S4 func_802B82D0_S4;
typedef union func_802B82D0_S1_U8 { void* v0; char* v1; } func_802B82D0_S1_U8;
struct func_802B82D0_S1 {
    char pad0[0x8];
    func_802B82D0_S1_U8 unk8;
};
struct func_802B82D0_S2 {
    char pad0[0x1C];
    s32 unk1C;
};
struct func_802B82D0_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    void* unkC;
};
struct func_802B82D0_S4 {
    char pad0[0x8];
    FuncPtr unk8;
};

void func_802B82D0(void *arg0, void *arg1) {
    void *v0;
    void *temp_a0;
    FuncPtr fn;
    s32 new_var;

    if ((((func_802B82D0_S1 *)(arg1))->unk8.v0) != 0) {
        if ((*((s32 *) ((((func_802B82D0_S1 *)(arg1))->unk8.v1) + 0xD8))) != 0) {
            v0 = func_802B8CC8();
            if (v0 != 0) {
                new_var = (((func_802B82D0_S2 *)(arg0))->unk1C) + (*((s32 *) ((((func_802B82D0_S1 *)(arg1))->unk8.v1) + 0xD8)));
                ((func_802B82D0_S3 *)(v0))->unk8 = 0;
                ((func_802B82D0_S3 *)(v0))->unk4 = new_var;
                ((func_802B82D0_S3 *)(v0))->unkC = ((func_802B82D0_S1 *)(arg1))->unk8.v0;
                temp_a0 = *((void **) ((((func_802B82D0_S1 *)(arg1))->unk8.v1) + 0xC));
                fn = ((func_802B82D0_S4 *)(temp_a0))->unk8;
                fn(temp_a0, 3, v0);
                ((func_802B82D0_S1 *)(arg1))->unk8.v0 = 0;
            }
        } else {
            func_802B8D0C((s32) arg0, ((func_802B82D0_S1 *)(arg1))->unk8.v0);
            ((func_802B82D0_S1 *)(arg1))->unk8.v0 = 0;
        }
    }
}
