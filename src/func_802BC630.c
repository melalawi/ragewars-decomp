#include "basetypes.h"

extern void func_802BED04(void);
extern void func_802BC75C(void);
extern s32 func_802BEDA0(s32, s32);
extern void func_802C0390(s32, s32, s32);
extern void func_802BED70(void);

extern u8 D_8014D4B0;
extern char D_8014D470;

s32 func_802BC630(s32 arg0) {
    s32 result;
    u8 *p;

    func_802BED04();
    p = &D_8014D4B0;
    if (*p != 1) {
        func_802BC75C();
        func_802BEDA0(1, &D_8014D470);
        func_802C0390(arg0, 0, 1);
    }
    result = func_802BEDA0(0, &D_8014D470);
    *p = 1;
    func_802BED70();
    return result;
}
