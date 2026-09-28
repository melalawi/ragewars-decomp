#include "basetypes.h"

extern void *func_8028B2D4(char *arg0, s32 arg1);
extern char D_8011FE88;

u8 func_802760C4(s32 arg0) {
    void *temp = func_8028B2D4(&D_8011FE88, arg0);
    if (temp == 0) {
        return 0;
    }
    return *(u8 *)((char *)temp + 0x58);
}
