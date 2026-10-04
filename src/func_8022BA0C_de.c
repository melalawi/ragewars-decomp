#include "span_1000/code_8022B500.h"
#include "types.h"







/** Return the linked record with the greatest eight-slot score excluding itself. */
void *func_8022BA0C_de(Context *context) {
    Record_func_8022BA0C_de *node;
    Record_func_8022BA0C_de *base;
    Record_func_8022BA0C_de *bestNode = 0;
    int best = -1;

    node = context->head;
    if (node != 0) {
        base = context->base;
        do {
            unsigned int own = (unsigned int)((u8 *)node - (u8 *)base) / sizeof(Record_func_8022BA0C_de);
            int score = 0;
            int i;
            for (i = 0; i < 8; i++) {
                if (i == own) {
                    continue;
                }
                score += node->scores->value[i];
                if (best < score) {
                    best = score;
                    bestNode = node;
                }
            }
            node = node->next;
        } while (node != 0);
    }
    return bestNode;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5FD8_1C[] = {0x002A8D04U, 0x002A8D14U, 0x002A8D44U, 0x002A8D24U, 0x002A8D34U, 0x002A8D34U, 0x002A8D44U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB258_1C[] = {0x002A9DC4U, 0x002A9DD4U, 0x002A9E04U, 0x002A9DE4U, 0x002A9DF4U, 0x002A9DF4U, 0x002A9E04U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C6098_4 = 3.125f;
const float unbake_rodata_800C609C_4 = 32.0f;
const float unbake_rodata_800C60A0_4 = 1.0f;
const float unbake_rodata_800C60A4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6098_4 = 1.69014084f;
const float unbake_rodata_800C609C_4 = 1.62162161f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C5FD8_1C[] = {0x002A8B64U, 0x002A8C90U, 0x002A8CC8U, 0x002A8D00U, 0x002A8D38U, 0x002A8D6CU, 0x002A8DA0U};
#endif
