#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern s32 func_8024E7CC(void *);
extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern f32 func_80271B18(Vector3 *arg0);

void func_8022D960(void *arg0, void *arg1) {
    char *o = (char *)arg0;
    char *a1 = (char *)arg1;
    s32 temp_v0;
    Vector3 sp10;
    Vector3 sp20;

    temp_v0 = func_8024E7CC(arg1);
    *(s32 *)(o + 0x7FC) = temp_v0;
    if (temp_v0 != 0) {
        *(s32 *)(o + 0x7F4) = 0;
        *(f32 *)(o + 0x800) = *(f32 *)(a1 + 0x8);
        *(f32 *)(o + 0x804) = *(f32 *)(a1 + 0xC);
        *(f32 *)(o + 0x808) = *(f32 *)(a1 + 0x10);
        sp10.x = *(f32 *)((char *)temp_v0 + 0x34);
        sp10.y = *(f32 *)((char *)temp_v0 + 0x38);
        sp10.z = *(f32 *)((char *)temp_v0 + 0x3C);
        func_80271FD8(&sp20, &sp10, (Vector3 *)(o + 0x800));
        sp20.y = 0.0f;
        *(f32 *)(o + 0x7F8) = func_80271B18(&sp20);
    }
}
