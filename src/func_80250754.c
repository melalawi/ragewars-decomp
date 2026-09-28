#include "basetypes.h"

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80253610(s32, void *);
extern void func_802537D8(s32, void *);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern s32 func_8028FE08(s32 *, s32, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);

extern char D_26D7D4;
extern char D_800C8F4C;
extern char D_800C8F70;
extern char D_800C8F84;

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void *func_80250754(void *arg0, s32 arg1) {
    void *sp28;
    void **resource;
    s32 key;
    s32 found;

    if (AT(void *, arg0, 0xB4) != 0) {
        func_80253610(0, AT(void *, arg0, 0xB4));
        return AT(void *, arg0, 0xB4);
    }
    if (arg1 != AT(s32, arg0, 0xA8)) {
        resource = func_802518DC(0, AT(s32, arg0, 0x1C),
                                AT(s32, arg0, 0x1C), 0x18,
                                0, 0, 0, &D_800C8F4C, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource, AT(s32, arg0, 0x1C), 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp28, key, &D_800C8F70, 1);
            if (found != 0) {
                AT(s32, arg0, 0xAC) = func_8028FE1C((s32)sp28, key,
                                                    arg1 % *(s32 *)sp28,
                                                    (s32 *)((char *)arg0 + 0xB0));
                AT(s32, arg0, 0xA8) = arg1;
                func_802537D8(0, (void *)found);
            }
        }
    }
    if (AT(s32, arg0, 0xAC) != 0) {
        return func_802518DC(0, AT(s32, arg0, 0xAC), AT(s32, arg0, 0xAC),
                             AT(s32, arg0, 0xB0), 0, 0,
                             &D_26D7D4, &D_800C8F84, 0);
    }
    return 0;
}
