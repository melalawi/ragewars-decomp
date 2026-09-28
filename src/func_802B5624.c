/* __seqpVoiceHandler, drafted from ultralib src/audio/seqplayer.c: the sequence player's
   synthesizer callback, which handles each due event from the player's queue (sequence, API,
   note end, envelope, oscillator, MIDI, play/stop, volume, loop, priority and sequence/bank
   changes) until the next event lies in the future, then advances the player's time by that
   delta. The float to u8 tremolo conversion is written out against the cartridge's 2^31
   constant. */
#include "basetypes.h"
typedef s32 ALMicroTime;

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    ALMicroTime attackTime;
    ALMicroTime decayTime;
    ALMicroTime releaseTime;
    u8 attackVolume;
    u8 decayVolume;
} ALEnvelope;

typedef struct ALSound_s {
    ALEnvelope *envelope;
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

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    void *handler;
    ALMicroTime callTime;
    s32 samplesLeft;
} ALPlayer;

typedef struct {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
} ALSeqMarker;

typedef struct {
    ALSeqMarker *start;
    ALSeqMarker *end;
    s32 count;
} ALSeqpLoopEvent;

typedef struct {
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
} ALMIDIEvent;

typedef struct {
    struct ALVoice_s *voice;
} ALNoteEvent;

typedef struct {
    struct ALVoice_s *voice;
    ALMicroTime delta;
    u8 vol;
} ALVolumeEvent;

typedef struct {
    s16 vol;
} ALSeqpVolEvent;

typedef struct {
    u8 chan;
    u8 priority;
} ALSeqpPriorityEvent;

typedef struct {
    void *seq;
} ALSeqpSeqEvent;

typedef struct {
    void *bank;
} ALSeqpBankEvent;

typedef struct {
    struct ALVoiceState_s *vs;
    void *oscState;
    u8 chan;
} ALOscEvent;

typedef struct {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALNoteEvent note;
        ALVolumeEvent vol;
        ALSeqpLoopEvent loop;
        ALSeqpVolEvent spvol;
        ALSeqpPriorityEvent sppriority;
        ALSeqpSeqEvent spseq;
        ALSeqpBankEvent spbank;
        ALOscEvent osc;
    } msg;
} ALEvent;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice voice;
    ALSound *sound;
    ALMicroTime envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
} ALVoiceState;

typedef struct {
    void *instrument;
    s16 bendRange;
    u8 fxId;
    u8 pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
} ALChanState;

typedef ALMicroTime (*ALOscInit)(void **oscState, f32 *initVal, u8 oscType, u8 oscRate,
                                 u8 oscDepth, u8 oscDelay);
typedef ALMicroTime (*ALOscUpdate)(void *oscState, f32 *updateVal);
typedef void (*ALOscStop)(void *oscState);

typedef struct {
    ALPlayer node;
    void *drvr;
    void *target;
    ALMicroTime curTime;
    void *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
} ALSeqPlayer;

extern const float D_800CC6A8; /* 2147483648.0f */
extern char D_800CC690[];      /* "EX" */
extern char D_800CC694[];      /* "audio/seqplayer.c" */

