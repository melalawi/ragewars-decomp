#include "common/types.h"
#include "span_1000/code_802B6958.h"
#include "types.h"
/* alSeqNextEvent, drafted from ultralib src/audio/seq.c: read the next MIDI file event into an
   ALEvent, decoding tempo and end-of-track meta events and applying running status to channel
   events. */











#define AL_SEQ_MIDI_EVT 1
#define AL_TEMPO_EVT 3
#define AL_SEQ_END_EVT 4
#define AL_MIDI_ProgramChange 0xC0
#define AL_MIDI_ChannelPressure 0xD0
#define AL_MIDI_Meta 0xFF
#define AL_MIDI_META_TEMPO 0x51
#define AL_MIDI_META_EOT 0x2F

extern s32 func_802B235C_de(ALSeq_s *); /* readVarLen */
extern u8 func_802B23B0_de(ALSeq_s *);  /* read8 */

void func_802B1E80_de(ALSeq_s *seq, ALEvent *event)
{
    u8 status;
    s32 deltaTicks;

    deltaTicks = func_802B235C_de(seq);
    seq->lastTicks += deltaTicks;
    status = func_802B23B0_de(seq);

    if (status == AL_MIDI_Meta) {
        u8 type = func_802B23B0_de(seq);

        if (type == AL_MIDI_META_TEMPO) {
            event->type = AL_TEMPO_EVT;
            event->msg.tempo.ticks = deltaTicks;
            event->msg.tempo.status = status;
            event->msg.tempo.type = type;
            event->msg.tempo.len = func_802B23B0_de(seq);
            event->msg.tempo.byte1 = func_802B23B0_de(seq);
            event->msg.tempo.byte2 = func_802B23B0_de(seq);
            event->msg.tempo.byte3 = func_802B23B0_de(seq);
        } else if (type == AL_MIDI_META_EOT) {
            event->type = AL_SEQ_END_EVT;
            event->msg.end.ticks = deltaTicks;
            event->msg.end.status = status;
            event->msg.end.type = type;
            event->msg.end.len = func_802B23B0_de(seq);
        }

        seq->lastStatus = 0;

    } else {
        event->type = AL_SEQ_MIDI_EVT;
        event->msg.midi.ticks = deltaTicks;
        if (status & 0x80) {
            event->msg.midi.status = status;
            event->msg.midi.byte1 = func_802B23B0_de(seq);
            seq->lastStatus = status;
        } else {
            event->msg.midi.status = seq->lastStatus;
            event->msg.midi.byte1 = status;
        }

        if (((event->msg.midi.status & 0xf0) != AL_MIDI_ProgramChange) &&
            ((event->msg.midi.status & 0xf0) != AL_MIDI_ChannelPressure)) {
            event->msg.midi.byte2 = func_802B23B0_de(seq);
        } else {
            event->msg.midi.byte2 = 0;
        }
    }
}
