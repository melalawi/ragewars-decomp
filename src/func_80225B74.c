#include "basetypes.h"

typedef void (*VoidCallback)(void);

extern s32 D_800CF228;
extern s32 D_800D2930;
extern void *D_801029F0;
extern u8 D_80102AD8[];
extern s32 D_8011FE88;
extern s32 D_8013B290;
extern s32 D_80145048;
extern char D_22ECBC;

extern void *func_8028B2D4(void *, u16 *);
extern s32 func_80245608(s32 arg0, void *arg1, VoidCallback arg2);
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

void func_80225B74(void *arg0, void *arg1, s32 arg2)
{
    s32 enabled;
    u32 resource_flags;
    void *resource;
    s32 i;

    enabled = 1;
    resource_flags = 0;

    if (*(u16 **)((char *)arg0 + 0x14) != 0) {
        resource = func_8028B2D4(&D_8011FE88, *(u16 **)((char *)arg0 + 0x14));
        if (resource != 0) {
            resource_flags = *(u32 *)((char *)resource + 0x44);
        }
    }

    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (*(u32 *)((char *)arg0 + 0x664) & 0x8000) {
        enabled = 0;
    }
    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (D_80145048 >= 2) {
        enabled = 0;
    }
    if (arg2 == 12) {
        enabled = 0;
    }
    if (*(u32 *)((char *)arg0 + 0x664) & 0x8000) {
        enabled = 0;
    }
    if (resource_flags & 0x1000000) {
        enabled = 0;
    }
    if ((resource_flags & 0x80000) &&
        (arg2 != 20) && (arg2 != 40) && (arg2 != 30)) {
        enabled = 0;
    }

    *(s32 *)((char *)arg0 + 0x850) = enabled;
    if (enabled != 0) {
        if (arg2 == 50) {
            void *data;

            data = *(void **)((char *)arg0 + 0x5DC);
            D_800CF228 = 1;
            if (data != 0) {
                for (i = 0; i < 4; i++) {
                    D_80102AD8[i] = *((u8 *)*(void **)((char *)arg0 + 0x5DC) + i + 0x520);
                }
            }
        }
        D_800D2930 = 0;
        D_801029F0 = arg0;
        func_80245608(arg2, 0, (VoidCallback)&D_22ECBC);
    }

    resource = func_8028CF7C(&D_8011FE88, -1, 0xC45);
    if (resource != 0) {
        *(f32 *)((char *)arg0 + 0x50) = *(f32 *)((char *)resource + 0xFC);
        *(f32 *)((char *)arg0 + 0x54) = *(f32 *)((char *)resource + 0x100);
        *(f32 *)((char *)arg0 + 0x58) = *(f32 *)((char *)resource + 0x104);
    }
}
