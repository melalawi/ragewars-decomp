#include "basetypes.h"

/* Pulses entry i of the 2920-byte records D_800E54A4 points to: takes the sine of i plus the
   entry's phase word at 0x2C + 4i scaled by D_800E1EF8, maps it through the next two constants,
   and stores the unsigned result as the alpha byte at 0x10 of items 0x2C2 and 0x2C3 of the
   entry's window. */

#if defined(VERSION_DE)
#define VALUE_2C2 0x2E4
#define VALUE_2C3 0x2E5
#elif defined(VERSION_EU_X)
#define VALUE_2C2 0x2D5
#define VALUE_2C3 0x2D4
#else
#define VALUE_2C2 0x2C2
#define VALUE_2C3 0x2C3
#endif

struct Item {
    char pad[0x10];
    unsigned char alpha;
};

struct Entry {
    char pad0[0x2C];
    s32 phases[1];
    char pad30[0x68 - 0x30];
    void *window;
    char pad6C[2920 - 0x6C];
};

extern struct Entry *D_800E54A4;
extern float D_800E1EF8;
extern float D_800E1F00;
#define SCALE (*(&D_800E1EF8 + 1))
#define TWO_31 (*(&D_800E1F00 + 1))
extern float func_802BB630(float);
extern struct Item *func_8040ECB0(void *, s32);

void func_804351A0(s32 index) {
    float f;
    u32 alpha;
    struct Entry *entry;

    f = func_802BB630((float)index + (float)D_800E54A4->phases[index] * D_800E1EF8)
        * SCALE + D_800E1F00;
    if (f >= TWO_31) {
        goto large;
    }
    alpha = (s32)f;
    goto converted;
large:
    alpha = (s32)(f - TWO_31);
    alpha |= 0x80000000;
converted:
    entry = &D_800E54A4[index];
    func_8040ECB0(entry->window, VALUE_2C2)->alpha = alpha;
    entry = &D_800E54A4[index];
    func_8040ECB0(entry->window, VALUE_2C3)->alpha = alpha;
}
