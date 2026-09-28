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
    if (*(s16 *)((char *)arg1 + 0xE) == -1) {
        goto process;
    }
    if (arg0->event_slots[*(s16 *)((char *)arg1 + 0xC)].value == 0) {
        goto process;
    }
    initial_result = func_80222BC4(arg0,
                                   *(s16 *)((char *)arg1 + 0xE),
                                   *(s16 *)((char *)arg1 + 0x10));
    if (initial_result != 0) {
        goto process;
    }
    global_state = (char *)&D_801462C8;
    result = 0;
    if (*(u8 *)(global_state + 0x1D) == 0) {
        return result;
    }
    result = 0;
    if (*(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x8F) == 0) {
        return result;
    }
    result = 0;
    if (*(s32 *)(global_state + 0x62C) == 0) {
        return result;
    }
process:
    if (D_801462E5 != 0) {
        if (!(*(s32 *)((char *)D_800D052C[*(s16 *)((char *)arg1 + 0xC)] + 0x14) & 8)) {
            return 0;
        }
    } else if (*(s32 *)((char *)D_800D052C[*(s16 *)((char *)arg1 + 0xC)] + 0x14) & 8) {
        return 0;
    }
    {
        s32 old_state;
        void *entry;

        old_state = arg0->event_slots[*(s16 *)((char *)arg1 + 0xC)].value;
        arg0->event_slots[*(s16 *)((char *)arg1 + 0xC)].value = 1;
        index = *(s16 *)((char *)arg1 + 0xC);
        entry = D_800D052C[index];
        if (*(s16 *)((char *)arg0 + 0x62E) < index) {
            if (*(s32 *)((char *)arg0 + 0x38) & 0x1000) {
                if (*(s32 *)((char *)entry + 0x14) & 2) {
                    goto set_index;
                }
            } else if (*(s32 *)((char *)entry + 0x14) & 1) {
set_index:
                if (D_801462E5 == 0 && old_state == 0) {
                    *(u16 *)((char *)arg0 + 0x770) = *(u16 *)((char *)arg1 + 0xC);
                }
            }
        }
    }
    resource = *(void **)arg1;
    sound = *(s16 *)((char *)arg1 + 6);
    callback = *(s16 *)((char *)arg1 + 8);
    if (*(void **)((char *)arg0 + 0x5DC) != 0) {
        func_8023919C(*(void **)((char *)arg0 + 0x5DC),
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          *(void **)((char *)arg0 + 0x5DC),
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74(sound,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10), 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
    result = 1;
    if (initial_result == 0) {
        func_80222BC4(arg0, *(s16 *)((char *)arg1 + 0xE),
                       *(s16 *)((char *)arg1 + 0x10));
        result = 1;
    }
    return result;
}
