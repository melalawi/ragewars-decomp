/* alCSeqNewMarker, drafted from ultralib src/audio/cseq.c: fill a compressed-sequence marker
   with the track state of the first event at or after the given tick count, stepping a scratch
   copy of the sequence. The -O3 library inlined alCSeqNew and alCSeqNextEvent into it; they are
   static inline helpers here, with alCSeqNew's u32-to-float conversion written out against the
   cartridge constants and each deltaFlag store made through a pointer local, as the library's
   -fforce-addr kept it frame-relative. */
#include "basetypes.h"

typedef struct {
    u32 trackOffset[16];
    u32 division;
} ALCMidiHdr;

typedef struct ALCSeq_s {
    ALCMidiHdr *base;
    u32 validTracks;
    f32 qnpt;
    u32 lastTicks;
    u32 lastDeltaTicks;
    u32 deltaFlag;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeq;

typedef struct {
    u32 validTracks;
    s32 lastTicks;
    u32 lastDeltaTicks;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeqMarker;

typedef struct {
    s16 type;
    union {
        struct {
            s32 ticks;
            u8 status;
            u8 byte1;
            u8 byte2;
            u32 duration;
        } midi;
    } msg;
} ALEvent;

#define AL_SEQ_END_EVT 4
#define AL_TRACK_END 0x12

extern u32 func_802B3AFC(ALCSeq *, u32);             /* __readVarLen */
extern u32 func_802B3100(ALCSeq *, u32, ALEvent *);  /* __alCSeqGetTrackEvent */

extern const double D_800CC540; /* 4294967296.0 */
extern const float D_800CC548;  /* 1.0f */

static inline void alCSeqNew(ALCSeq *seq, u8 *ptr)
{
    u32 i, tmpOff, flagTmp;
    f64 t;
    s32 division;
    u32 *deltaFlag;

    seq->base = (ALCMidiHdr *)ptr;
    seq->validTracks = 0;
    seq->lastDeltaTicks = 0;
    seq->lastTicks = 0;
    deltaFlag = &seq->deltaFlag;
    *deltaFlag = 1;

    for (i = 0; i < 16; i++) {
        seq->lastStatus[i] = 0;
        seq->curBUPtr[i] = 0;
        seq->curBULen[i] = 0;
        tmpOff = seq->base->trackOffset[i];
        if (tmpOff) {
            flagTmp = 1 << i;
            seq->validTracks |= flagTmp;
            seq->curLoc[i] = (u8 *)((u32)ptr + tmpOff);
            seq->evtDeltaTicks[i] = func_802B3AFC(seq, i);
        } else
            seq->curLoc[i] = 0;
    }

    division = seq->base->division;
    t = (f64)division;
    if (division < 0) {
        t += D_800CC540;
    }
    seq->qnpt = D_800CC548 / (f32)t;
}

static inline void alCSeqNextEvent(ALCSeq *seq, ALEvent *evt)
{
    u32 i;
    u32 firstTime = 0xFFFFFFFF;
    u32 firstTrack;
    u32 lastTicks = seq->lastDeltaTicks;
    u32 *deltaFlag;

    for (i = 0; i < 16; i++) {
        if ((seq->validTracks >> i) & 1) {
            if (seq->deltaFlag)
                seq->evtDeltaTicks[i] -= lastTicks;
            if (seq->evtDeltaTicks[i] < firstTime) {
                firstTime = seq->evtDeltaTicks[i];
                firstTrack = i;
            }
        }
    }

    func_802B3100(seq, firstTrack, evt);

    evt->msg.midi.ticks = firstTime;
    seq->lastTicks += firstTime;
    seq->lastDeltaTicks = firstTime;
    if (evt->type != AL_TRACK_END)
        seq->evtDeltaTicks[firstTrack] += func_802B3AFC(seq, firstTrack);
    deltaFlag = &seq->deltaFlag;
    *deltaFlag = 1;
}

void func_802B3360(ALCSeq *seq, ALCSeqMarker *m, u32 ticks)
{
    ALEvent evt;
    ALCSeq tempSeq;
    s32 i;

    alCSeqNew(&tempSeq, (u8 *)seq->base);

    do {
        m->validTracks = tempSeq.validTracks;
        m->lastTicks = tempSeq.lastTicks;
        m->lastDeltaTicks = tempSeq.lastDeltaTicks;

        for (i = 0; i < 16; i++) {
            m->curLoc[i] = tempSeq.curLoc[i];
            m->curBUPtr[i] = tempSeq.curBUPtr[i];
            m->curBULen[i] = tempSeq.curBULen[i];
            m->lastStatus[i] = tempSeq.lastStatus[i];
            m->evtDeltaTicks[i] = tempSeq.evtDeltaTicks[i];
        }

        alCSeqNextEvent(&tempSeq, &evt);

        if (evt.type == AL_SEQ_END_EVT)
            break;

    } while (tempSeq.lastTicks < ticks);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7210_8 = 4294967296.0;
const float unbake_rodata_800C7218_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC540_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C7EE0_8 = 4294967296.0;
const float unbake_rodata_800C7EE8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C88B0_8 = 4294967296.0;
const float unbake_rodata_800C88B8_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C72F0_8 = 4294967296.0;
const float unbake_rodata_800C72F8_4 = 1.0f;
#endif
