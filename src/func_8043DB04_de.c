#include "common/types.h"
#include "span_16E000/code_8043D904.h"
#include "span_16E000/types.h"
#include "types.h"

/* Calls func_8044DD50_de on D_8011FAC0 when D_80145070 is one, otherwise clears the word at offset
   0x5D0 of the owner at offset 0x1C of the second argument. Returns one. */





extern char D_8011BA00[];
extern void func_8044DD50_de(void *);

s32 func_8043DB04_de(void *unused, struct Holder *holder) {
    if (D_80140FB0 == 1) {
        func_8044DD50_de(D_8011BA00);
    } else {
        holder->owner->value = 0;
    }
    return 1;
}
