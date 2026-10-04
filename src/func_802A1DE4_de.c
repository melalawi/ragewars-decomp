#include "span_1000/code_802A26F8.h"





/** Reset the object state and mark non-type-eight linked records. */
int func_802A1DE4_de(char *object) {
    char *record = ((func_802A2DE4_S1 *)(object))->unk8;
    ((func_802A2DE4_S1 *)(object))->unk5C = 2;
    ((func_802A2DE4_S1 *)(object))->unk48 = 0;
    while (record != 0) {
        if (((func_802A2DE4_S2 *)(record))->unkE != 8) {
            ((func_802A2DE4_S2 *)(record))->unk10 = 100;
        }
        record = ((func_802A2DE4_S2 *)(record))->unk4;
    }
    return 0;
}
