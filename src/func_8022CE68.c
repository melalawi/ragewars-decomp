#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(s32, s32, void *);
extern void func_802233CC(s32 arg0, s32 arg1, void *arg2);
extern s32 func_8024E61C(void *arg0);
extern void func_802227D0(void *, void *, s32);
extern char D_800CE7E4;
extern char D_800CE79C;

void func_8022CE68(s32 arg0, s32 arg1) {
    func_802748E0(arg0 + 0x72C, 0.0f, 0.25f);
    func_802231B0(arg0, arg1, &D_800CE7E4);
    func_802233CC(arg0, arg1, &D_800CE79C);
    if (*(f32 *) ((char *) arg1 + 0x20) <= 0.0f) {
        if (func_8024E61C((void *) arg1) != 0) {
            func_802227D0((void *) arg0, (void *) arg1, 2);
        }
    }
}
