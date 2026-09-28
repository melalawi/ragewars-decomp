#include "basetypes.h"

extern s32 func_8024D150(void *arg0);

void func_8022A1D0(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = *(void **)((char *)arg0 + 0x20);
    if (node != 0) {
        do {
            *(s32 *)((char *)node + 0x70) = 0;
            *(s32 *)((char *)node + 0x358) = 0;
            if (func_8024D150(node) != 0) {
                if (node) {
                    count1 = *(s32 *)((char *)arg1 + 0x944);
                } else {
                    count1 = *(s32 *)((char *)arg1 + 0x944);
                }
                if (count1 != 0x200) {
                    scale = 4;
                    *(void **)((char *)((s32)arg1 + count1 * scale) + 0x144) = node;
                    *(s32 *)((char *)arg1 + 0x944) = count1 + 1;
                }
                count1 = 0xB48;
                count2 = *(s32 *)((char *)arg1 + count1);
                if (count2 != 0x80) {
                    *(void **)((entry = (char *)((s32)arg1 + count2 * 4)) + 0x948) = node;
                    *(s32 *)((char *)arg1 + count1) = count2 + 1;
                }
            }
            node = *(void **)((char *)node + 0x16E0);
        } while (node != 0);
    }
}
