/* alSndpNew, drafted from ultralib src/audio/sndplayer.c: sets up a sound player from its config,
   allocating the sound states and event items from the heap, registers its voice handler with the
   global synthesizer and posts the first frame API event. */
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
    ALLink node;
    s32 delta;
    ALEvent evt;
} ALEventListItem;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct {
    u8 *base;
    u8 *cur;
    s32 len;
    s32 count;
} ALHeap;

typedef s32 (*ALVoiceHandler)(void *);

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    ALVoiceHandler handler;
    s32 callTime;
    s32 samplesLeft;
} ALPlayer;

typedef struct {
    ALPlayer *head;
} ALSynth;

typedef struct {
    ALSynth drvr;
} ALGlobals;

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

typedef struct {
    ALVoice voice;
    void *sound;
    s16 priority;
    f32 pitch;
    s32 state;
    s16 vol;
    u8 pan;
    u8 fxMix;
} ALSoundState;

typedef struct {
    s32 maxSounds;
    s32 maxEvents;
    ALHeap *heap;
} ALSndpConfig;

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

extern ALGlobals *D_800D80A0; /* alGlobals */

extern void *func_802B5410(u8 *, s32, ALHeap *, s32, s32);          /* alHeapDBAlloc */
extern void func_802B5090(ALEventQueue *, ALEventListItem *, s32);  /* alEvtqNew */
extern void func_802B8080(ALSynth *, ALPlayer *);                   /* alSynAddPlayer */
extern void func_802B51A4(ALEventQueue *, ALEvent *, s32);          /* alEvtqPostEvent */
extern s32 func_802B510C(ALEventQueue *, ALEvent *);                /* alEvtqNextEvent */
/* _sndpVoiceHandler (func_802B7C8C); the cartridge stores the handler by its 0x002B7C8C address. */
extern s32 D_2B7C8C(void *);

void func_802B7720(ALSndPlayer *sndp, ALSndpConfig *c)
{
    u8 *ptr;
    ALEvent evt;
    ALSoundState *sState;
    u32 i;

    sndp->maxSounds = c->maxSounds;
    sndp->target = -1;
    sndp->frameTime = 16000;
    sState = (ALSoundState *)func_802B5410(0, 0, c->heap, 1, c->maxSounds * sizeof(ALSoundState));
    sndp->sndState = sState;

    for (i = 0; i < c->maxSounds; i++)
        sState[i].sound = 0;

    ptr = func_802B5410(0, 0, c->heap, 1, c->maxEvents * sizeof(ALEventListItem));
    func_802B5090(&sndp->evtq, (ALEventListItem *)ptr, c->maxEvents);

    sndp->drvr = &D_800D80A0->drvr;

    sndp->node.next = 0;
    sndp->node.handler = D_2B7C8C;
    sndp->node.clientData = sndp;
    func_802B8080(sndp->drvr, &sndp->node);

    evt.type = 5; /* AL_SNDP_API_EVT */
    func_802B51A4(&sndp->evtq, (ALEvent *)&evt, sndp->frameTime);
    sndp->nextDelta = func_802B510C(&sndp->evtq, &sndp->nextEvent);
}
