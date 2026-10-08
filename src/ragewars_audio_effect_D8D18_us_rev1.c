#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8D18..D8DA0. */
struct EffectParameters_D8D18 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[4];
};
struct EffectParameters_D8D18 D_800D40E8 = {
    4, 4000,
    {
        {0, 2640, 9830, -9830, 0, 0, 0, 0},
        {880, 2160, 3276, -3276, 16383, 0, 0, 0},
        {2640, 3640, 3276, -3276, 16383, 0, 0, 0},
        {0, 3760, 8000, 0, 0, 0, 0, 20480},
    }
};
