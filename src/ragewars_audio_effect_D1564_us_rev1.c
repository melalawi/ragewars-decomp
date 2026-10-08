#include "resident_audio_effect_config.h"

/* Custom six-delay audio effect supplied by 80257360 to the synthesizer.
 * ROM D1564..D162C. */
struct EffectParameters_D1564 {
    s32 delayCount;
    s32 delaySamples;
    ResidentAudioDelayParameters delays[6];
};
struct EffectParameters_D1564 D_800CB724 = {
    6, 4800,
    {
        {160, 944, 9830, -9830, 2815, 0, 0, 16383},
        {416, 768, 13107, -13107, 0, 0, 0, 0},
        {784, 912, 19660, -19660, 0, 0, 0, 0},
        {1664, 2864, 13107, -13107, 2719, 0, 0, 16383},
        {1984, 2496, 14107, -14107, 0, 0, 0, 0},
        {64, 4592, 19384, 0, 20479, 0, 0, 21759},
    }
};
