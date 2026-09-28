#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern s32 func_8024E7CC(void *);
extern s32 func_8024E61C(void *arg0);
extern void func_8021B1E4(void *, s32, s32, s32);
extern f32 D_800C7F08;
extern f32 D_8013B184;

void func_8022E694(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = func_8024E7CC(arg1);
    if ((temp_v0 != 0) && (*(s32 *)((char *)temp_v0 + 0x44) & 0x4000)) {
        *(s32 *)((char *)arg1 + 0x20) = 0;
    } else if (*(f32 *)((char *)arg1 + 0xC) < (D_8013B184 - D_800C7F08)) {
        func_8021B1E4(arg0, *(s32 *)((char *)arg0 + 0x5EC), 0, 0);
    }
    if (func_8024E61C(arg1) != 0) {
        *(Triple *)((char *)arg0 + 0x6F8) = *(Triple *)((char *)arg1 + 0x8);
    }
}
