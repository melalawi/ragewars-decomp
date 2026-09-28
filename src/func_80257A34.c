/* Stops every voice playing a sound id while holding the manager's recursive lock at 0x110: tells
 * func_802598D4 about the id, then for each of the 17 voice records whose sound matches it counts the voice
 * and either resets the spare record 16 or clears the voice's pending flag and stops its channel through
 * func_8025BABC when it has a handle; returns the number of voices found (0 for id -1). Lock handling
 * adapted from func_802588F4; the voice records are addressed by offset from the manager.
 */
#include "basetypes.h"

typedef struct {
    s32 unk0;
    s32 sound;
    s32 unk8;
    s32 unkC;
    char pad10[0x28];
    s16 priority;
    s16 channel;
    char pad3C[0x64];
    s32 pending;
    s32 flags;
    char padA8[0x24];
} Voice;

typedef struct {
    char pad0[0x60];
    s16 handles[17];
} Handles;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *, s32, s32);
extern void func_802598D4(void *, s32);
extern void func_8025BABC(void *, s16);

s32 func_80257A34(void *arg0, s32 id) {
    void *temp_s0;
    void *var_a0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_v0;
    s32 found;
    s32 i;
    Voice *voice;

    found = 0;
    if (id == -1) {
        return found;
    }
    temp_s0 = (char *)arg0 + 0x110;
    temp_a0 = func_802C2020();
    temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) + 1;
    *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)temp_s0, 0, 1);
        var_a0 = (char *)arg0 + 0x138;
    } else {
        func_802C2040(temp_a0);
        var_a0 = (char *)arg0 + 0x138;
    }
    func_802598D4(var_a0, id);
    for (i = 0; i < 17; i++) {
        if (((Voice *)((char *)arg0 + 0x1DBC + i * sizeof(Voice)))->sound == id) {
            found++;
            voice = (Voice *)((char *)arg0 + (i * sizeof(Voice) + 0x1DBC));
            if (i == 16) {
                voice->sound = -1;
                voice->priority = 0;
                voice->channel = -1;
                voice->unkC = -1;
                voice->unk8 = -1;
            } else {
                if (voice->pending > 0) {
                    voice->pending = 0;
                    voice->flags &= ~0x10;
                }
                if (((Handles *)((char *)arg0 + 0x7C))[0].handles[i] != -1) {
                    func_8025BABC((char *)arg0 + 0x1DB8, i);
                }
            }
        }
    }
    temp_s0 = (char *)arg0 + 0x110;
    temp_v0 = func_802C2020();
    temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) - 1;
    *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
    if (temp_v1 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(temp_s0, 0, 1);
    } else {
        func_802C2040(temp_v0);
    }
    return found;
}
