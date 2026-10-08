#include "types.h"

/* Six signed arguments transported to the native VI setup call.
 * Actual mode stride28; the seventh word remains extraction. */
typedef struct RwVideoArguments { s32 width, height; s32 horizontalOffset, verticalOffset; s32 horizontalInset, verticalInset; } RwVideoArguments;
RwVideoArguments rw_video_arguments_r1_m2_E35BC_us_rev1 = {480, 240, 26, 30, -45, -50};
