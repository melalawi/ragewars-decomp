#include "basetypes.h"

extern s32 func_802301E4(void);
extern s32 func_80214178(void *, void *, s32);

typedef struct func_80232B54_S1 func_80232B54_S1;
typedef struct func_80232B54_S2 func_80232B54_S2;
typedef struct func_80232B54_S3 func_80232B54_S3;
struct func_80232B54_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80232B54_S2 {
    char pad0[0x788];
    s32 unk788;
    char pad788[0x78C - 0x788 - sizeof(s32)];
    s32 unk78C;
    char pad78C[0x794 - 0x78C - sizeof(s32)];
    s32 unk794;
};
struct func_80232B54_S3 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x124 - 0xCB - sizeof(s8)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};

void func_80232B54(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = ((func_80232B54_S1 *)(arg0))->unk1D8;
    ((func_80232B54_S2 *)(temp_v0))->unk788 = 1;
    ((func_80232B54_S2 *)(temp_v0))->unk794 = 0;
    ((func_80232B54_S2 *)(temp_v0))->unk78C = 0;
    ((func_80232B54_S3 *)(arg1))->unk124 = 0;
    ((func_80232B54_S3 *)(arg1))->unk128 = 0;
    if ((((func_80232B54_S3 *)(arg1))->unkCB != 0) && (func_802301E4() == 0)) {
        func_80214178(arg0, arg1, 2);
    }
}
