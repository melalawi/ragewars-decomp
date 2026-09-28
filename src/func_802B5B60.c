/* __handleNextSeqEvent, drafted from ultralib src/audio/seqplayer.c: read the next event of the
   target sequence, hand MIDI and tempo events to their handlers and post the following sequence
   event, or stop the player at the end of the sequence. The -O3 library inlined
   __postNextSeqEvent into both cases; a static inline copy reproduces that. __alSeqNextDelta's
   char result is tested as unsigned (andi 0xff), so it is declared u8. */
#include "basetypes.h"

typedef s32 ALMicroTime;

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    s16 type;
    union {
        s32 word[3];
    } msg;
} ALEvent;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
} ALSeqMarker;

typedef struct ALSeq_s ALSeq;

typedef struct {
    char node[0x14];
    void *drvr;
    ALSeq *target;
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
    void *chanState;
    void *vAllocHead;
    void *vAllocTail;
    void *vFreeList;
    void *initOsc;
    void *updateOsc;
    void *stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
} ALSeqPlayer;

extern char D_800CC690[];   /* "EX" */
extern char D_800CC694[];   /* "audio/seqplayer.c" */

extern void func_802B6F50(ALSeq *, ALEvent *);                 /* alSeqNextEvent */
extern void func_802B5D64(ALSeqPlayer *, ALEvent *);           /* __handleMIDIMsg */
extern void func_802B6EBC(ALSeqPlayer *, ALEvent *);           /* __handleMetaMsg */
extern u8 func_802B73C4(ALSeq *, s32 *);                       /* __alSeqNextDelta (char; unsigned in this build) */
extern s32 func_802B7198(ALSeq *);                             /* alSeqGetTicks */
extern void func_802B738C(ALSeq *, ALSeqMarker *);             /* alSeqSetLoc */
extern void func_802B51A4(ALEventQueue *, ALEvent *, ALMicroTime);  /* alEvtqPostEvent */
extern void func_802BFD40(char *, char *, s32);                /* __assert */

static inline void postNextSeqEvent(ALSeqPlayer *seqp)
{
    ALEvent evt;
    s32 deltaTicks;
    ALSeq *seq = seqp->target;

    if ((seqp->state != 1) || (seq == 0))
        return;

    if (!func_802B73C4(seq, &deltaTicks))
        return;

    if (seqp->loopCount) {
        if (func_802B7198(seq) + deltaTicks >= seqp->loopEnd->curTicks) {
            func_802B738C(seq, seqp->loopStart);
            if (seqp->loopCount != -1)
                seqp->loopCount--;
        }
    }

    evt.type = 0;   /* AL_SEQ_REF_EVT */
    func_802B51A4(&seqp->evtq, &evt, deltaTicks * seqp->uspt);
}

void func_802B5B60(ALSeqPlayer *seqp)
{
    ALEvent evt;

    if (seqp->target == 0)
        return;

    func_802B6F50(seqp->target, &evt);

    switch (evt.type) {
    case 1:     /* AL_SEQ_MIDI_EVT */
        func_802B5D64(seqp, &evt);
        postNextSeqEvent(seqp);
        break;

    case 3:     /* AL_TEMPO_EVT */
        func_802B6EBC(seqp, &evt);
        postNextSeqEvent(seqp);
        break;

    case 4:     /* AL_SEQ_END_EVT */
        seqp->state = 2;
        evt.type = 16;  /* AL_SEQP_STOP_EVT */
        func_802B51A4(&seqp->evtq, &evt, 0x7fffffff);
        break;

    default:
        func_802BFD40(D_800CC690, D_800CC694, 412);
    }
}
