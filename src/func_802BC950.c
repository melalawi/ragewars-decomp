#include "basetypes.h"

extern u64 func_802BFEB0(void);
extern void func_802BFD50(void *, s32, s32);
extern void func_802C07B0(void *arg0, u64 arg1, u64 arg2, void *arg3, void *arg4);
extern void func_802C0390(s32, s32, s32);
extern void func_802BCAF0(s32 arg0);
extern s32 func_802BEDA0(s32, s32);
extern void func_802BCBA8(s32 *arg0, s32 arg1);
extern void func_802BECB0();

extern s32 D_800D8370;
extern s8 D_8014D46C;
extern u8 D_8014D4B0;
extern s32 D_8014D450;
extern s32 D_8014D468;
extern char D_8014D470;

s32 func_802BC950(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp20[8];
    s32 sp40[6];
    s32 sp58[2];
    u64 value;
    s32 result;
    s32 *initialized = &D_800D8370;

    if (*initialized != 0) {
        return 0;
    }
    *initialized = 1;
    value = func_802BFEB0();
    if (value <= 0x0165A0BBULL) {
        func_802BFD50(sp40, (s32)sp58, 1);
        func_802C07B0(sp20, 0x0165A0BCULL - value, 0, sp40, sp58);
        func_802C0390((s32)sp40, (s32)sp58, 1);
    }
    D_8014D46C = 4;
    func_802BCAF0(0);
    func_802BEDA0(1, &D_8014D470);
    func_802C0390(arg0, (s32)sp58, 1);
    result = func_802BEDA0(0, &D_8014D470);
    func_802C0390(arg0, (s32)sp58, 1);
    func_802BCBA8(arg1, arg2);
    D_8014D4B0 = 0;
    func_802BECB0();
    func_802BFD50(&D_8014D450, (s32)&D_8014D468, 1);
    return result;
}
