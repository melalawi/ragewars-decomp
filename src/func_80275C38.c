#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Node75 {
    s32 pad0;
    Vec3 *prev;
    Vec3 *cur;
    Vec3 *next;
} Node75;

extern f32 D_800C9AE0;
extern Vec3 D_80115E10;
extern s32 D_800D2638;

extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);

Vec3 *func_80275C38(Vec3 *out, Node75 *node) {
    Vec3 a;
    Vec3 b;
    Vec3 *b_ptr;

    if (node == 0) {
        D_80115E10.x = 0;
        D_80115E10.z = 0;
        D_80115E10.y = D_800C9AE0;
    } else if ((s32)node != D_800D2638) {
        func_80271FD8(&a, node->cur, node->prev);
        b_ptr = &b;
        func_80271FD8(b_ptr, node->next, node->cur);
        func_80272088(&D_80115E10, &a, b_ptr);
    }
    *out = D_80115E10;
    D_800D2638 = (s32)node;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4920_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9AE0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CA0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CE0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49F0_4 = 1.0f;
#endif
