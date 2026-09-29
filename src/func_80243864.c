#include "basetypes.h"

extern void func_8026F690(void *, void *, void *);
extern char *func_8028FD94(s32 *, s32);
extern void func_80242FD8(void *arg0, void *arg1);

typedef struct func_80243864_S1 func_80243864_S1;
typedef struct func_80243864_S2 func_80243864_S2;
struct func_80243864_S1 {
    char pad0[0x58];
    void* unk58;
    char pad58[0x64 - 0x58 - sizeof(void*)];
    char unk64;
    char pad64[0xA4 - 0x64 - sizeof(char)];
    void* unkA4;
};
struct func_80243864_S2 {
    char pad0[0x68];
    char unk68;
    char pad68[0xB4 - 0x68 - sizeof(char)];
    void** unkB4;
};

void func_80243864(void *arg0) {
    void *temp_a1;
    void **temp_s0;
    void *temp_s0_2;
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_s0;

    temp_a1 = ((func_80243864_S1 *)(arg0))->unk58;
    temp_s0 = ((func_80243864_S2 *)(temp_a1))->unkB4;
    if (temp_s0 != 0) {
        func_8026F690(&((func_80243864_S1 *)(arg0))->unk64, &((func_80243864_S2 *)(temp_a1))->unk68, (char *) arg0 + 0xC);
        temp_s0_2 = *temp_s0;
        ((func_80243864_S1 *)(arg0))->unkA4 = func_8028FD94(temp_s0_2, 0);
        temp_v0 = func_8028FD94(temp_s0_2, 2);
        temp_s1 = *temp_v0;
        var_s0 = 0;
        if (temp_s1 > 0) {
            do {
                func_80242FD8(arg0, func_8028FD94((void *) temp_v0, var_s0));
                var_s0 += 1;
            } while (var_s0 < temp_s1);
        }
    }
}
