#include "basetypes.h"

extern char D_801051A0;

extern void func_80254D70(void *arg0, void *arg1);
extern void func_80255ACC(void *arg0, s32 arg1);
extern void func_80254A70(s32, s32);

void func_80254930(void *unused, void *arg1) {
    s32 temp_v0;

    *(s32 *) ((char *) arg1 + 0xC) = *(s32 *) ((char *) arg1 + 0xC) & ~2;
    if (*(s32 *) ((char *) arg1 + 8) != 0) {
    loop_1:
        do {
            temp_v0 = *(s32 *) ((char *) arg1 + 8) - 1;
            *(s32 *) ((char *) arg1 + 8) = temp_v0;
            if (temp_v0 != 0) {
                goto loop_1;
            }
            *(s32 *) ((char *) arg1 + 0xC) = *(s32 *) ((char *) arg1 + 0xC) & ~0x100;
        } while (*(s32 *) ((char *) arg1 + 8) != 0);
    }
    if (!(*(s32 *) ((char *) arg1 + 0xC) & 0x702)) {
        func_80254D70(0, arg1);
        func_80255ACC(&D_801051A0, *(s32 *) arg1);
        func_80254A70(0, arg1);
    }
}
