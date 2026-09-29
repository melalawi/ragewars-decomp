#include "basetypes.h"

extern void func_8026DC24(void * *, s32, s32, void *, s32, s32);
extern s32 D_800D297C;

typedef struct func_80205628_S1 func_80205628_S1;
typedef struct func_80205628_S2 func_80205628_S2;
typedef struct func_80205628_S3 func_80205628_S3;
struct func_80205628_S1 {
    char pad0[0xB4];
    s32 unkB4;
    char padB4[0x17C - 0xB4 - sizeof(s32)];
    s32 unk17C;
};
struct func_80205628_S2 {
    char pad0[0x124];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};
struct func_80205628_S3 {
    char pad0[0xC];
    s32 unkC;
};

void func_80205628(void *arg0, void *arg1, void *arg2) {
    ((func_80205628_S1 *)(arg0))->unk17C = 1 << ((func_80205628_S2 *)(arg1))->unk124;
    if (*(s32 *) arg2 != 0) {
        func_8026DC24(((func_80205628_S3 *)(arg2))->unkC, ((func_80205628_S1 *)(arg0))->unkB4, 1,
                      (char *) arg0 + (D_800D297C * 0x18 + 0x140), 0, ((func_80205628_S2 *)(arg1))->unk128);
    }
}
