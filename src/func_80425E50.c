/* Looks up the record keyed by key in the table set D_8011FE88 and copies its trial preset at row and
   column into the shared result buffer D_80153FE0, returning the buffer, or null when there is no such
   record. */
#include "basetypes.h"

#define PRESETS_PER_ROW 20

typedef struct {
    u8 bytes[0x2A];
} Preset;

typedef struct {
    Preset presets[PRESETS_PER_ROW];
} PresetRow;

typedef struct {
    char pad0[0x16];
    PresetRow rows[1];
} PresetTable;

extern char D_8011FE88[];
extern Preset D_80153FE0;
extern PresetTable *func_8028D450(void *table, s32 key);
extern void *func_802C2490(void *destination, const void *source, int count);

Preset *func_80425E50(s32 key, s32 row, s32 column) {
    PresetTable *table;

    table = func_8028D450(D_8011FE88, key);
    if (table == 0) {
        return 0;
    }
    func_802C2490(&D_80153FE0, &table->rows[row].presets[column], sizeof(Preset));
    return &D_80153FE0;
}
