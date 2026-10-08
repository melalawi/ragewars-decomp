#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8E18..D8E40. */
struct EffectParameters_D8E18 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[1];
};
struct EffectParameters_D8E18 D_800D41E8 = {
    0, 0,
    {
        {0, 0, 0, 0, 0, 0, 0, 0},
    }
};
