#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8DA0..D8DC8. */
struct EffectParameters_D8DA0 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[1];
};
struct EffectParameters_D8DA0 D_800D4170_de = {
    1, 8000,
    {
        {0, 7160, 12000, 0, 32767, 0, 0, 0},
    }
};
