#include "basetypes.h"

/* Returns one less than the word D_8011FEFC points to. */
extern s32 *D_8011FEFC;

s32 func_80403BCC(void) {
    return *D_8011FEFC - 1;
}
