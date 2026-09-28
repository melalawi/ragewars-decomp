#include "basetypes.h"

void func_80276308(void *arg0, u16 arg1) {
    u16 temp_s0;
    u16 temp_v1;
    void *temp_a0;

    temp_s0 = *(u16 *)((char *)arg0 + 0);
    if (temp_s0 == arg1) {
        temp_v1 = *(u16 *)((char *)arg0 + 2);
        if (temp_v1 & 4) {
            temp_a0 = *(void **)((char *)arg0 + 0x10);
            *(u16 *)((char *)arg0 + 2) = temp_v1 & 0xFFFB;
            if (temp_a0 != 0) {
                func_80276308(temp_a0, temp_s0);
            }
            temp_a0 = *(void **)((char *)arg0 + 0x14);
            if (temp_a0 != 0) {
                func_80276308(temp_a0, temp_s0);
            }
            temp_a0 = *(void **)((char *)arg0 + 0x18);
            if (temp_a0 != 0) {
                func_80276308(temp_a0, temp_s0);
            }
        }
    }
}
