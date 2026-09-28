/* Advances the current audio cue once per new frame: when func_80244FA4 has no resource to release, the
 * cue's position steps by the frame time (as func_80245C28, stopping the round via func_80244E48 past its
 * threshold and looping or holding at its length) and func_80403458 runs; a fading cue loses twice the
 * frame's fade step and, once below -0.5, stops fading and, if playing, runs its start and stop callbacks
 * (func_80245B64, func_80245BB0) and releases its sound; otherwise a playing, unpaused, non-looping cue with
 * no pending game event fires its cue callback past its cue point and, past its length, releases its sound
 * and fires its end callback; a still-playing cue then refreshes channel 10 through func_8025470C. */
#include "basetypes.h"
typedef void (*FuncPtr)(void);

typedef struct Record {
    s32 sound;
    s32 unk4;
    char pad8[0x4];
    FuncPtr onEnd;
    FuncPtr onCue;
    char pad14[0x8];
    f32 value;
    f32 previous;
    char pad24[8];
    f32 limit;
    f32 threshold;
    f32 cue;
    s32 playing;
    s32 done;
    char pad40[0x4];
    s32 cueFired;
    s32 endFired;
    char pad4C[0x14];
    s32 fading;
    f32 fade;
    char pad68[0x4C];
    s32 active;
    char padB8[0x4C];
    s32 mode;
} Record;

typedef struct {
    s32 busy;
    char pad4[0x18B0];
    s32 paused;
} GameState;

extern Record *D_800E2830;
extern s32 D_800D0660;
extern s32 D_800D2978;
extern f32 D_800D2988;
extern GameState D_80145074;
extern s32 func_80244FA4(void);
extern s32 func_80245774(void);
extern u32 func_80245840(void);
extern void func_80244E48(void);
extern void func_80403458(void);
extern void func_80245B64(s32);
extern void func_80245BB0(void);
extern void func_802537D8(s32, s32);
extern void func_8025470C(s32);

void func_802450BC(void) {
    Record *record;
    f32 value;
    f32 limit;

    if (D_800D0660 == D_800D2978) {
        return;
    }
    D_800D0660 = D_800D2978;
    if (func_80244FA4() == 0) {
        if (func_80245774() != 0) {
            if (func_80245840() != 0) {
                D_800E2830->previous = D_800E2830->value;
            } else {
                record = D_800E2830;
                record->previous = *(volatile f32 *)&record->value;
                record->value += D_800D2988 * 0.06666667f;
                if (record->threshold <= record->value) {
                    func_80244E48();
                }
                value = D_800E2830->value;
                limit = D_800E2830->limit;
                if (limit <= value) {
                    if (D_800E2830->mode == 1) {
                        D_800E2830->value = value - limit;
                    } else {
                        D_800E2830->value = limit;
                        if (D_800E2830->active != 0) {
                            D_800E2830->done = 1;
                            D_800E2830->active = 0;
                        }
                    }
                }
            }
        }
        func_80403458();
    }
    func_80244FA4();
    if (D_800E2830->fading != 0 && (D_800E2830->fade -= 2.0f * (D_800D2988 * 0.06666667f)) < -0.5f) {
        D_800E2830->fading = 0;
        D_800E2830->fade = 0.0f;
        if (func_80245774() != 0) {
            func_80245B64(1);
            func_80245BB0();
            if (D_800E2830->sound != 0) {
                func_802537D8(0, D_800E2830->sound);
            }
            D_800E2830->sound = 0;
            D_800E2830->unk4 = 0;
            D_800E2830->playing = 0;
            D_800E2830->done = 0;
            D_800E2830->fading = 0;
        }
        return;
    }
    func_80244FA4();
    if (func_80245774() != 0 && func_80245840() == 0 && D_80145074.busy == 0 && D_80145074.paused == 0 &&
        D_800E2830->mode == 0) {
        if (D_800E2830->value >= D_800E2830->cue && D_800E2830->cueFired == 0) {
            FuncPtr cue = D_800E2830->onCue;

            if (cue != 0) {
                D_800E2830->onCue = 0;
                cue();
            }
            D_800E2830->cueFired = 1;
        }
        if (D_800E2830->value >= D_800E2830->limit && D_800E2830->endFired == 0) {
            if (D_800E2830->sound != 0) {
                func_802537D8(0, D_800E2830->sound);
            }
            {
                FuncPtr end = D_800E2830->onEnd;

                D_800E2830->sound = 0;
                D_800E2830->unk4 = 0;
                D_800E2830->playing = 0;
                D_800E2830->done = 0;
                D_800E2830->fading = 0;
                if (end != 0) {
                    D_800E2830->onEnd = 0;
                    end();
                }
            }
            D_800E2830->endFired = 1;
        }
    }
    func_80244FA4();
    if (D_800E2830->playing != 0) {
        func_8025470C(0xA);
    }
}
