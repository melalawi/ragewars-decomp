#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80207ABC.h"
#include "types.h"
#include "audio_callbacks.h"
#include "common/draft_fields_func_80207FE4_de.h"

/** Set the fixed flags on the supplied object and word. */
void func_80207FC4_de(char *object, unsigned int *flags) {
    *flags |= 0x20000;
    ((func_80207F90_S1 *)(object))->unk100 |= 0x2100;
}

              /* size 0x0 */

s32 func_80207FE4_de(void *arg0) {
    s32 temp_v0;

    temp_v0 = ((struct Measured_func_80207FE4_de_ab1946e3a565 *)(arg0))->value & ~0x2000;
    ((struct Measured_func_80207FE4_de_ab1946e3a565 *)(arg0))->value = temp_v0;
    return temp_v0;
}
