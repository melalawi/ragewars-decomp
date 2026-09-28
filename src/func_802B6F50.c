/* alSeqNextEvent, drafted from ultralib src/audio/seq.c: read the next MIDI file event into an
   ALEvent, decoding tempo and end-of-track meta events and applying running status to channel
   events. */
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
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
} ALMIDIEvent;

typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
    u8 byte1;
    u8 byte2;
    u8 byte3;
} ALTempoEvent;

typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
} ALEndEvent;

typedef struct {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALTempoEvent tempo;
        ALEndEvent end;
    } msg;
} ALEvent;

#define AL_SEQ_MIDI_EVT 1
#define AL_TEMPO_EVT 3
#define AL_SEQ_END_EVT 4
#define AL_MIDI_ProgramChange 0xC0
#define AL_MIDI_ChannelPressure 0xD0
#define AL_MIDI_Meta 0xFF
#define AL_MIDI_META_TEMPO 0x51
#define AL_MIDI_META_EOT 0x2F

extern s32 func_802B742C(ALSeq *); /* readVarLen */
extern u8 func_802B7480(ALSeq *);  /* read8 */

void func_802B6F50(ALSeq *seq, ALEvent *event)
{
    u8 status;
    s32 deltaTicks;

    deltaTicks = func_802B742C(seq);
    seq->lastTicks += deltaTicks;
    status = func_802B7480(seq);

    if (status == AL_MIDI_Meta) {
        u8 type = func_802B7480(seq);

        if (type == AL_MIDI_META_TEMPO) {
            event->type = AL_TEMPO_EVT;
            event->msg.tempo.ticks = deltaTicks;
            event->msg.tempo.status = status;
            event->msg.tempo.type = type;
            event->msg.tempo.len = func_802B7480(seq);
            event->msg.tempo.byte1 = func_802B7480(seq);
            event->msg.tempo.byte2 = func_802B7480(seq);
            event->msg.tempo.byte3 = func_802B7480(seq);
        } else if (type == AL_MIDI_META_EOT) {
            event->type = AL_SEQ_END_EVT;
            event->msg.end.ticks = deltaTicks;
            event->msg.end.status = status;
            event->msg.end.type = type;
            event->msg.end.len = func_802B7480(seq);
        }

        seq->lastStatus = 0;

    } else {
        event->type = AL_SEQ_MIDI_EVT;
        event->msg.midi.ticks = deltaTicks;
        if (status & 0x80) {
            event->msg.midi.status = status;
            event->msg.midi.byte1 = func_802B7480(seq);
            seq->lastStatus = status;
        } else {
            event->msg.midi.status = seq->lastStatus;
            event->msg.midi.byte1 = status;
        }

        if (((event->msg.midi.status & 0xf0) != AL_MIDI_ProgramChange) &&
            ((event->msg.midi.status & 0xf0) != AL_MIDI_ChannelPressure)) {
            event->msg.midi.byte2 = func_802B7480(seq);
        } else {
            event->msg.midi.byte2 = 0;
        }
    }
}
