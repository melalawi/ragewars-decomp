#include "basetypes.h"

extern void func_8028DA50(void *arg0);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_802537D8(void *, void *);

extern s32 D_285130;
extern char D_800CA380;
extern char D_800CA3AC;

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void *func_8028D450(void *arg0, s32 arg1) {
    s32 sp28;
    void **resource;
    s32 key;
    s32 size;
    s32 one;

    if (AT(s32, arg0, 0x14) == 0 || AT(s32, arg0, 0x18) != arg1) {
        func_8028DA50(arg0);
        if (AT(s32, arg0, 0xC) != 0) {
            size = 0x10;
            one = 1;
            resource = func_802518DC(0, AT(s32, arg0, 0xC),
                                     AT(s32, arg0, 0xC),
                                     AT(s32, arg0, 0x10), size, 0, 0,
                                     &D_800CA380, one);
            if (resource != 0) {
                key = func_8028FE1C((s32)*resource, AT(s32, arg0, 0xC),
                                    arg1, &sp28);
                func_802537D8(0, resource);
                if ((AT(void **, arg0, 0x14) =
                     func_802518DC(0, key, key, sp28, size, 0,
                                   &D_285130, &D_800CA3AC, one)) != 0) {
                    AT(s32, arg0, 0x18) = arg1;
                }
            }
        }
    }
    if (AT(void **, arg0, 0x14) != 0) {
        return *AT(void ***, arg0, 0x14);
    }
    return 0;
}
