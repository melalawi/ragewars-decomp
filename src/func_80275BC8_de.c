#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "types.h"





extern f32 D_800C49F0_de;
extern Vec3 D_80111D50;
extern s32 D_800CD3E8;

extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);

Vec3 *func_80275BC8_de(Vec3 *out, Node75 *node) {
    Vec3 a;
    Vec3 b;
    Vec3 *b_ptr;

    if (node == 0) {
        D_80111D50.x = 0;
        D_80111D50.z = 0;
        D_80111D50.y = D_800C49F0_de;
    } else if ((s32)node != D_800CD3E8) {
        func_80271F68_de(&a, node->cur, node->prev);
        b_ptr = &b;
        func_80271F68_de(b_ptr, node->next, node->cur);
        func_80272018_de(&D_80111D50, &a, b_ptr);
    }
    *out = D_80111D50;
    D_800CD3E8 = (s32)node;
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
