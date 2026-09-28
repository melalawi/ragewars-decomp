#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

void func_80203C40(void *arg0) {
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        *(s32 *) ((char *) arg0 + 0x100) |= 0x2100;
    }
}
