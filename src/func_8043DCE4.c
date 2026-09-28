#include "basetypes.h"

/* Calls func_8044E9A0 on D_8011FAC0 when D_80145070 is one, otherwise clears the word at offset
   0x5D0 of the owner at offset 0x1C of the second argument. Returns one. */
struct Owner {
    char pad[0x5D0];
    s32 value;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

extern s32 D_80145070;
extern char D_8011FAC0[];
extern void func_8044E9A0(void *);

s32 func_8043DCE4(void *unused, struct Holder *holder) {
    if (D_80145070 == 1) {
        func_8044E9A0(D_8011FAC0);
    } else {
        holder->owner->value = 0;
    }
    return 1;
}
