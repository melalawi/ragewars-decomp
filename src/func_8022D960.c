#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern s32 func_8024E7CC(void *);
extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern f32 func_80271B18(Vector3 *arg0);

typedef struct func_8022D960_S1 func_8022D960_S1;
typedef struct func_8022D960_S2 func_8022D960_S2;
typedef struct func_8022D960_S3 func_8022D960_S3;
typedef union func_8022D960_S1_U800 { f32 v0; Vector3 v1; } func_8022D960_S1_U800;
struct func_8022D960_S1 {
    char pad0[0x7F4];
    s32 unk7F4;
    char pad7F4[0x7F8 - 0x7F4 - sizeof(s32)];
    f32 unk7F8;
    char pad7F8[0x7FC - 0x7F8 - sizeof(f32)];
    s32 unk7FC;
    char pad7FC[0x800 - 0x7FC - sizeof(s32)];
    func_8022D960_S1_U800 unk800;
};
struct func_8022D960_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
};
struct func_8022D960_S3 {
    char pad0[0x34];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
};

void func_8022D960(void *arg0, void *arg1) {
    char *o = (char *)arg0;
    char *a1 = (char *)arg1;
    s32 temp_v0;
    Vector3 sp10;
    Vector3 sp20;

    temp_v0 = func_8024E7CC(arg1);
    ((func_8022D960_S1 *)(o))->unk7FC = temp_v0;
    if (temp_v0 != 0) {
        ((func_8022D960_S1 *)(o))->unk7F4 = 0;
        ((func_8022D960_S1 *)(o))->unk800.v0 = ((func_8022D960_S2 *)(a1))->unk8;
        ((func_8022D960_S1 *)(o))->unk800.v1.y = ((func_8022D960_S2 *)(a1))->unkC;
        ((func_8022D960_S1 *)(o))->unk800.v1.z = ((func_8022D960_S2 *)(a1))->unk10;
        sp10.x = ((func_8022D960_S3 *)(temp_v0))->unk34;
        sp10.y = ((func_8022D960_S3 *)(temp_v0))->unk38;
        sp10.z = ((func_8022D960_S3 *)(temp_v0))->unk3C;
        func_80271FD8(&sp20, &sp10, &((func_8022D960_S1 *)(o))->unk800.v1);
        sp20.y = 0.0f;
        ((func_8022D960_S1 *)(o))->unk7F8 = func_80271B18(&sp20);
    }
}
