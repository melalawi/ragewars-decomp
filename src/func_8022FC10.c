#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern void func_8022BC04(void *arg0);

extern f32 D_800C7F80;
typedef struct { s16 value; char pad2[0x16]; } func_8022FC10_Record;
extern func_8022FC10_Record D_800CE8DC[];
extern void *D_800D052C[];
extern f32 D_800D2988;

typedef struct func_8022FC10_S1 func_8022FC10_S1;
typedef struct func_8022FC10_S2 func_8022FC10_S2;
typedef struct func_8022FC10_S3 func_8022FC10_S3;
struct func_8022FC10_S1 {
    char pad0[0x1];
    u8 unk1;
    char pad1[0x1D8 - 0x1 - sizeof(u8)];
    void* unk1D8;
};
struct func_8022FC10_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x770 - 0x650 - sizeof(s16)];
    s16 unk770;
    char pad770[0x7E8 - 0x770 - sizeof(s16)];
    s32 unk7E8;
    char pad7E8[0x11D8 - 0x7E8 - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x122C - 0x11D8 - sizeof(f32)];
    s32 unk122C;
};
struct func_8022FC10_S3 {
    char pad0[0x30];
    void* unk30;
    char pad30[0x130 - 0x30 - sizeof(void*)];
    f32 unk130;
    char pad130[0x148 - 0x130 - sizeof(f32)];
    f32 unk148;
};

void func_8022FC10(void *arg0, void *arg1) {
    void *actor;
    s16 index;
    s32 value;
    f32 old_delta;
    f32 scaled_delta;
    f32 zero;
    f32 timer;
    void *callback_owner;
    void (*callback)(void *, void *);

    actor = ((func_8022FC10_S1 *)(arg0))->unk1D8;
    index = ((func_8022FC10_S2 *)(actor))->unk650;
    value = D_800CE8DC[index].value;

    if (0.0f < ((func_8022FC10_S2 *)(actor))->unk11D8) {
        return;
    }

    old_delta = D_800D2988;
    scaled_delta = old_delta * D_800C7F80;
    if (actor != 0 && (((func_8022FC10_S2 *)(actor))->unk122C & 0x2000)) {
        D_800D2988 = scaled_delta;
    } else {
        D_800D2988 = old_delta;
    }

    timer = ((func_8022FC10_S3 *)(arg1))->unk148;
    zero = 0.0f;
    if (zero < timer) {
        ((func_8022FC10_S3 *)(arg1))->unk148 = timer - D_800D2988;
        ((func_8022FC10_S1 *)(arg0))->unk1 = 0;
    } else {
        ((func_8022FC10_S1 *)(arg0))->unk1 = 0;
    }

    if (zero < ((func_8022FC10_S3 *)(arg1))->unk130) {
        ((func_8022FC10_S3 *)(arg1))->unk130 -= D_800D2988;
    }

    if (value == 1) {
        func_80214178(arg0, arg1, 1);
    }
    if (((func_8022FC10_S2 *)(actor))->unk770 != ((func_8022FC10_S2 *)(actor))->unk62E) {
        ((func_8022FC10_S2 *)(actor))->unk7E8 = 0;
        func_80214178(arg0, arg1, 1);
    }

    callback_owner = ((func_8022FC10_S3 *)(arg1))->unk30;
    if (callback_owner != 0) {
        callback = *(void (**)(void *, void *))((char *)callback_owner + 8);
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    callback = *(void (**)(void *, void *))((char *)D_800D052C[((func_8022FC10_S2 *)(actor))->unk62E] + 0x5C);
    if (callback != 0) {
        callback(arg0, arg1);
    }
    func_8022BC04(actor);
    D_800D2988 = old_delta;
}
