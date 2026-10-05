#include "span_1000/code_802A0888.h"
#include "types.h"

void func_802A01D8_de(int arg0) {
    D_800CD900 = arg0;
}

s32 func_802A01E8_de(void) {
    s32 temp_v0;

    temp_v0 = (D_800CD900 * 0x343FD) + 0x269EC3;
    D_800CD900 = temp_v0;
    return (temp_v0 >> 0x10) & 0x7FFF;
}

/** Return strlen(arg0) (byte count not including the terminating NUL). */
s32 func_802A0238_de(u8 *arg0) {
    u8 *var_v1;
    u8 temp;

    var_v1 = arg0 + 1;
    if (*arg0 != 0) {
        do {
            temp = *var_v1;
            var_v1 += 1;
        } while (temp != 0);
    }
    return (var_v1 - arg0) - 1;
}

u8 *func_802A025C_de(u8 *arg0, u8 *arg1) {
    u8 *dst;
    u8 c;

    c = *arg1;
    arg1++;
    *arg0 = c;
    dst = arg0 + 1;
    if (c != 0) {
        do {
            c = *arg1;
            arg1++;
            *dst = c;
            dst++;
        } while (c != 0);
    }
    return arg0;
}

/** strncpy: copy up to arg2 bytes from arg1 to arg0, NUL-padding the remainder. */
u8 *func_802A0294_de(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_v1 = var_a0;
    if (var_a2 != 0) {
    loop_1:
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_a0 = temp_v0;
        var_a0 += 1;
        if (temp_v0 & 0xFF) {
            var_a2 -= 1;
            if (var_a2 != 0) {
                goto loop_1;
            }
        }
        if (var_a2 != 0) {
            var_a2 -= 1;
            if (var_a2 != 0) {
                do {
                    *var_a0 = 0;
                    var_a2 -= 1;
                    var_a0 += 1;
                } while (var_a2 != 0);
            }
        }
    }
    return temp_v1;
}

u8 *func_802A02E8_de(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_v0;
    var_a1 = arg1;
    var_v1 = arg0;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (temp_v0 & 0xFF);
    return arg0;
}

u8 *func_802A0324_de(u8 *destination, u8 *source, s32 count) {
    u8 *end = destination + 1;
    u8 byte;
    if (*destination != 0) {
        do { } while (*end++ != 0);
    }
    --end;
    while (count-- != 0) {
        byte = *source++;
        *end++ = byte;
        if (!(byte & 0xFF)) return destination;
    }
    *end = 0;
    return destination;
}
