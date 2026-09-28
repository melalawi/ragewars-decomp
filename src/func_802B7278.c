/* alSeqNewMarker, drafted from ultralib src/audio/seq.c: fill a marker with the sequence position
   of the first event at or after the given tick count (the track start for zero), stepping a
   scratch pass with alSeqNextEvent and restoring the sequence's own position afterwards. */
#include "basetypes.h"

typedef struct ALSeq_s {
    u8 *base;
    u8 *trackStart;
    u8 *curPtr;
    s32 lastTicks;
    s32 len;
    f32 qnpt;
    s16 division;
    s16 lastStatus;
} ALSeq;

typedef struct {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
} ALSeqMarker;

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

extern void func_802B6F50(ALSeq *, ALEvent *); /* alSeqNextEvent */

void func_802B7278(ALSeq *seq, ALSeqMarker *m, u32 ticks)
{
    ALEvent evt;
    u8 *savePtr, *lastPtr;
    s32 saveTicks, lastTicks;
    s16 saveStatus, lastStatus;

    if (ticks == 0) {
        m->curPtr = seq->trackStart;
        m->lastStatus = 0;
        m->lastTicks = 0;
        m->curTicks = 0;
        return;
    } else {
        savePtr = seq->curPtr;
        saveStatus = seq->lastStatus;
        saveTicks = seq->lastTicks;

        seq->curPtr = seq->trackStart;
        seq->lastStatus = 0;
        seq->lastTicks = 0;

        do {
            lastPtr = seq->curPtr;
            lastStatus = seq->lastStatus;
            lastTicks = seq->lastTicks;

            func_802B6F50(seq, &evt);

            if (evt.type == AL_SEQ_END_EVT) {
                lastPtr = seq->curPtr;
                lastStatus = seq->lastStatus;
                lastTicks = seq->lastTicks;
                break;
            }

        } while (seq->lastTicks < ticks);

        m->curPtr = lastPtr;
        m->lastStatus = lastStatus;
        m->lastTicks = lastTicks;
        m->curTicks = seq->lastTicks;

        seq->curPtr = savePtr;
        seq->lastStatus = saveStatus;
        seq->lastTicks = saveTicks;
    }
}
