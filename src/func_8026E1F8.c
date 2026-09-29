#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_80253F2C(s32 arg0, s32 arg1);

typedef struct func_8026E1F8_S1 func_8026E1F8_S1;
struct func_8026E1F8_S1 {
    char pad0[0x8];
    s32 unk8;
};

void func_8026E1F8(void **arg0) {
    void *temp_v0;
    s32 count;
    s32 i;
    void *rec;

    temp_v0 = func_8028FD94(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FD94(func_8028FD94(temp_v0, i), 0);
        if (((func_8026E1F8_S1 *)(rec))->unk8 == 0) {
            continue;
        }
        func_80253F2C(0, ((func_8026E1F8_S1 *)(rec))->unk8);
    }
}
