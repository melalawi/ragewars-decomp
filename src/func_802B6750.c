/* __lookupVoice, drafted from ultralib src/audio/seqplayer.c: walk the sequence player's allocated
   voice list for the voice playing a key on a channel that is not being released. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

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

typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice voice;
    void *sound;
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
    char pad[0x64];
    ALVoiceState *vAllocHead;
} ALSeqPlayer;

ALVoiceState *func_802B6750(ALSeqPlayer *seqp, u8 key, u8 channel)
{
    ALVoiceState *vs;

    for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
        if ((vs->key == key) && (vs->channel == channel) &&
            (vs->phase != 3) && (vs->phase != 4))
            return vs;
    }
    return 0;
}
