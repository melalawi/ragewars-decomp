#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Item57BD4 {
    s16 field0;
    s16 field2;
    s16 field4;
    u16 flags;
} Item57BD4;

extern char D_80145088;

extern void *func_80239594(s32 *, Vec3 *);
extern s32 func_8025BA6C(void *, s32);
extern f32 func_8025C12C(Vec3 *, void *);
extern s32 func_8025BDCC(void *, s32, s32);
extern s32 func_80259280(void *, Item57BD4 *, Vec3 *, s32, s32);
extern void func_8025B940(void *, s32, s32);
extern void *func_8025B1E8(void *, Item57BD4 *, s32, s32);
extern void func_8025BB7C(void *, Vec3 *, s32);
extern void func_8025BB9C(void *, s32);
extern void func_8025BBA4(void *, Item57BD4 *, s32);
extern void func_80257814(void *, void *, s32, Vec3 *);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *, s32, s32);

typedef struct func_80257BD4_S1 func_80257BD4_S1;
typedef struct func_80257BD4_S2 func_80257BD4_S2;
typedef struct func_80257BD4_S3 func_80257BD4_S3;
struct func_80257BD4_S1 {
    char pad0[0x110];
    char unk110;
    char pad110[0x138 - 0x110 - sizeof(char)];
    char unk138;
    char pad138[0x1DB8 - 0x138 - sizeof(char)];
    char unk1DB8;
    char pad1DB8[0x2B8C - 0x1DB8 - sizeof(char)];
    s16 unk2B8C;
    char pad2B8C[0x2B90 - 0x2B8C - sizeof(s16)];
    s32 unk2B90;
    char pad2B90[0x2B98 - 0x2B90 - sizeof(s32)];
    void* unk2B98;
};
struct func_80257BD4_S2 {
    char pad0[0x1C];
    s32 unk1C;
};
struct func_80257BD4_S3 {
    char pad0[0xC];
    void* unkC;
};

s32 func_80257BD4(void *arg0, Item57BD4 *arg1, Vec3 *arg2, s32 arg3,
                  s32 arg4, s32 arg5, s32 arg6) {
    void *node;

    ((func_80257BD4_S1 *)(arg0))->unk2B98 = func_80239594(&D_80145088, arg2);
    if (arg1->flags & 1) {
        if (func_8025BA6C(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C) != 0) {
            return -1;
        }
        if (func_8025C12C(arg2, (char *)((func_80257BD4_S1 *)(arg0))->unk2B98 + 0x128) == 0.0f) {
            return -1;
        }
    }
    if ((arg1->flags & 0x1000) && ((func_80257BD4_S1 *)(arg0))->unk2B90 != -1) {
        if (func_8025BDCC(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C,
                         ((func_80257BD4_S1 *)(arg0))->unk2B90) != -1) {
            return -1;
        }
    }
    if (arg1->field2 != 0) {
        return func_80259280(&((func_80257BD4_S1 *)(arg0))->unk138, arg1, arg2, arg3, arg5);
    }
    if (arg1->flags & 0x40) {
        func_8025B940(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C, arg1->field0);
    }
    node = func_8025B1E8(&((func_80257BD4_S1 *)(arg0))->unk1DB8, arg1, arg3, arg4);
    if (node == 0) {
        return -1;
    }
    func_8025BB7C(node, arg2, arg6);
    func_8025BB9C(node, ((func_80257BD4_S1 *)(arg0))->unk2B8C);
    func_8025BBA4(node, arg1, arg5);

    {
        char *queue = &((func_80257BD4_S1 *)(arg0))->unk110;
        u32 token = func_802C2020();
        s32 count = ((func_80257BD4_S2 *)(queue))->unk1C + 1;
        ((func_80257BD4_S2 *)(queue))->unk1C = count;
        if (count != 1) {
            func_802C2040(token);
            func_802C0390(queue, 0, 1);
        } else {
            func_802C2040(token);
        }
    }
    func_80257814(arg0, ((func_80257BD4_S3 *)(node))->unkC, 0, arg2);
    {
        char *queue = &((func_80257BD4_S1 *)(arg0))->unk110;
        u32 token = func_802C2020();
        s32 count = ((func_80257BD4_S2 *)(queue))->unk1C - 1;
        ((func_80257BD4_S2 *)(queue))->unk1C = count;
        if (count != 0) {
            func_802C2040(token);
            func_802C0510(queue, 0, 1);
        } else {
            func_802C2040(token);
        }
    }
    return 0;
}
