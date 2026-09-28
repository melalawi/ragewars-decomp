/* alSynStartVoiceParams, drafted from ultralib src/audio/synstartvoiceparam.c (2.0I branch, no
   fxmix clamp): posts a start-voice-alt update carrying pitch, volume, pan, fx mix, wave table and
   the ramp time in samples to the voice's channel filter. The fx mix is declared signed, since the
   cartridge keeps the reference's fxmix < 0 negation, which an unsigned type would fold away. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct ALParam_s {
    struct ALParam_s *next;
} ALParam;

typedef struct {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    s16 unity;
    f32 pitch;
    s16 volume;
    u8 pan;
    u8 fxMix;
    s32 samples;
    void *wave;
} ALStartParamAlt;

typedef s32 (*ALSetParam)(void *, s32, void *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    ALSetParam setParam;
} ALFilter;

typedef struct ALVoice_s {
    ALLink node;
    struct PVoice_s *pvoice;
    void *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} ALVoice;

typedef struct PVoice_s {
    ALLink node;
    struct ALVoice_s *vvoice;
    ALFilter *channelKnob;
    char pad10[0xD8 - 0x10];
    s32 offset;
} PVoice;

typedef struct {
    void *head;
    ALLink pFreeList;
    ALLink pAllocList;
    ALLink pLameList;
    s32 paramSamples;
} ALSynth;

extern ALParam *func_802B8CC8(void);          /* __allocParam */
extern s32 func_802B8DA0(ALSynth *, s32);     /* _timeToSamples */

void func_802B86B0(ALSynth *s, ALVoice *v, void *w, f32 pitch, s16 vol, u8 pan, s8 fxmix, s32 t)
{
    ALStartParamAlt *update;
    ALFilter *f;

    if (v->pvoice) {
        update = (ALStartParamAlt *)func_802B8CC8();
        if (update == 0) { return; };

        if (fxmix < 0) {
            fxmix = -fxmix;
        }

        update->delta = s->paramSamples + v->pvoice->offset;
        update->next = 0;
        update->type = 13; /* AL_FILTER_START_VOICE_ALT */
        update->unity = v->unityPitch;
        update->pan = pan;
        update->volume = vol;
        update->fxMix = fxmix;
        update->pitch = pitch;
        update->samples = func_802B8DA0(s, t);
        update->wave = w;

        f = v->pvoice->channelKnob;
        (*f->setParam)(f, 3, update); /* AL_FILTER_ADD_UPDATE */
    }
}
