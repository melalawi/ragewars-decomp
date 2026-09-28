#include "basetypes.h"

void func_8023EC44(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = *(s32 *)((char *)arg0 + 0x3C);
    if (temp_v1 & 0x1000) {
        *(s32 *)((char *)arg0 + 0x3C) = temp_v1 & ~0x2000;
    }
    temp_v0 = *(s32 *)((char *)arg0 + 0x3C);
    temp_v1_2 = temp_v0 & 0xFFFC7FFF;
    *(s32 *)((char *)arg0 + 0x3C) = temp_v1_2;
    if (temp_v0 & 0x7000) {
        temp_a1 = *(s32 *)((char *)arg1 + 0xC);
        switch (temp_a1) {
        case 8:
            *(s32 *)((char *)arg0 + 0x3C) = temp_v1_2 | 0x10000;
            return;
        case 7:
            *(s32 *)((char *)arg0 + 0x3C) = temp_v1_2 | 0x8000;
            break;
        }
    }
}
