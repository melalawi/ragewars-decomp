#include "basetypes.h"

extern void func_80255428(s32 arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern char D_8010510C;
extern s32 D_801050F8;

typedef struct func_80254D70_S1 func_80254D70_S1;
typedef struct func_80254D70_S2 func_80254D70_S2;
typedef struct func_80254D70_S3 func_80254D70_S3;
struct func_80254D70_S1 {
    char pad0[0x14];
    void* unk14;
};
struct func_80254D70_S2 {
    char pad0[0x8];
    s32 unk8;
};
struct func_80254D70_S3 {
    char pad0[0x10];
    s32 unk10;
};

void func_80254D70(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_s0;

    temp_v0 = ((func_80254D70_S1 *)(arg1))->unk14;
    if (temp_v0 != 0) {
        func_80255428(((func_80254D70_S2 *)(temp_v0))->unk8);
        temp_s0 = ((func_80254D70_S1 *)(arg1))->unk14;
        func_80255E78(&D_8010510C, temp_s0);
        ((func_80254D70_S3 *)(temp_s0))->unk10 = 0;
        func_80255C58(&D_801050F8, (s32) temp_s0);
    }
}
