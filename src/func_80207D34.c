#include "basetypes.h"

extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

void func_80207D34(void *arg0, u32 *arg1) {
    void *temp_s0;

    temp_s0 = *(char **) ((char *) arg0 + 0x18) + 0x14;
    func_80278DE8(arg0, 0x20000, arg0);
    if (!(*(s32 *) ((char *) temp_s0 + 0x24) & 0x80)) {
        *arg1 &= 0xFFFDFFFF;
    }
}
