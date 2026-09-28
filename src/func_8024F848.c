#include "basetypes.h"

extern s32 D_8011FE88;
extern s32 D_801462C8;
extern s32 func_8028B238(void *arg0, s32 arg1);

s32 func_8024F848(void *arg0) {
    void *obj;
    s32 value;
    s32 index;

    obj = *(void **)((char *)arg0 + 0x18);
    if (*(s32 *)obj == 0xC) {
        return 0;
    }

    value = *(s8 *)((char *)obj + 0xE);
    index = func_8028B238(&D_8011FE88, *(u16 *)((char *)arg0 + 4));
    if (index < 0x6AB) {
        if (index < 0x6A9) {
            return value;
        }
        if (D_801462C8 & 0x800) {
            value = 1;
        }
        if (D_801462C8 & 0x1000) {
            value = 2;
        }
    }
    return value;
}
