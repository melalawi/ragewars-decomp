#include "basetypes.h"

extern void *func_8028B2D4(char *arg0, s32 arg1);
extern char D_8011FE88;

typedef struct func_802760F8_S1 func_802760F8_S1;
struct func_802760F8_S1 {
    char pad0[0x59];
    u8 unk59;
};

u8 func_802760F8(s32 arg0) {
    void *temp = func_8028B2D4(&D_8011FE88, arg0);
    if (temp == 0) {
        return 0;
    }
    return ((func_802760F8_S1 *)(temp))->unk59;
}
