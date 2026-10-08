#include "resident_audio_effect_config.h"

/* Selected by the effect type in 802B3F10.
 * ROM D8CB0..D8D18. */
struct EffectParameters_D8CB0 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[3];
};
struct EffectParameters_D8CB0 D_800D4080 = {
    3, 4000,
    {
        {0, 2160, 9830, -9830, 0, 0, 0, 0},
        {760, 1520, 3276, -3276, 16383, 0, 0, 0},
        {0, 2400, 5000, 0, 0, 0, 0, 20480},
    }
};
