#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_800C7CB0;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_8024B4E4(void *arg0, s32 arg1);
extern void func_8024ADC0(void *arg0, Vec3 *arg1, s32 arg2);
extern void func_802536F4(s32 arg0, s32 arg1);

void func_8022BC84(void *arg0, s32 arg1) {
    Vec3 sp28;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    if (*(s32 *)((char *)arg0 + 0x100) & 0x40000) {
        temp_s1 = func_802518DC(0, *(s32 *)((char *)arg0 + 0xC4), *(s32 *)((char *)arg0 + 0xC4), *(s32 *)((char *)arg0 + 0xD0), 4, 0, 0, &D_800C7CB0, 1);
        if (temp_s1 != 0) {
            temp_s2 = *(void **)((char *)arg0 + 0x1D8);
            func_8024B4E4(arg0, (s32)func_8028FD94(*(void **)temp_s1, 0));
            if (arg1 != 0) {
                temp_v0 = *(void **)((char *)temp_s2 + 0x5DC);
                if (temp_v0 != 0) {
                    sp28.x = *(f32 *)((char *)temp_v0 + 0x128) - *(f32 *)((char *)arg0 + 8);
                    sp28.y = 0.0f;
                    sp28.z = *(f32 *)((char *)*(void **)((char *)temp_s2 + 0x5DC) + 0x130) - *(f32 *)((char *)arg0 + 0x10);
                    func_8024ADC0(arg0, &sp28, arg1);
                }
            }
            func_802536F4(0, (s32)temp_s1);
        }
    }
}
