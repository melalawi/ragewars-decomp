#include "basetypes.h"

typedef struct {
    char unknown00[0xE];
    s16 count;
    u32 entries[1];
} SortTable;

/** Sort the table's word entries into ascending unsigned order. */
void func_80258F8C(SortTable *table) {
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
