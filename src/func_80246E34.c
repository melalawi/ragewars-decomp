#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern s32 D_8011FE88;
extern s32 D_800C89E4;

void func_80271FD8(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2);
void func_80271FA4(Vector3 *result, Vector3 *left, Vector3 *right);
void func_802472E0(void *arg0);
void func_8024714C(void *arg0, Vector3 *arg1);
void func_8028A258(s32 *arg0, void *arg1, Vector3 *arg2, void *arg3);
void func_80246FF4(void *arg0);
void **func_802518DC(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, void *a7, s32 a8);
void *func_8028FD94(void *arg0, s32 arg1);
void func_8026EE90(void *arg0, s32 arg1, void *arg2);
void func_802536F4(s32 arg0, void *arg1);

typedef struct func_80246E34_S1 func_80246E34_S1;
struct func_80246E34_S1 {
    char pad0[0x8];
    Vector3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vector3)];
    void* unk18;
    char pad18[0xC4 - 0x18 - sizeof(void*)];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
    char pad100[0x1C4 - 0x100 - sizeof(s32)];
    Vector3 unk1C4;
    char pad1C4[0x28C - 0x1C4 - sizeof(Vector3)];
    void* unk28C;
};

void func_80246E34(char *arg0) {
    Vector3 saved;
    Vector3 cur;
    s32 flags;
    s32 masked;
    s32 id;
    s32 *pFlag;
    void **result;
    void *temp;

    flags = ((func_80246E34_S1 *)(arg0))->unk100;
    if (flags & 0x40000) {
        pFlag = &D_8011FE88;
        if ((*pFlag != 4) || (flags & 0x2000)) {
            masked = flags & 0x300000;
            saved = ((func_80246E34_S1 *)(arg0))->unk8;
            func_802472E0(arg0);
            cur = ((func_80246E34_S1 *)(arg0))->unk8;
            ((func_80246E34_S1 *)(arg0))->unk8 = saved;
            if (!masked && (*(s32 *)((func_80246E34_S1 *)(arg0))->unk18 != 0)) {
                func_80271FD8(&cur, &cur, &saved);
                func_80271FA4(&cur, &cur, &((func_80246E34_S1 *)(arg0))->unk1C4);
                func_8024714C(arg0, &cur);
                if (*(s32 *)((func_80246E34_S1 *)(arg0))->unk18 == 1) {
                    func_8028A258(pFlag, arg0, &saved, (char *)arg0 + 8);
                }
            }
            func_80246FF4(arg0);
            result = func_802518DC(0, ((func_80246E34_S1 *)(arg0))->unkC4, ((func_80246E34_S1 *)(arg0))->unkC4, ((func_80246E34_S1 *)(arg0))->unkD0, 0, 0, 0, &D_800C89E4, 1);
            if (result != 0) {
                temp = func_8028FD94(*result, 0);
                ((void (*)(char *, char *)) ((func_80246E34_S1 *)(arg0))->unk28C)(arg0, (char *)arg0 + 0x170);
                func_8026EE90(arg0 + 0x74, (s32) temp, (char *)arg0 + 0xE8);
                func_802536F4(0, (void *) result);
            }
        }
    }
}
