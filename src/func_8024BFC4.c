#include "basetypes.h"

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_802536F4(s32, void *);

extern char D_26D814;
extern char D_800C8C18;
extern char D_800C8C2C;

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void **func_8024BFC4(void *arg0, s32 arg1) {
    void **resource;

    if (arg1 < 0) {
        return 0;
    }
    if (arg1 != AT(s32, arg0, 0xD8)) {
        resource = func_802518DC(0, AT(s32, arg0, 0xCC),
                                 AT(s32, arg0, 0xCC), AT(s32, arg0, 0xD4),
                                 0, 0, 0, &D_800C8C18, 1);
        if (resource != 0) {
            AT(s32, arg0, 0xDC) = func_8028FE1C((s32)*resource,
                                                AT(s32, arg0, 0xCC),
                                                arg1 % *(s32 *)*resource,
                                                (s32 *)((char *)arg0 + 0xE0));
            AT(s32, arg0, 0xD8) = arg1;
            func_802536F4(0, resource);
        }
    }
    if (AT(s32, arg0, 0xDC) != 0) {
        return func_802518DC(0, AT(s32, arg0, 0xDC),
                             AT(s32, arg0, 0xDC), AT(s32, arg0, 0xE0),
                             0, 0, &D_26D814, &D_800C8C2C, 0);
    }
    return 0;
}
