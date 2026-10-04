#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern void func_8028DA74_de(void *arg0);
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE3C_de(s32, s32, s32, s32 *);
extern void func_80253838_de(void *, void *);

extern s32 D_00285160;
extern char D_800C5290_de;
extern char D_800C52BC;

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void func_8028D964_de(void *arg0, s32 arg1) {
    s32 sp28;
    void **resource;
    s32 key;
    s32 size;
    s32 one;

    if (AT(s32, arg0, 0x14) == 0 || AT(s32, arg0, 0x18) != arg1) {
        func_8028DA74_de(arg0);
        if (AT(s32, arg0, 0xC) != 0) {
            size = 0x10;
            one = 1;
            resource = func_8025193C_de(0, AT(s32, arg0, 0xC),
                                     AT(s32, arg0, 0xC),
                                     AT(s32, arg0, 0x10), size, 0, 0,
                                     &D_800C5290_de, one);
            if (resource != 0) {
                key = func_8028FE3C_de((s32)*resource, AT(s32, arg0, 0xC),
                                    arg1, &sp28);
                func_80253838_de(0, resource);
                if ((AT(void **, arg0, 0x14) =
                     func_8025193C_de(0, key, key, sp28, size, 0,
                                   &D_00285160, &D_800C52BC, one)) != 0) {
                    AT(s32, arg0, 0x18) = arg1;
                }
            }
        }
    }
}
