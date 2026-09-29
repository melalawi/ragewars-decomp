#include "basetypes.h"

typedef struct func_8028CC80_S1 func_8028CC80_S1;
typedef struct func_8028CC80_S2 func_8028CC80_S2;
struct func_8028CC80_S1 {
    char pad0[0xC50];
    void* unkC50;
    char padC50[0xE50 - 0xC50 - sizeof(void*)];
    s32 unkE50;
};
struct func_8028CC80_S2 {
    char pad0[0x1D8];
    s32 unk1D8;
};

void func_8028CC80(void *arg0, s32 arg1) {
    s32 count;
    s32 i;
    void **arr;
    void *entry;

    i = 0;
    count = ((func_8028CC80_S1 *)((arg0)))->unkE50;
    arr = &((func_8028CC80_S1 *)((arg0)))->unkC50;
    if (count > 0) {
        do {
            entry = *arr;
            if (((func_8028CC80_S2 *)((entry)))->unk1D8 == arg1) {
                ((func_8028CC80_S2 *)((entry)))->unk1D8 = 0;
            }
            i += 1;
            arr += 1;
        } while (i < count);
    }
}
