#include "basetypes.h"

extern s32 D_80146890;
extern s32 D_8010DE0C;
extern void func_8025E338(void);

void func_8025E2F4(s32 a) {
    if (D_80146890 == 0) {
        s32 *p = &D_8010DE0C;
        if (*p != a) {
            *p = a;
            if (a == 0) {
                func_8025E338();
            }
        }
    }
}
