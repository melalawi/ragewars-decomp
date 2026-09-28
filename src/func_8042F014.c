#include "basetypes.h"

/* Returns 0xBC2 plus ten times either the halfword at offset 2 of what func_8028D450 finds for
   D_8015402C in D_8011FE88, when the option byte D_801462D5 is one, or D_8015402C itself. */
struct Found {
    u16 pad0;
    u16 value;
};

extern u8 D_801462D5;
extern s32 D_8015402C;
extern char D_8011FE88[];
extern struct Found *func_8028D450(void *, s32);

s32 func_8042F014(void) {
    return (D_801462D5 == 1 ? func_8028D450(D_8011FE88, D_8015402C)->value : D_8015402C) * 10 + 0xBC2;
}
