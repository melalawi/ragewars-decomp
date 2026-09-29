#include "basetypes.h"

/* Refreshes the option block D_801462C8 from the menu D_800E4514 points to: the bytes at 0x1B and 0x580
   from the selections func_8041AD84 reports for its items at 4 and 8, and the word at 0x10 from
   the position func_8041A760 reports for its item at 0. */
struct Menu {
    char pad[0x5C];
};

struct Options {
    char pad0[0x10];
    s32 position;
    char pad14[0x1B - 0x14];
    u8 first;
    char pad1C[0x580 - 0x1C];
    u8 second;
};

typedef struct func_80423304_S1 func_80423304_S1;
struct func_80423304_S1 {
    void* unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void* unk8;
};

extern func_80423304_S1 *D_800E4514;
extern struct Options D_801462C8;
extern s32 func_8041AD84(void *);
extern s32 func_8041A760(void *);

void func_80423304(void) {
    struct Options *options;
    s32 value;

    value = func_8041AD84(D_800E4514->unk4);
    options = &D_801462C8;
    options->first = value;
    options->second = func_8041AD84(D_800E4514->unk8);
    options->position = func_8041A760(D_800E4514->unk0);
}
