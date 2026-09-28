#include "basetypes.h"

void func_80272BA8(void *arg0, void *arg1, void *arg2) {
    char *m = (char *)arg0;
    char *v = (char *)arg1;
    char *out = (char *)arg2;

    *(f32 *)(out + 0) = (*(f32 *)(m + 0x0) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x10) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x20) * *(f32 *)(v + 0x8));
    *(f32 *)(out + 4) = (*(f32 *)(m + 0x4) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x14) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x24) * *(f32 *)(v + 0x8));
    *(f32 *)(out + 8) = (*(f32 *)(m + 0x8) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x18) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x28) * *(f32 *)(v + 0x8));
}
