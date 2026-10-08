#include "types.h"

/* Six signed arguments transported to the native VI setup call.
 * Actual mode stride28; the seventh word remains extraction. */
typedef struct RwVideoArguments { s32 width, height; s32 horizontalOffset, verticalOffset; s32 horizontalInset, verticalInset; } RwVideoArguments;
RwVideoArguments rw_video_arguments_r0_m2_E3530_us_rev1 = {480, 240, 27, 14, -45, -30};
