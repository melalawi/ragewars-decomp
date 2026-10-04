#include "common/types.h"
#include "span_16E000/code_8042ED84.h"
#include "types.h"

/* Returns 0xBC2 plus ten times either the halfword at offset 2 of what func_8028D474_de finds for
   D_8015402C in D_8011FE88, when the option byte D_801462D5 is one, or D_8015402C itself. */


extern u8 D_80142215;
extern s32 D_8014DD9C;
extern char D_8011BDC8[];
extern struct StateFlags *func_8028D474_de(void *, s32);

s32 func_8042EE34_de(void) {
    return (D_80142215 == 1 ? func_8028D474_de(D_8011BDC8, D_8014DD9C)->flags : D_8014DD9C) * 10 + 0xBC2;
}