extern void func_802B5B60(ALSeqPlayer *);                        /* __handleNextSeqEvent */
extern void func_802B5D64(ALSeqPlayer *, ALEvent *);             /* __handleMIDIMsg */
extern void func_802B6EBC(ALSeqPlayer *, ALEvent *);             /* __handleMetaMsg */
extern void func_802B6DF4(ALSeqPlayer *);                        /* __postNextSeqEvent */
extern void func_802B6F20(ALSeqPlayer *, f32);                   /* __setUsptFromTempo */
extern void func_802B51A4(ALEventQueue *, ALEvent *, ALMicroTime); /* alEvtqPostEvent */
extern ALMicroTime func_802B510C(ALEventQueue *, ALEvent *);    /* alEvtqNextEvent */
extern void func_802B5328(ALEventQueue *, s16);                 /* alEvtqFlushType */
extern void func_802B87C0(void *, ALVoice *);                   /* alSynStopVoice */
extern void func_802B82D0(void *, ALVoice *);                   /* alSynFreeVoice */
extern void func_802B8550(void *, ALVoice *, s16, ALMicroTime); /* alSynSetVol */
extern void func_802B84B0(void *, ALVoice *, f32);              /* alSynSetPitch */
extern void func_802B6D04(ALSeqPlayer *, ALVoiceState *);       /* __seqpStopOsc */
extern void func_802B663C(ALSeqPlayer *, ALVoice *);            /* __unmapVoice */
extern s16 func_802B68E4(ALVoiceState *, ALSeqPlayer *);        /* __vsVol */
extern ALMicroTime func_802B6958(ALVoiceState *, ALMicroTime);  /* __vsDelta */
extern u8 func_802B66A0(ALSeqPlayer *, ALVoice *, ALMicroTime);  /* __voiceNeedsNoteKill */
extern void func_802B6BE4(ALSeqPlayer *, ALVoice *, ALMicroTime); /* __seqpReleaseVoice */
extern void func_802B69B4(ALSeqPlayer *, void *);               /* __initFromBank */
extern void func_802BFD40(char *, char *, s32);                 /* __assert */

