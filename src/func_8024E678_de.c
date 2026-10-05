#include "span_1000/code_8024E130.h"



/** Select one of two float fields according to the leading byte. */
float func_8024E678_de(void *object) {
    if (*(unsigned char *)object != 1) {
        return ((func_8024E668_S1 *)(object))->unkC;
    }
    return ((func_8024E668_S1 *)(object))->unk40;
}
