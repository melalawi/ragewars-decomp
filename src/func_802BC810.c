#include "basetypes.h"

extern void func_802BED04(void);
extern void func_802BC91C(void);
extern s32 func_802BEDA0(s32, s32);
extern void func_802C0390(s32, s32, s32);
extern void func_802BCAF0(s32 arg0);
extern void func_802BCBA8(s32 *arg0, s32 arg1);
extern void func_802BED70(void);

extern u8 D_8014D4B0;
extern char D_8014D470;

s32 func_802BC810(s32 arg0, s32 arg1) {
    s32 output;
    s32 result;
    u8 *state;
    s32 sentinel;

    func_802BED04();
    state = &D_8014D4B0;
    sentinel = 0xFF;
    if (*state != sentinel) {
        char *data;

        func_802BC91C();
        data = &D_8014D470;
        func_802BEDA0(1, data);
        func_802C0390(arg0, 0, 1);
        func_802BEDA0(0, data);
        func_802C0390(arg0, 0, 1);
        func_802BCAF0(sentinel);
        func_802BEDA0(1, data);
        func_802C0390(arg0, 0, 1);
        *state = sentinel;
    }
    result = func_802BEDA0(0, &D_8014D470);
    func_802C0390(arg0, 0, 1);
    func_802BCBA8(&output, arg1);
    func_802BED70();
    return result;
}
