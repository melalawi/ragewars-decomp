#include "basetypes.h"

/* Stores a word at a byte offset beyond 0x60C in the block D_8011FECC points to. */
extern char *D_8011FECC;

void func_804098D0(s32 offset, s32 value) {
    *(s32 *) (D_8011FECC + offset + 0x60C) = value;
}
