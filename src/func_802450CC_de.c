#include "span_1000/code_80242BE0.h"
#include "span_16E000/code_80400000.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Advances the current audio cue once per new frame: when func_80244FB4_de has no resource to release, the
 * cue's position steps by the frame time (as func_80245C38_de, stopping the round via func_80244E58_de past its
 * threshold and looping or holding at its length) and func_80403458_de runs; a fading cue loses twice the
 * frame's fade step and, once below -0.5, stops fading and, if playing, runs its start and stop callbacks
 * (func_80245B74_de, func_80245BC0_de) and releases its sound; otherwise a playing, unpaused, non-looping cue with
 * no pending game event fires its cue callback past its cue point and, past its length, releases its sound
 * and fires its end callback; a still-playing cue then refreshes channel 10 through func_8025476C_de. */
typedef void (*FuncPtr)(void);





extern Record108 *D_800DE7E0;

extern s32 D_800CD728;
extern f32 D_800CD738;
extern GameState D_80140FB4;

extern s32 func_80245784_de(void);
extern u32 func_80245850_de(void);


extern void func_80245B74_de(s32);
extern void func_80245BC0_de(void);
extern void func_80253838_de(s32, s32);
extern void func_8025476C_de(s32);

void func_802450CC_de(void) {
    Record108 *record;
    f32 value;
    f32 limit;

    if (D_800CB420_de == D_800CD728) {
        return;
    }
    D_800CB420_de = D_800CD728;
    if (func_80244FB4_de() == 0) {
        if (func_80245784_de() != 0) {
            if (func_80245850_de() != 0) {
                D_800DE7E0->previous = D_800DE7E0->value;
            } else {
                record = D_800DE7E0;
                record->previous = *(volatile f32 *)&record->value;
                record->value += D_800CD738 * 0.06666667f;
                if (record->threshold <= record->value) {
                    func_80244E58_de();
                }
                value = D_800DE7E0->value;
                limit = D_800DE7E0->limit;
                if (limit <= value) {
                    if (D_800DE7E0->mode == 1) {
                        D_800DE7E0->value = value - limit;
                    } else {
                        D_800DE7E0->value = limit;
                        if (D_800DE7E0->active != 0) {
                            D_800DE7E0->done = 1;
                            D_800DE7E0->active = 0;
                        }
                    }
                }
            }
        }
        func_80403458_de();
    }
    func_80244FB4_de();
    if (D_800DE7E0->fading != 0 && (D_800DE7E0->fade -= 2.0f * (D_800CD738 * 0.06666667f)) < -0.5f) {
        D_800DE7E0->fading = 0;
        D_800DE7E0->fade = 0.0f;
        if (func_80245784_de() != 0) {
            func_80245B74_de(1);
            func_80245BC0_de();
            if (D_800DE7E0->sound != 0) {
                func_80253838_de(0, D_800DE7E0->sound);
            }
            D_800DE7E0->sound = 0;
            D_800DE7E0->unk_4 = 0;
            D_800DE7E0->playing = 0;
            D_800DE7E0->done = 0;
            D_800DE7E0->fading = 0;
        }
        return;
    }
    func_80244FB4_de();
    if (func_80245784_de() != 0 && func_80245850_de() == 0 && D_80140FB4.busy == 0 && D_80140FB4.paused == 0 &&
        D_800DE7E0->mode == 0) {
        if (D_800DE7E0->value >= D_800DE7E0->cue && D_800DE7E0->cueFired == 0) {
            FuncPtr cue = D_800DE7E0->onCue;

            if (cue != 0) {
                D_800DE7E0->onCue = 0;
                cue();
            }
            D_800DE7E0->cueFired = 1;
        }
        if (D_800DE7E0->value >= D_800DE7E0->limit && D_800DE7E0->endFired == 0) {
            if (D_800DE7E0->sound != 0) {
                func_80253838_de(0, D_800DE7E0->sound);
            }
            {
                FuncPtr end = D_800DE7E0->onEnd;

                D_800DE7E0->sound = 0;
                D_800DE7E0->unk_4 = 0;
                D_800DE7E0->playing = 0;
                D_800DE7E0->done = 0;
                D_800DE7E0->fading = 0;
                if (end != 0) {
                    D_800DE7E0->onEnd = 0;
                    end();
                }
            }
            D_800DE7E0->endFired = 1;
        }
    }
    func_80244FB4_de();
    if (D_800DE7E0->playing != 0) {
        func_8025476C_de(0xA);
    }
}
