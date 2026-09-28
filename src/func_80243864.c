#include "basetypes.h"

extern void func_8026F690(void *, void *, void *);
extern char *func_8028FD94(s32 *, s32);
extern void func_80242FD8(void *arg0, void *arg1);

void func_80243864(void *arg0) {
    void *temp_a1;
    void **temp_s0;
    void *temp_s0_2;
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_s0;

    temp_a1 = *(void **) ((char *) arg0 + 0x58);
    temp_s0 = *(void ***) ((char *) temp_a1 + 0xB4);
    if (temp_s0 != 0) {
        func_8026F690((char *) arg0 + 0x64, (char *) temp_a1 + 0x68, (char *) arg0 + 0xC);
        temp_s0_2 = *temp_s0;
        *(void **) ((char *) arg0 + 0xA4) = func_8028FD94(temp_s0_2, 0);
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
