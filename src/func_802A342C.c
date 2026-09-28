#include "basetypes.h"

extern void func_8029A468(void);
extern void func_8041023C(void);
extern void func_802A276C(void);
extern void func_80414404(void);
extern void func_802A338C(void);
extern s32 D_800D2C98;

void func_802A342C(void) {
    s32 *p;

    func_8029A468();
    func_8041023C();
    func_802A276C();
    func_80414404();
    p = &D_800D2C98;
    *p = 0;
    func_802A338C();
    *(s32 *)((char *)p - 8) = 0;
}
