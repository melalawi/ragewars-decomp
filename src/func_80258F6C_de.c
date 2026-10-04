#include "span_1000/code_80258760.h"
#include "types.h"



/** Sort the table's word entries into ascending unsigned order. */
void func_80258F6C_de(SortTable *table) {
    int i;
    int j;
    u32 right;
    u32 left;

    for (i = 0; i < table->count; i++) {
        for (j = i + 1; j < table->count; j++) {
            right = table->entries[j];
            left = table->entries[i];
            if (right < left) {
                table->entries[i] = right;
                table->entries[j] = left;
            }
        }
    }
}
