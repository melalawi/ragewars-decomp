#include "types.h"

/* Six signed arguments transported to the native VI setup call.
 * Actual mode stride28; the seventh word remains extraction. */
typedef struct RwVideoArguments { s32 width, height; s32 horizontalOffset, verticalOffset; s32 horizontalInset, verticalInset; } RwVideoArguments;
RwVideoArguments rw_video_arguments_r1_m1_E35A0_us_rev1 = {480, 360, 25, 55, -47, -60};
