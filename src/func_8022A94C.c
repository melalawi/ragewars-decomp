#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Quad;

typedef struct {
    u8 pad000[0x100];
    s32 flags;
    u8 pad104[0x1DC];
    s32 value;
} Block;

extern f32 D_800D2988;
extern void func_8024BE2C(void *arg0);
extern void func_80246E34(char *);

void func_8022A94C(void *arg0) {
    Block *base;
    s32 old_value;
    s32 new_value;
    f32 saved_value;

    base = (Block *)((char *)arg0 + 0x2E8);
    old_value = *(s32 *)((char *)arg0 + 0x86C);
    saved_value = D_800D2988;
    base->value = 0x10;
    base->flags &= 0xFFFDFFFF;
    func_8024BE2C(base);
    if (*(f32 *)((char *)arg0 + 0x11D8) <= 0.0f) {
        func_80246E34(base);
    }
    new_value = *(s32 *)((char *)arg0 + 0x86C);
    D_800D2988 = saved_value;
    if (old_value != new_value) {
        *(u8 *)((char *)arg0 + 0x10E) = 0;
    }
    *(Triple *)((char *)arg0 + 0x2F0) = *(Triple *)((char *)arg0 + 8);
    *(f32 *)((char *)arg0 + 0x354) = *(f32 *)((char *)arg0 + 0x6C);
    *(s32 *)((char *)arg0 + 0x2FC) = *(s32 *)((char *)arg0 + 0x14);
    *(Quad *)((char *)arg0 + 0x344) = *(Quad *)((char *)arg0 + 0x5C);
}
