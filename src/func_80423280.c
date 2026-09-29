#include "basetypes.h"

/* Refreshes the option block D_801462C8 from the menu D_800E4510 points to: the bytes at 0x1B, 0x1F
   and 0x580 from the selections func_8041AD84 reports for its items at 0xC, 0x10 and 0x14, and the
   word at 0x10 from the position func_8041A760 reports for its item at 8. */
struct Options {
    char pad0[0x10];
    s32 position;
    char pad14[0x1B - 0x14];
    u8 first;
    char pad1C[0x1F - 0x1C];
    u8 second;
    char pad20[0x580 - 0x20];
    u8 third;
};

typedef struct func_80423280_S1 func_80423280_S1;
struct func_80423280_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    void* unkC;
    char padC[0x10 - 0xC - sizeof(void*)];
    void* unk10;
    char pad10[0x14 - 0x10 - sizeof(void*)];
    void* unk14;
};

extern func_80423280_S1 *D_800E4510;
extern struct Options D_801462C8;
extern s32 func_8041AD84(void *);
extern s32 func_8041A760(void *);

void func_80423280(void) {
    struct Options *options;
    s32 value;

    value = func_8041AD84(D_800E4510->unkC);
    options = &D_801462C8;
    options->first = value;
    options->second = func_8041AD84(D_800E4510->unk10);
    options->third = func_8041AD84(D_800E4510->unk14);
    options->position = func_8041A760(D_800E4510->unk8);
}
