#include "basetypes.h"

extern void func_80273930(void *arg0, f32 arg1);
extern void func_80273CD8(void *arg0, f32 arg1);

void func_80203DF0(void *arg0, void *arg1) {
    void *temp_a0;
    char *temp_s1;
    void *temp_v0;

    temp_a0 = *(void **)((char *)arg1 + 8);
    temp_s1 = *(char **)((char *)temp_a0 + 0x18) + 0x14;
    if (*(s32 *)((char *)arg1 + 4) == *(s32 *)(temp_s1 + 0x3C)) {
        func_80273930(arg0, *(f32 *)((char *)temp_a0 + 0x294));
    }
    if (*(s32 *)((char *)arg1 + 4) == *(s32 *)(temp_s1 + 0x40)) {
        temp_v0 = *(void **)((char *)arg1 + 8);
        func_80273CD8(arg0,
                      *(f32 *)((char *)temp_v0 + 0x20C) -
                          *(f32 *)((char *)temp_v0 + 0x6C));
    }
}
