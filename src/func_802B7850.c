/* _handleEvent, drafted from ultralib src/audio/sndplayer.c: the sound player's event dispatcher;
   starts a sound's voice with its envelope attack, schedules decay, stop and end events, and
   applies pan, volume, pitch and fx changes to a playing voice. The 2.0I cartridge clamps the
   pitch against a single-precision 0.0001, the word after D_800CC790, read into a local ahead of
   the store so the store fills the branch delay slot as in the cartridge. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    s16 type;
    char msg[14];
} ALEvent;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct {
    s32 attackTime;
    s32 decayTime;
    s32 releaseTime;
    u8 attackVolume;
    u8 decayVolume;
} ALEnvelope;

typedef struct ALSound_s {
    ALEnvelope *envelope;
    void *keyMap;
    void *wavetable;
    u8 samplePan;
    u8 sampleVolume;
    u8 flags;
} ALSound;

typedef struct ALVoice_s {
    ALLink node;
    void *pvoice;
    void *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} ALVoice;

typedef struct ALVoiceConfig_s {
    s16 priority;
    s16 fxBus;
    u8 unityPitch;
} ALVoiceConfig;

typedef struct {
    void *head;
} ALSynth;

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    void *handler;
    s32 callTime;
    s32 samplesLeft;
} ALPlayer;

typedef struct {
    ALPlayer node;
    ALEventQueue evtq;
    ALEvent nextEvent;
    ALSynth *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    s32 frameTime;
    s32 nextDelta;
    s32 curTime;
} ALSndPlayer;

typedef struct {
    ALVoice voice;
    ALSound *sound;
    s16 priority;
    f32 pitch;
    s32 state;
    s16 vol;
    u8 pan;
    u8 fxMix;
} ALSoundState;

typedef union {
    ALEvent msg;
    struct {
        s16 type;
        ALSoundState *state;
    } common;
    struct {
        s16 type;
        ALSoundState *state;
        s16 vol;
    } vol;
    struct {
        s16 type;
        ALSoundState *state;
        f32 pitch;
    } pitch;
    struct {
        s16 type;
        ALSoundState *state;
        u8 pan;
    } pan;
    struct {
        s16 type;
        ALSoundState *state;
        u8 mix;
    } fx;
} ALSndpEvent;

extern const float D_800CC790; /* followed by 0.0001f */
#define MIN_PITCH (*(&D_800CC790 + 1))

extern s32 func_802B80D0(ALSynth *, ALVoice *, ALVoiceConfig *); /* alSynAllocVoice */
extern void func_802B8610(ALSynth *, ALVoice *, void *);         /* alSynStartVoice */
extern void func_802B8420(ALSynth *, ALVoice *, u8);             /* alSynSetPan */
extern void func_802B8550(ALSynth *, ALVoice *, s16, s32);       /* alSynSetVol */
extern void func_802B84B0(ALSynth *, ALVoice *, f32);            /* alSynSetPitch */
extern void func_802B8370(ALSynth *, ALVoice *, u8);             /* alSynSetFXMix */
extern void func_802B87C0(ALSynth *, ALVoice *);                 /* alSynStopVoice */
extern void func_802B82D0(ALSynth *, ALVoice *);                 /* alSynFreeVoice */
extern void func_802B51A4(ALEventQueue *, ALEvent *, s32);       /* alEvtqPostEvent */
extern void func_802B7D18(ALEventQueue *, ALSoundState *);       /* _removeEvents */
extern s32 func_802B7DC0(s32, f32);                              /* _DivS32ByF32 */

