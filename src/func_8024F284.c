#include "basetypes.h"

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_802537D8(s32, void *);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern s32 func_8028FE08(s32 *, s32, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_8026E158(void **);
extern s32 func_80251F0C(s32, s32, void *, s32, s32, void *, void *, void *, s32);
extern void func_802536F4(s32, s32);

extern s32 D_800D2640;
extern char D_24F8CC;
extern char D_26D7F4;
extern char D_800C8E98;
extern char D_800C8EB0;
extern char D_800C8EC4;
extern char D_800C8ED0;

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void func_8024F284(void *arg0) {
    void *sp28;
    void **resource;
    s32 key;
    s32 found;
    s32 index;
    s32 ret2;

    index = AT(s8, arg0, 1);
    if (index != AT(s32, arg0, 0x54)) {
        resource = func_802518DC(0, AT(s32, arg0, 0x50),
                                AT(s32, arg0, 0x50), 0x18,
                                0, 0, 0, &D_800C8E98 + 4, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource, AT(s32, arg0, 0x50), 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp28, key, &D_800C8EB0, 1);
            if (found != 0) {
                AT(s32, arg0, 0x58) = func_8028FE1C((s32)sp28, key,
                                                    index % *(s32 *)sp28,
                                                    (s32 *)((char *)arg0 + 0x5C));
                AT(s32, arg0, 0x54) = index;
                func_802537D8(0, (void *)found);
            }
        }
    }
    if (AT(s32, arg0, 0x58) != 0) {
        resource = func_802518DC(0, AT(s32, arg0, 0x58),
                                AT(s32, arg0, 0x58), AT(s32, arg0, 0x5C),
                                0, 0, &D_26D7F4, &D_800C8EC4, 0);
    } else {
        resource = 0;
    }
    if (resource != 0) {
        func_8026E158(resource);
        ret2 = func_80251F0C(0, D_800D2640, resource,
                             AT(s32, arg0, 0x60), 8, arg0,
                             &D_24F8CC, &D_800C8ED0, 0);
        if (ret2 != 0) {
            func_802536F4(0, ret2);
        }
        func_802536F4(0, (s32)resource);
    }
}
