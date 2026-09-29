#include "basetypes.h"

/* Refreshes the option block D_801462C8 from the menu D_800E4518 points to: the bytes at 0x1B and 0x580
   from the selections func_8041AD84 reports for its items at 0x54 and 0x58, and the word at 0x10 from
   the position func_8041A760 reports for its item at 0x50. */
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

typedef struct func_80423370_S1 func_80423370_S1;
struct func_80423370_S1 {
    char pad0[0x50];
    void* unk50;
    char pad50[0x54 - 0x50 - sizeof(void*)];
    void* unk54;
    char pad54[0x58 - 0x54 - sizeof(void*)];
    void* unk58;
};

extern func_80423370_S1 *D_800E4518;
extern struct Options D_801462C8;
extern s32 func_8041AD84(void *);
extern s32 func_8041A760(void *);

void func_80423370(void) {
    struct Options *options;
    s32 value;

    value = func_8041AD84(D_800E4518->unk54);
    options = &D_801462C8;
    options->first = value;
    options->second = func_8041AD84(D_800E4518->unk58);
    options->position = func_8041A760(D_800E4518->unk50);
}
