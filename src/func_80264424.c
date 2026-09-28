#include "basetypes.h"

extern void func_802644C8(void *arg0);
extern s32 func_802A33AC(void);
extern s32 func_802A339C(void);
extern void func_8029B650(void *arg0);

extern u8 D_800D0E50;
extern s32 D_8010F328;
extern u8 D_8010F0E0;

void func_80264424(void) {
    s32 i;
    u8 *p;
    s32 temp;
    s32 one;

    if (D_800D0E50 != 0) {
        i = 0;
        one = 1;
        p = &D_8010F328;
        for (; i < 4; i++, p += 0x224) {
            func_802644C8(p);
            temp = func_802A33AC();
            if (temp != one) {
                continue;
            }
            if (func_802A339C() != temp) {
                continue;
            }
            func_8029B650(p);
        }
        func_802644C8(&D_8010F0E0);
    }
}
