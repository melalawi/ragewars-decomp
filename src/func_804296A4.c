#include "basetypes.h"

/* Refreshes the option block D_801462C8 from the menu D_800E4EF0 points to: the bytes at 0x24 to
   0x27 from the values func_802A2B18 reports for its items at 0x28, 0x24, 0x2C and 0x30, and the
   byte at 0x28 from the selection func_8041AD84 reports for its item at 0x1C. */
struct Options {
    char pad[0x24];
    u8 values[5];
};

typedef struct func_804296A4_S1 func_804296A4_S1;
struct func_804296A4_S1 {
    char pad0[0x1C];
    void* unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    void* unk24;
    char pad24[0x28 - 0x24 - sizeof(void*)];
    void* unk28;
    char pad28[0x2C - 0x28 - sizeof(void*)];
    void* unk2C;
    char pad2C[0x30 - 0x2C - sizeof(void*)];
    void* unk30;
};

extern func_804296A4_S1 *D_800E4EF0;
extern struct Options D_801462C8;
extern s32 func_802A2B18(void *);
extern s32 func_8041AD84(void *);

void func_804296A4(void) {
    struct Options *options;
    s32 value;

    value = func_802A2B18(D_800E4EF0->unk28);
    options = &D_801462C8;
    options->values[0] = value;
    options->values[1] = func_802A2B18(D_800E4EF0->unk24);
    options->values[2] = func_802A2B18(D_800E4EF0->unk2C);
    options->values[3] = func_802A2B18(D_800E4EF0->unk30);
    options->values[4] = func_8041AD84(D_800E4EF0->unk1C);
}
