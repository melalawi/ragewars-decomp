#ifndef UNBAKE_SPAN_1000_CODE_802B7488_H
#define UNBAKE_SPAN_1000_CODE_802B7488_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALGlobals_func_802B2650_de;
typedef struct ALGlobals_func_802B2650_de ALGlobals_func_802B2650_de;

struct ALSndPlayer_func_802B2650_de;
typedef struct ALSndPlayer_func_802B2650_de ALSndPlayer_func_802B2650_de;

struct ALSndpConfig;
typedef struct ALSndpConfig ALSndpConfig;

struct ALSoundState;
typedef struct ALSoundState ALSoundState;

struct ALSynth_func_802B2650_de;
typedef struct ALSynth_func_802B2650_de ALSynth_func_802B2650_de;

struct ALSynth_func_802B2650_de;
struct ALSynth_func_802B2650_de {
    ALPlayer_s14 *head;
};
struct ALGlobals_func_802B2650_de;
struct ALGlobals_func_802B2650_de {
    ALSynth_func_802B2650_de drvr;
};
struct ALSndPlayer_func_802B2650_de;
struct ALSynth_func_802B2650_de;
struct ALSndPlayer_func_802B2650_de {
    ALPlayer_s14 node;
    ALEventQueue evtq;
    Message_func_802AF150_de nextEvent;
    struct ALSynth_func_802B2650_de *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    s32 frameTime;
    s32 nextDelta;
    s32 curTime;
};
struct ALSndpConfig;
struct ALSndpConfig {
    s32 maxSounds;
    s32 maxEvents;
    ALHeap *heap;
};
struct ALSoundState;
struct ALSoundState {
    ALVoice_s voice;
    void *sound;
    s16 priority;
    f32 pitch;
    s32 state;
    s16 vol;
    u8 pan;
    u8 fxMix;
};
extern void func_802B748C_de(void);
#endif
