#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "types.h"

/* Pops the front of a four-entry queue at offset 0x14 of a record: shifts the entries down one,
   marks the last empty with -1 and returns whether an entry remains at the front. */


s32 func_80209828_de(struct Queue *queue) {
    s32 i;

    for (i = 1; i < 4; i++) {
        queue->items[i - 1] = queue->items[i];
    }
    queue->items[3] = -1;
    return queue->items[0] != -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C321C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C82E8_4 = 0.5f;
const float unbake_rodata_800C82EC_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3274_4 = 1.0f;
const float unbake_rodata_800C3278_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C32AC_4 = 1.0f;
const float unbake_rodata_800C32B0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C31F8_4 = 0.5f;
const float unbake_rodata_800C31FC_4 = 0.5f;
#endif
