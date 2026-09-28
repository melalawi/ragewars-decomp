#include "basetypes.h"

extern f32 D_800C7EA8;

extern void func_802748E0(f32 *, f32, f32);
extern void func_8044A4C0(void *);

void func_8022D418(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x850) == 0) {
        if ((*(s32 *)((u8 *)arg0 + 0x664) & 0x8000) == 0) {
            func_802748E0((f32 *)((u8 *)arg0 + 0x72C), 1.308997f, 0.25f);
        }
        if (*(f32 *)((u8 *)arg0 + 0x658) > D_800C7EA8) {
            func_8044A4C0(arg0);
        }
    }
}
