#include "span_1000/code_80279764.h"
#include "types.h"
extern s32 D_800CD72C;

void func_80279990_de(void *arg0) {
    s32 *p = (s32 *)arg0;
    p[2] = p[1];
    p[3] = p[0] + ((p[1] * D_800CD72C) << 6);
}
