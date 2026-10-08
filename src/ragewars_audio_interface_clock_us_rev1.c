#include "types.h"

/* 802B72E0 converts this integer clock rate with cvt.s.w, divides it
 * by the requested sample rate, then programs the AI DAC registers.
 * 802BAE40 can replace it from the cartridge clock setting.
 * ROM D9E80..D9E84; neighboring raw words retain their ownership. */
u32 D_800D5250 = 48681812U;
