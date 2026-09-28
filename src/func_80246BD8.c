#include "basetypes.h"

extern s32 func_8028FE08(s32 *arg0, s32 arg1, s32 arg2);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern void func_802536F4(s32, void *);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void *func_8028FD94(void *, s32);
extern void func_8026EE90(void *, s32, void *);
extern void func_802624A0(void *);
extern s32 func_802469F8(void *, s32, s32);
extern char D_800C898C;
extern char D_800C89A0;
extern char D_800C89B4;

#define AT(t,p,o) (*(t *)((char *)(p) + (o)))

void func_80246BD8(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp28;
    void **resource1;
    void **resource2;
    s32 *entry;
    void *temp;
    void *node;
    s32 key;
    s32 found;

    AT(s32, arg0, 0xD8) = -1;
    AT(s32, arg0, 0xDC) = 0;
    AT(s32, arg0, 0xE0) = 0;
    AT(s32, arg0, 0x100) &= 0xFFFBFFFF;
    key = func_8028FE08(arg1, arg2, AT(u16, arg0, 4));
    resource1 = func_802518DC(0, key, key, 0x18, 0, 0, 0, &D_800C898C, 1);
    if (resource1 != 0) {
        entry = *resource1;
        AT(s32, arg0, 0xCC) = func_8028FE08(entry, key, 1);
        found = func_80254094(0, &sp28, AT(s32, arg0, 0xCC), &D_800C89A0, 1);
        if (found != 0) {
            AT(u8, arg0, 0xE7) = AT(u8, sp28, 3);
            AT(s32, arg0, 0xD4) = ((AT(s32, sp28, 0) * 4) + 0xF) & ~7;
            func_802536F4(0, (void *)found);
        }
        AT(s32, arg0, 0xC4) = func_8028FE1C((s32)entry, key, 0, (s32 *)((char *)arg0 + 0xD0));
        AT(s32, arg0, 0xC8) = func_8028FE08(entry, key, 2);
        resource2 = func_802518DC(0, AT(s32, arg0, 0xC4),
                                 AT(s32, arg0, 0xC4), AT(s32, arg0, 0xD0),
                                 0, 0, 0, &D_800C89B4, 1);
        if (resource2 != 0) {
            node = *resource2;
            temp = func_8028FD94(node, 0);
            ((void (*)(void *, void *))AT(void *, arg0, 0x28C))(arg0, (char *)arg0 + 0x170);
            func_8026EE90((char *)arg0 + 0x74, (s32)temp, (char *)arg0 + 0xE8);
            func_802624A0((char *)arg0 + 0x104);
            func_802624A0((char *)arg0 + 0x118);
            AT(u8, arg0, 0xE6) = AT(u8, func_8028FD94(node, 1), 7);
            AT(s32, arg0, 0x100) |= 0x40000;
            if (arg3 > 0) {
                arg3 = func_802469F8(arg0, arg3, -1);
            } else {
                arg3 = -arg3;
            }
            if (arg3 == -1) {
                arg3 = 0;
            }
            AT(s16, arg0, 0x10A) = arg3;
            AT(s8, arg0, 0x10E) = 0;
            if (AT(s16, arg0, 0x108) != arg3) {
                AT(s8, arg0, 0x10F) = 1;
            }
            AT(s8, arg0, 0x1A5) = -1;
            AT(s8, arg0, 0x23A) = arg3;
            func_802536F4(0, resource2);
        }
        func_802536F4(0, resource1);
    }
}
