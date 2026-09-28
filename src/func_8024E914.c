#include "basetypes.h"

extern char D_8011FE88;
extern int func_8028B238(void *arg0, int arg1);

int func_8024E914(void *arg0) {
    if (*(u8 *)arg0 == 1) {
        return *(u16 *)((char *)arg0 + 0xE4);
    }
    return func_8028B238(&D_8011FE88, *(u16 *)((char *)arg0 + 4));
}
