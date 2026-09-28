#include "basetypes.h"

s32 func_80265464(u32 *arg0, u32 *arg1, s32 arg2) {
    u8 *end = (u8 *)arg0 + arg2;

    if (arg2 >= 4 && !((u32)arg0 & 3) && !((u32)arg1 & 3)) {
        end -= 4;
        if ((u32 *)end < arg0) {
            end += 4;
            goto byte_loop;
        }
word_loop:
        if (*arg0 != *arg1) {
            goto word_mismatch;
        }
        arg0++;
        goto word_continue;
word_mismatch:
        arg0--;
        arg1--;
        goto word_done;
word_continue:
        arg1++;
        if (arg0 <= (u32 *)end) {
            goto word_loop;
        }
word_done:
        end += 4;
    }

byte_loop:
    while ((u8 *)arg0 < end) {
        u8 left = *(u8 *)arg0;
        u8 right = *(u8 *)arg1;

        if (left != right) {
            if (left < right) {
                return -1;
            }
            return 1;
        }
        arg0 = (u32 *)((u8 *)arg0 + 1);
        arg1 = (u32 *)((u8 *)arg1 + 1);
    }
    return 0;
}
