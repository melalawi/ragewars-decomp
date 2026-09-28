#include "basetypes.h"

extern s32 D_8011F260;

/** Return the address of the global state word at D_8011F260. */
s32 *func_8025CC8C(void) {
    return &D_8011F260;
}

/** Deliberately perform no work. */
void func_8025CC9C(void) {
}