void func_802B7850(ALSndPlayer *sndp, ALSndpEvent *event)
{
    ALVoiceConfig vc;
    ALSound *snd;
    ALVoice *voice;
    u8 pan;
    f32 pitch;
    ALSndpEvent evt;
    s32 delta;
    s16 vol;
    s16 tmp;
    s32 vtmp;
    ALSoundState *state;

    state = event->common.state;
    snd = state->sound;

    switch (event->msg.type) {
        case 0: /* AL_SNDP_PLAY_EVT */
            if (state->state != 0 || !snd)
                return;
            vc.fxBus = 0;
            vc.priority = state->priority;
            vc.unityPitch = 0;
            voice = &state->voice;
            func_802B80D0(sndp->drvr, voice, &vc);
            vol = (s16)((s32)snd->envelope->attackVolume * state->vol / 127);
            tmp = state->pan - 64 + snd->samplePan;
            tmp = ((tmp) > (0) ? (tmp) : (0));
            pan = (u8)((tmp) < (127) ? (tmp) : (127));
            pitch = state->pitch;
            delta = snd->envelope->attackTime;
            func_802B8610(sndp->drvr, voice, snd->wavetable);
            state->state = 1;
            func_802B8420(sndp->drvr, voice, pan);
            func_802B8550(sndp->drvr, voice, vol, delta);
            func_802B84B0(sndp->drvr, voice, pitch);
            func_802B8370(sndp->drvr, voice, state->fxMix);
            evt.common.type = 6; /* AL_SNDP_DECAY_EVT */
            evt.common.state = state;
            delta = (s32)func_802B7DC0(snd->envelope->attackTime, state->pitch);
            func_802B51A4(&sndp->evtq, (ALEvent *)&evt, delta);
            break;

        case 1: /* AL_SNDP_STOP_EVT */
            if (state->state != 1 || !snd)
                return;
            delta = (s32)func_802B7DC0(snd->envelope->releaseTime, state->pitch);
            func_802B8550(sndp->drvr, &state->voice, 0, delta);
            if (delta) {
                evt.common.type = 7; /* AL_SNDP_END_EVT */
                evt.common.state = state;
                func_802B51A4(&sndp->evtq, (ALEvent *)&evt, delta);
                state->state = 2;
            } else {
                func_802B87C0(sndp->drvr, &state->voice);
                func_802B82D0(sndp->drvr, &state->voice);
                func_802B7D18(&sndp->evtq, state);
                state->state = 0;
            }
            break;

        case 2: /* AL_SNDP_PAN_EVT */
            state->pan = event->pan.pan;
            if (state->state == 1 && snd) {
                tmp = state->pan - 64 + snd->samplePan;
                tmp = ((tmp) > (0) ? (tmp) : (0));
                pan = (u8)((tmp) < (127) ? (tmp) : (127));
                func_802B8420(sndp->drvr, &state->voice, pan);
            }
            break;

        case 4: /* AL_SNDP_PITCH_EVT */
            {
                f32 min = MIN_PITCH;
                if ((state->pitch = event->pitch.pitch) < min)
                    state->pitch = min;
            }
            if (state->state == 1) {
                func_802B84B0(sndp->drvr, &state->voice, state->pitch);
            }
            break;

        case 8: /* AL_SNDP_FX_EVT */
            state->fxMix = event->fx.mix;
            if (state->state == 1)
                func_802B8370(sndp->drvr, &state->voice, state->fxMix);
            break;

        case 3: /* AL_SNDP_VOL_EVT */
            state->vol = event->vol.vol;
            if (state->state == 1 && snd) {
                vtmp = snd->envelope->decayVolume * state->vol / 127;
                func_802B8550(sndp->drvr, &state->voice, (s16)vtmp, 1000);
            }
            break;

        case 6: /* AL_SNDP_DECAY_EVT */
            if (snd->envelope->decayTime != -1) {
                vtmp = snd->envelope->decayVolume * state->vol / 127;
                delta = (s32)func_802B7DC0(snd->envelope->decayTime, state->pitch);
                func_802B8550(sndp->drvr, &state->voice, (s16)vtmp, delta);
                evt.common.type = 1; /* AL_SNDP_STOP_EVT */
                evt.common.state = state;
                func_802B51A4(&sndp->evtq, (ALEvent *)&evt, delta);
            }
            break;

        case 7: /* AL_SNDP_END_EVT */
            func_802B87C0(sndp->drvr, &state->voice);
            func_802B82D0(sndp->drvr, &state->voice);
            func_802B7D18(&sndp->evtq, state);
            state->state = 0;
            break;

        default:
            break;
    }
}
