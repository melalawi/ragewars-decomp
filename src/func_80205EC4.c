#include "basetypes.h"

extern int D_206018;
extern int D_800CD79C;

typedef struct func_80205EC4_S1 func_80205EC4_S1;
typedef struct func_80205EC4_S2 func_80205EC4_S2;
typedef struct func_80205EC4_S3 func_80205EC4_S3;
struct func_80205EC4_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0xE4 - 0x18 - sizeof(void*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};
struct func_80205EC4_S2 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
};
struct func_80205EC4_S3 {
    char pad0[0x14];
    s32 unk14;
};

void func_80205EC4(void *arg0, void *arg1) {
    void *inner = ((func_80205EC4_S1 *)(arg0))->unk18;

    ((func_80205EC4_S2 *)(arg1))->unk2C = &D_800CD79C;
    ((func_80205EC4_S2 *)(arg1))->unk108 = &D_206018;
    if ((((func_80205EC4_S1 *)(arg0))->unkE4 == 0x644) ||
        (((func_80205EC4_S3 *)(inner))->unk14 & 8)) {
        ((func_80205EC4_S1 *)(arg0))->unk100 &= ~0x2000;
    }
}
