#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8DC8..D8DF0. */
struct EffectParameters_D8DC8 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[1];
};
struct EffectParameters_D8DC8 D_800D4198 = {
    1, 800,
    {
        {0, 200, 16384, 0, 32767, 7600, 700, 0},
    }
};
