#include "basetypes.h"

extern u32 D_800D297C;

/** Reset the object and compute its trailing-data end pointer. */
void func_802A66EC(void *object) {
    u32 index = D_800D297C;
    *(int *)((char *)object + 0x0) = 0;
    *(int *)((char *)object + 0x2588) = 0x12C;
    *(void **)((char *)object + 0x258C) = (char *)object + (index * 4800 + 8);
}
