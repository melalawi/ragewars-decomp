#include "basetypes.h"

extern s32 func_802551C8(s32 *arg0);
extern void func_802538A8(s32 arg0);
extern void func_804143E0(void);
extern void func_802A26F8(s32 arg0);
extern void func_80298FA0(s32 arg0, void *arg1);
extern void func_8040FC14(void *arg0);
extern void func_8041B660(void);
extern void func_8041991C(void);
extern void func_8041A480(void);
extern void func_8041B160(void);
extern void func_80419EA4(void);
extern void func_8041A5D0(void);
extern void func_8041AC10(void);
extern void func_802A2960(void);
extern void func_802A33F8(f32 value);
extern void func_802A3410(s32 arg0);
extern void func_802A3358(void);
extern void func_802A33BC(s32 arg0);

extern s32 D_8010A248;
extern s32 D_43C500;
extern s32 D_800CAF30;
extern s32 D_800D0E54;
extern s32 D_800D2C98;

void func_802A3224(void) {
    s32 *p;

    func_802551C8(&D_8010A248);
    func_802538A8(0);
    func_804143E0();
    func_802A26F8(0x3000);
    func_80298FA0(0x23, &D_43C500);
    func_8040FC14(&D_800CAF30);
    func_8041B660();
    func_8041991C();
    func_8041A480();
    func_8041B160();
    func_80419EA4();
    func_8041A5D0();
    func_8041AC10();
    func_802A2960();
    D_800D0E54 = 0x3C;
    func_802A33F8(0.0f);
    func_802A3410(1);
    p = &D_800D2C98;
    *p = 1;
    func_802A3358();
    *(s32 *)((char *)p - 8) = 0;
    func_802A33BC(2);
}