ALMicroTime func_802B5624(void *node)
{
    ALSeqPlayer *seqp = (ALSeqPlayer *)node;
    ALEvent evt;
    ALVoice *voice;
    ALMicroTime delta;
    ALVoiceState *vs;
    void *oscState;
    f32 oscValue;
    u8 chan;
    s32 tremelo;
    u8 *tremeloSlot;

    do {
        switch (seqp->nextEvent.type) {
        case 0: /* AL_SEQ_REF_EVT */
            func_802B5B60(seqp);
            break;
        case 9: /* AL_SEQP_API_EVT */
            evt.type = 9;
            func_802B51A4(&seqp->evtq, (ALEvent *)&evt, seqp->frameTime);
            break;
        case 5: /* AL_NOTE_END_EVT */
            voice = seqp->nextEvent.msg.note.voice;
            func_802B87C0(seqp->drvr, voice);
            func_802B82D0(seqp->drvr, voice);
            vs = (ALVoiceState *)voice->clientPrivate;
            if (vs->flags)
                func_802B6D04(seqp, vs);
            func_802B663C(seqp, voice);
            break;
        case 6: /* AL_SEQP_ENV_EVT */
            voice = seqp->nextEvent.msg.vol.voice;
            vs = (ALVoiceState *)voice->clientPrivate;
            if (vs->envPhase == 0)
                vs->envPhase = 1;
            delta = seqp->nextEvent.msg.vol.delta;
            vs->envGain = seqp->nextEvent.msg.vol.vol;
            vs->envEndTime = seqp->curTime + delta;
            func_802B8550(seqp->drvr, voice, func_802B68E4(vs, seqp), delta);
            break;
        case 22: /* AL_TREM_OSC_EVT */
            vs = seqp->nextEvent.msg.osc.vs;
            oscState = seqp->nextEvent.msg.osc.oscState;
            delta = (*seqp->updateOsc)(oscState, &oscValue);
            tremeloSlot = &vs->tremelo;
            if (!(D_800CC6A8 <= oscValue)) {
                tremelo = (s32)oscValue;
            } else {
                tremelo = (s32)(oscValue - D_800CC6A8);
                tremelo |= 0x80000000;
            }
            *tremeloSlot = tremelo;
            func_802B8550(seqp->drvr, &vs->voice, func_802B68E4(vs, seqp),
                          func_802B6958(vs, seqp->curTime));
            evt.type = 22;
            evt.msg.osc.vs = vs;
            evt.msg.osc.oscState = oscState;
            func_802B51A4(&seqp->evtq, &evt, delta);
            break;
        case 23: /* AL_VIB_OSC_EVT */
            vs = seqp->nextEvent.msg.osc.vs;
            oscState = seqp->nextEvent.msg.osc.oscState;
            chan = seqp->nextEvent.msg.osc.chan;
            delta = (*seqp->updateOsc)(oscState, &oscValue);
            vs->vibrato = oscValue;
            func_802B84B0(seqp->drvr, &vs->voice,
                          vs->pitch * vs->vibrato * seqp->chanState[chan].pitchBend);
            evt.type = 23;
            evt.msg.osc.vs = vs;
            evt.msg.osc.oscState = oscState;
            evt.msg.osc.chan = chan;
            func_802B51A4(&seqp->evtq, &evt, delta);
            break;
        case 2: /* AL_SEQP_MIDI_EVT */
            func_802B5D64(seqp, &seqp->nextEvent);
            break;
        case 7: /* AL_SEQP_META_EVT */
            func_802B6EBC(seqp, &seqp->nextEvent);
            break;
        case 15: /* AL_SEQP_PLAY_EVT */
            if (seqp->state != 1) {
                seqp->state = 1;
                func_802B6DF4(seqp);
            }
            break;
        case 16: /* AL_SEQP_STOP_EVT */
            if (seqp->state == 2) {
                for (vs = seqp->vAllocHead; vs != 0; vs = seqp->vAllocHead) {
                    func_802B87C0(seqp->drvr, &vs->voice);
                    func_802B82D0(seqp->drvr, &vs->voice);
                    if (vs->flags)
                        func_802B6D04(seqp, vs);
                    func_802B663C(seqp, &vs->voice);
                }
                seqp->curTime = 0;
                seqp->state = 0;
            }
            break;
        case 17: /* AL_SEQP_STOPPING_EVT */
            if (seqp->state == 1) {
                func_802B5328(&seqp->evtq, 0);
                func_802B5328(&seqp->evtq, 2);
                for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                    if (func_802B66A0(seqp, &vs->voice, 50000))
                        func_802B6BE4(seqp, &vs->voice, 50000);
                }
                seqp->state = 2;
                evt.type = 16;
                func_802B51A4(&seqp->evtq, &evt, 0x7fffffff);
            }
            break;
        case 10: /* AL_SEQP_VOL_EVT */
            seqp->vol = seqp->nextEvent.msg.spvol.vol;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                func_802B8550(seqp->drvr, &vs->voice, func_802B68E4(vs, seqp),
                              func_802B6958(vs, seqp->curTime));
            }
            break;
        case 11: /* AL_SEQP_LOOP_EVT */
            seqp->loopStart = seqp->nextEvent.msg.loop.start;
            seqp->loopEnd = seqp->nextEvent.msg.loop.end;
            seqp->loopCount = seqp->nextEvent.msg.loop.count;
            break;
        case 12: /* AL_SEQP_PRIORITY_EVT */
            chan = seqp->nextEvent.msg.sppriority.chan;
            seqp->chanState[chan].priority = seqp->nextEvent.msg.sppriority.priority;
            break;
        case 13: /* AL_SEQP_SEQ_EVT */
            if (seqp->state == 1)
                func_802BFD40(D_800CC690, D_800CC694, 296);
            seqp->target = seqp->nextEvent.msg.spseq.seq;
            func_802B6F20(seqp, 500000.0f);
            if (seqp->bank)
                func_802B69B4(seqp, seqp->bank);
            break;
        case 14: /* AL_SEQP_BANK_EVT */
            if (seqp->state != 0)
                func_802BFD40(D_800CC690, D_800CC694, 305);
            seqp->bank = seqp->nextEvent.msg.spbank.bank;
            func_802B69B4(seqp, seqp->bank);
            break;
        case 4: /* AL_SEQ_END_EVT */
        case 3: /* AL_TEMPO_EVT */
        case 1: /* AL_SEQ_MIDI_EVT */
            func_802BFD40(D_800CC690, D_800CC694, 315);
            break;
        }
        seqp->nextDelta = func_802B510C(&seqp->evtq, &seqp->nextEvent);
    } while (seqp->nextDelta == 0);
    seqp->curTime += seqp->nextDelta;
    return seqp->nextDelta;
}
