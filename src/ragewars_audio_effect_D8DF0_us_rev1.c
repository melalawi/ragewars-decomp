#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8DF0..D8E18. */
struct EffectParameters_D8DF0 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[1];
};
struct EffectParameters_D8DF0 D_800D41C0 = {
    1, 800,
    {
        {0, 200, 0, 24575, 32767, 380, 500, 0},
    }
};
