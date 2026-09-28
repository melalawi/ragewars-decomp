/* alSynNew, drafted from ultralib src/audio/synthesizer.c: builds the synthesizer from its config,
   allocating the save filter, the aux and main busses (with an effect when one is configured),
   every physical voice with its decoder, resampler and envelope mixer chain, and the free list of
   parameter updates. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    u8 *base;
    u8 *cur;
    s32 len;
    s32 count;
} ALHeap;

typedef void *(*ALDMANew)(void *);

typedef struct {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaproc;
    ALHeap *heap;
    s32 outputRate;
    u8 fxType;
    s32 *params;
} ALSynConfig;

typedef struct ALParam_s {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    s32 data;
    s32 moredata;
    s32 stillmoredata;
    s32 yetstillmoredata;
} ALParam;

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    ALFilter filter;
    s32 dramout;
    s32 first;
} ALSave;

typedef struct ALMainBus_s {
    ALFilter filter;
    s32 sourceCount;
    s32 maxSources;
    ALFilter **sources;
} ALMainBus;

typedef struct ALAuxBus_s {
    ALFilter filter;
    s32 sourceCount;
    s32 maxSources;
    ALFilter **sources;
    char fx[0x4C - 0x20];
} ALAuxBus;

typedef struct {
    char pad[0x48];
} ALLoadFilter;

typedef struct {
    char pad[0x34];
} ALResampler;

typedef struct {
    char pad[0x4C];
} ALEnvMixer;

typedef struct PVoice_s {
    ALLink node;
    struct ALVoice_s *vvoice;
    ALFilter *channelKnob;
    ALLoadFilter decoder;
    ALResampler resampler;
    ALEnvMixer envmixer;
    s32 offset;
} PVoice;

typedef struct {
    void *head;
    ALLink pFreeList;
    ALLink pAllocList;
    ALLink pLameList;
    s32 paramSamples;
    s32 curSamples;
    ALDMANew dma;
    ALHeap *heap;
    ALParam *paramList;
    ALMainBus *mainBus;
    ALAuxBus *auxBus;
    ALFilter *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
} ALSynth;

extern void *func_802B5410(u8 *, s32, ALHeap *, s32, s32);       /* alHeapDBAlloc */
extern void func_802B9668(ALSave *);                             /* alSaveNew */
extern void func_802B9580(ALAuxBus *, void *, s32);              /* alAuxBusNew */
extern void func_802B9524(ALMainBus *, void *, s32);             /* alMainBusNew */
extern void *func_802BB590(ALSynth *, s16, ALSynConfig *, ALHeap *); /* alSynAllocFX */
extern s32 func_802BA610(void *, s32, void *);                   /* alMainBusParam */
extern void func_802B7550(ALLink *, ALLink *);                   /* alLink */
extern void func_802B9474(ALLoadFilter *, ALDMANew, ALHeap *);   /* alLoadNew */
extern s32 func_802C3B94(void *, s32, void *);                   /* alLoadParam */
extern void func_802B95DC(ALResampler *, ALHeap *);              /* alResampleNew */
extern s32 func_802BA800(void *, s32, void *);                   /* alResampleParam */
extern void func_802B96AC(ALEnvMixer *, ALHeap *);               /* alEnvmixerNew */
extern s32 func_802BA288(void *, s32, void *);                   /* alEnvmixerParam */
extern s32 func_802B8FAC(void *, s32, void *);                   /* alAuxBusParam */
extern s32 func_802BB550(void *, s32, void *);                   /* alSaveParam */

void func_802B8840(ALSynth *drvr, ALSynConfig *c)
{
    s32 i;
    PVoice *pv;
    PVoice *pvoices;
    ALHeap *hp = c->heap;
    ALSave *save;
    ALFilter *sources;
    ALParam *params;
    ALParam *paramPtr;

    drvr->head = 0;
    drvr->numPVoices = c->maxPVoices;
    drvr->curSamples = 0;
    drvr->paramSamples = 0;
    drvr->outputRate = c->outputRate;
    drvr->maxOutSamples = 160;
    drvr->dma = (ALDMANew)c->dmaproc;

    save = func_802B5410(0, 0, hp, 1, sizeof(ALSave));
    func_802B9668(save);
    drvr->outputFilter = (ALFilter *)save;

    drvr->auxBus = func_802B5410(0, 0, hp, 1, sizeof(ALAuxBus));
    drvr->maxAuxBusses = 1;
    sources = func_802B5410(0, 0, hp, c->maxPVoices, sizeof(ALFilter *));
    func_802B9580(drvr->auxBus, sources, c->maxPVoices);

    drvr->mainBus = func_802B5410(0, 0, hp, 1, sizeof(ALMainBus));
    sources = func_802B5410(0, 0, hp, c->maxPVoices, sizeof(ALFilter *));
    func_802B9524(drvr->mainBus, sources, c->maxPVoices);

    if (c->fxType != 0) {
        func_802BB590(drvr, 0, c, hp);
    } else
        func_802BA610(drvr->mainBus, 2, &drvr->auxBus[0]); /* AL_FILTER_ADD_SOURCE */

    drvr->pFreeList.next = 0;
    drvr->pFreeList.prev = 0;
    drvr->pLameList.next = 0;
    drvr->pLameList.prev = 0;
    drvr->pAllocList.next = 0;
    drvr->pAllocList.prev = 0;

    pvoices = func_802B5410(0, 0, hp, c->maxPVoices, sizeof(PVoice));
    for (i = 0; i < c->maxPVoices; i++) {
        pv = &pvoices[i];
        func_802B7550((ALLink *)pv, &drvr->pFreeList);
        pv->vvoice = 0;

        func_802B9474(&pv->decoder, drvr->dma, hp);
        func_802C3B94(&pv->decoder, 1, 0); /* AL_FILTER_SET_SOURCE */

        func_802B95DC(&pv->resampler, hp);
        func_802BA800(&pv->resampler, 1, &pv->decoder);

        func_802B96AC(&pv->envmixer, hp);
        func_802BA288(&pv->envmixer, 1, &pv->resampler);

        func_802B8FAC(drvr->auxBus, 2, &pv->envmixer);

        pv->channelKnob = (ALFilter *)&pv->envmixer;
    }

    func_802BB550(save, 1, drvr->mainBus);

    params = func_802B5410(0, 0, hp, c->maxUpdates, sizeof(ALParam));
    drvr->paramList = 0;
    for (i = 0; i < c->maxUpdates; i++) {
        paramPtr = &params[i];
        paramPtr->next = drvr->paramList;
        drvr->paramList = paramPtr;
    }
    drvr->heap = hp;
}
