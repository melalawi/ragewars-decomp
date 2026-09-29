#include "basetypes.h"

typedef struct EventSlot {
    s8 value;
    s8 pad;
} EventSlot;

typedef struct EventActor {
    char pad[0x602];
    EventSlot event_slots[1];
} EventActor;

extern char D_80145088;
extern u8 D_801462C8;
extern u8 D_801462E5;
extern void *D_800D052C[];

extern s32 func_80222BC4(void *arg0, s16 arg1, s16 arg2);
extern void func_8023919C(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void func_80237E70(void *arg0, void *arg1, void *arg2);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

typedef struct func_802AC96C_S1 func_802AC96C_S1;
typedef struct func_802AC96C_S2 func_802AC96C_S2;
typedef struct func_802AC96C_S3 func_802AC96C_S3;
typedef struct func_802AC96C_S4 func_802AC96C_S4;
typedef struct func_802AC96C_S5 func_802AC96C_S5;
typedef struct func_802AC96C_S6 func_802AC96C_S6;
typedef union func_802AC96C_S1_UC { s16 v0; u16 v1; } func_802AC96C_S1_UC;
struct func_802AC96C_S1 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    func_802AC96C_S1_UC unkC;
    char padC[0xE - 0xC - sizeof(func_802AC96C_S1_UC)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s16 unk10;
};
struct func_802AC96C_S2 {
    char pad0[0x1D];
    u8 unk1D;
    char pad1D[0x62C - 0x1D - sizeof(u8)];
    s32 unk62C;
};
struct func_802AC96C_S3 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x38 - 0x10 - sizeof(s32)];
    s32 unk38;
    char pad38[0x5D8 - 0x38 - sizeof(s32)];
    void* unk5D8;
    char pad5D8[0x5DC - 0x5D8 - sizeof(void*)];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x770 - 0x62E - sizeof(s16)];
    u16 unk770;
};
struct func_802AC96C_S4 {
    char pad0[0x8F];
    u8 unk8F;
};
struct func_802AC96C_S5 {
    char pad0[0x14];
    s32 unk14;
};
struct func_802AC96C_S6 {
    char pad0[0x14];
    s32 unk14;
};

/** Apply a scripted actor event and its optional resource callbacks. */
s32 func_802AC96C(EventActor *arg0, void *arg1) {
    void *resource;
    s32 initial_result;
    s32 result;
    s32 sound;
    s32 callback;
    s16 index;
    char *global_state;

    initial_result = 0;
    if (((func_802AC96C_S1 *)(arg1))->unkE == -1) {
        goto process;
    }
    if (arg0->event_slots[((func_802AC96C_S1 *)(arg1))->unkC.v0].value == 0) {
        goto process;
    }
    initial_result = func_80222BC4(arg0,
                                   ((func_802AC96C_S1 *)(arg1))->unkE,
                                   ((func_802AC96C_S1 *)(arg1))->unk10);
    if (initial_result != 0) {
        goto process;
    }
    global_state = (char *)&D_801462C8;
    result = 0;
    if (((func_802AC96C_S2 *)(global_state))->unk1D == 0) {
        return result;
    }
    result = 0;
    if (((func_802AC96C_S4 *)(((func_802AC96C_S3 *)(arg0))->unk5D8))->unk8F == 0) {
        return result;
    }
    result = 0;
    if (((func_802AC96C_S2 *)(global_state))->unk62C == 0) {
        return result;
    }
process:
    if (D_801462E5 != 0) {
        if (!(((func_802AC96C_S5 *)(D_800D052C[((func_802AC96C_S1 *)(arg1))->unkC.v0]))->unk14 & 8)) {
            return 0;
        }
    } else if (((func_802AC96C_S5 *)(D_800D052C[((func_802AC96C_S1 *)(arg1))->unkC.v0]))->unk14 & 8) {
        return 0;
    }
    {
        s32 old_state;
        void *entry;

        old_state = arg0->event_slots[((func_802AC96C_S1 *)(arg1))->unkC.v0].value;
        arg0->event_slots[((func_802AC96C_S1 *)(arg1))->unkC.v0].value = 1;
        index = ((func_802AC96C_S1 *)(arg1))->unkC.v0;
        entry = D_800D052C[index];
        if (((func_802AC96C_S3 *)(arg0))->unk62E < index) {
            if (((func_802AC96C_S3 *)(arg0))->unk38 & 0x1000) {
                if (((func_802AC96C_S6 *)(entry))->unk14 & 2) {
                    goto set_index;
                }
            } else if (((func_802AC96C_S6 *)(entry))->unk14 & 1) {
set_index:
                if (D_801462E5 == 0 && old_state == 0) {
                    ((func_802AC96C_S3 *)(arg0))->unk770 = ((func_802AC96C_S1 *)(arg1))->unkC.v1;
                }
            }
        }
    }
    resource = *(void **)arg1;
    sound = ((func_802AC96C_S1 *)(arg1))->unk6;
    callback = ((func_802AC96C_S1 *)(arg1))->unk8;
    if (((func_802AC96C_S3 *)(arg0))->unk5DC != 0) {
        func_8023919C(((func_802AC96C_S3 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          ((func_802AC96C_S3 *)(arg0))->unk5DC,
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74(sound,
                      ((func_802AC96C_S3 *)(arg0))->unk8,
                      ((func_802AC96C_S3 *)(arg0))->unkC,
                      ((func_802AC96C_S3 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
    result = 1;
    if (initial_result == 0) {
        func_80222BC4(arg0, ((func_802AC96C_S1 *)(arg1))->unkE,
                       ((func_802AC96C_S1 *)(arg1))->unk10);
        result = 1;
    }
    return result;
}
