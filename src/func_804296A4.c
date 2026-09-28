#include "basetypes.h"

/* Refreshes the option block D_801462C8 from the menu D_800E4EF0 points to: the bytes at 0x24 to
   0x27 from the values func_802A2B18 reports for its items at 0x28, 0x24, 0x2C and 0x30, and the
   byte at 0x28 from the selection func_8041AD84 reports for its item at 0x1C. */
struct Options {
    char pad[0x24];
    u8 values[5];
};

extern char *D_800E4EF0;
extern struct Options D_801462C8;
extern s32 func_802A2B18(void *);
extern s32 func_8041AD84(void *);

void func_804296A4(void) {
    struct Options *options;
    s32 value;

    value = func_802A2B18(*(void **) (D_800E4EF0 + 0x28));
    options = &D_801462C8;
    options->values[0] = value;
    options->values[1] = func_802A2B18(*(void **) (D_800E4EF0 + 0x24));
    options->values[2] = func_802A2B18(*(void **) (D_800E4EF0 + 0x2C));
    options->values[3] = func_802A2B18(*(void **) (D_800E4EF0 + 0x30));
    options->values[4] = func_8041AD84(*(void **) (D_800E4EF0 + 0x1C));
}
