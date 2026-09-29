#include "basetypes.h"

extern s32 func_802301E4(void);
extern void func_8022AFFC(void *arg0);

typedef struct func_80233588_S1 func_80233588_S1;
typedef struct func_80233588_S2 func_80233588_S2;
struct func_80233588_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80233588_S2 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x13C - 0xCB - sizeof(s8)];
    s32 unk13C;
};

void func_80233588(void *arg0, void *arg1) {
    void *temp_s1;

    temp_s1 = ((func_80233588_S1 *)(arg0))->unk1D8;
    if (((func_80233588_S2 *)(arg1))->unkCB != 0) {
        ((func_80233588_S2 *)(arg1))->unk13C = 2;
        if (func_802301E4() != 0) {
            ((func_80233588_S2 *)(arg1))->unk13C = 1;
            func_8022AFFC(temp_s1);
        }
    }
}
