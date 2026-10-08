#include "types.h"

/* Six signed arguments transported to the native VI setup call.
 * Actual mode stride28; the seventh word remains extraction. */
typedef struct RwVideoArguments { s32 width, height; s32 horizontalOffset, verticalOffset; s32 horizontalInset, verticalInset; } RwVideoArguments;
RwVideoArguments rw_video_arguments_r0_m0_E34F8_us_rev1 = {284, 222, 97, 62, -127, -89};
