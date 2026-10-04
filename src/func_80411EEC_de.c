#include "span_16E000/code_80410E9C.h"
#include "types.h"

/* Clears the 0x2A8-byte block D_801539B0 through func_802A0748_de, sets D_800E2AC0 and clears
   D_800E2AC4. */
extern char D_8014D720[];
extern s32 D_800DEA70;
extern s32 D_800DEA74;
extern void func_802A0748_de(void *, s32, s32);

void func_80411EEC_de(void) {
    func_802A0748_de(D_8014D720, 0, 0x2A8);
    D_800DEA70 = 1;
    D_800DEA74 = 0;
}
