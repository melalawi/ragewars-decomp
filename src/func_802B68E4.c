/* __vsVol, drafted from ultralib src/audio/seqplayer.c: combine a voice's tremolo, velocity and
   envelope gain with its sound's sample volume, the player volume and the channel volume. */
#include "basetypes.h"

typedef struct {
    void *envelope;
    void *keyMap;
    void *wavetable;
    u8 samplePan;
    u8 sampleVolume;
    u8 flags;
} ALSound;

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

typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    char voice[0x1C];
    ALSound *sound;
    s32 envEndTime;
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
    char pad0[0x32];
    s16 vol;
    char pad1[0x60 - 0x34];
    ALChanState *chanState;
} ALSeqPlayer;

s16 func_802B68E4(ALVoiceState *vs, ALSeqPlayer *seqp)
{
    u32 t1, t2;

    t1 = (vs->tremelo * vs->velocity * vs->envGain) >> 6;
    t2 = (vs->sound->sampleVolume * seqp->vol *
          seqp->chanState[vs->channel].vol) >> 14;

    t1 *= t2;
    t1 >>= 15;

    return (s16)t1;
}
