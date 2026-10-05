#include "types.h"
#include "audio_callbacks.h"
#include "span_1000/code_80207ABC.h"
#include "common/draft_fields_func_80207FE4_de.h"



              /* size 0x0 */

s32 func_80207FE4_de(void *arg0) {
    s32 temp_v0;

    temp_v0 = ((struct Measured_func_80207FE4_de_ab1946e3a565 *)(arg0))->value & ~0x2000;
    ((struct Measured_func_80207FE4_de_ab1946e3a565 *)(arg0))->value = temp_v0;
    return temp_v0;
}
