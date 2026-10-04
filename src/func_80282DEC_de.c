#include "span_1000/code_8027ED40.h"
#include "span_1000/types.h"
#include "types.h"

/* Returns whether any of the 22 records in D_800D052C holds, in either of its two three-entry lists, an entry of kind 2 whose id matches the given object's id. Adapted from func_80282C8C_de with the entry kind changed from 1 to 2. */







extern Record_func_80282C8C_de *D_800CB2EC[];

s32 func_80282DEC_de(func_8022BC04_S2 *obj) {
    s32 i;
    s32 j;
    Entry_func_80282C8C_de *entry;

    for (i = 0; i < 22; i++) {
        for (j = 0; j < 3; j++) {
            entry = D_800CB2EC[i]->first[j];
            if (entry != 0 && entry->id == obj->unk4 && entry->kind == 2) {
                return 1;
            }
            entry = D_800CB2EC[i]->second[j];
            if (entry != 0 && entry->id == obj->unk4 && entry->kind == 2) {
                return 1;
            }
        }
    }
    return 0;
}
