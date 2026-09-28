#include "basetypes.h"

typedef struct {
    u32 words[5];
} Record14;

extern void func_80278C80(void *);

void func_80278F70(Record14 *arg0) {
    Record14 copy;
    u8 *bytes = (u8 *)arg0;

    bytes[0xE] |= 0x20;
    if (bytes[0x11] == 1) {
        copy = *arg0;
        ((u8 *)&copy)[0x12] = 2;
        ((u8 *)&copy)[0x10] = 0;
        func_80278C80(&copy);
    }
}
