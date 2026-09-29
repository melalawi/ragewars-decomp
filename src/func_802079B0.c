#include "basetypes.h"

typedef void (*Callback)(void *arg0, void *arg1);

extern s32 D_8011FE88;
extern f32 D_800D2988;

extern s32 func_80285F28(void *, void *);
extern void func_80206A20(void *arg0, void *arg1);
extern void func_80206DD4(void *arg0, void *arg1);

typedef struct func_802079B0_S1 func_802079B0_S1;
typedef struct func_802079B0_S2 func_802079B0_S2;
typedef struct func_802079B0_S3 func_802079B0_S3;
typedef struct func_802079B0_S4 func_802079B0_S4;
typedef struct func_802079B0_S5 func_802079B0_S5;
struct func_802079B0_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_802079B0_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_802079B0_S3 {
    char pad0[0x30];
    void* unk30;
    char pad30[0x34 - 0x30 - sizeof(void*)];
    s8 unk34;
    char pad34[0x13C - 0x34 - sizeof(s8)];
    f32 unk13C;
};
struct func_802079B0_S4 {
    char pad0[0x8];
    Callback unk8;
};
struct func_802079B0_S5 {
    char pad0[0x48];
    f32 unk48;
};

void func_802079B0(void *arg0, void *arg1) {
    void *record;
    void *handler;
    Callback callback;
    s32 flags;

    record = &((func_802079B0_S2 *)(((func_802079B0_S1 *)(arg0))->unk18))->unk14;
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        flags = ((func_802079B0_S1 *)(arg0))->unk100;
        flags &= ~0x10000;
        flags &= ~0x100;
        ((func_802079B0_S1 *)(arg0))->unk100 = flags;
        return;
    }

    ((func_802079B0_S1 *)(arg0))->unk100 |= 0x10000;
    handler = ((func_802079B0_S3 *)(arg1))->unk30;
    if (handler != 0) {
        callback = ((func_802079B0_S4 *)(handler))->unk8;
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    ((func_802079B0_S3 *)(arg1))->unk13C +=
        ((func_802079B0_S5 *)(record))->unk48 * D_800D2988;
    func_80206A20(arg0, arg1);
    if (((func_802079B0_S3 *)(arg1))->unk34 != 4) {
        func_80206DD4(arg0, arg1);
    }
}
