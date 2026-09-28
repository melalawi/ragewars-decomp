/* alSynAllocVoice, drafted from ultralib src/audio/synallocvoice.c: initialises a virtual voice from
   its config and binds it to a physical voice; a stolen physical voice is ramped to silence and
   stopped through two parameter updates on its channel filter. Returns whether one was bound. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct ALParam_s {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    union {
        f32 f;
        s32 i;
    } data;
    union {
        f32 f;
        s32 i;
    } moredata;
} ALParam;

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

typedef struct ALVoiceConfig_s {
    s16 priority;
    s16 fxBus;
    u8 unityPitch;
} ALVoiceConfig;

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

extern s32 func_802B8200(ALSynth *, PVoice **, s16); /* _allocatePVoice */
extern ALParam *func_802B8CC8(void);                 /* __allocParam */

s32 func_802B80D0(ALSynth *drvr, ALVoice *voice, ALVoiceConfig *vc)
{
    PVoice *pvoice = 0;
    ALFilter *f;
    ALParam *update;
    s32 stolen;

    voice->priority = vc->priority;
    voice->unityPitch = vc->unityPitch;
    voice->table = 0;
    voice->fxBus = vc->fxBus;
    voice->state = 0;
    voice->pvoice = 0;

    stolen = func_802B8200(drvr, &pvoice, vc->priority);

    if (pvoice) {
        f = pvoice->channelKnob;

        if (stolen) {
            pvoice->offset = 512;
            pvoice->vvoice->pvoice = 0;

            update = func_802B8CC8();
            update->delta = drvr->paramSamples;
            update->type = 11; /* AL_FILTER_SET_VOLUME */
            update->data.i = 0;
            update->moredata.i = pvoice->offset - 64;
            (*f->setParam)(f, 3, update); /* AL_FILTER_ADD_UPDATE */

            update = func_802B8CC8();
            if (update) {
                update->delta = drvr->paramSamples + pvoice->offset;
                update->type = 15; /* AL_FILTER_STOP_VOICE */
                update->next = 0;
                (*f->setParam)(f, 3, update);
            } else {
            }
        } else {
            pvoice->offset = 0;
        }

        pvoice->vvoice = voice;
        voice->pvoice = pvoice;
    }

    return (pvoice != 0);
}
