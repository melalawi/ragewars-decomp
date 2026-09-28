#include "basetypes.h"

/* Loads a text into the block D_8014561C through func_804426E4 from the record's words at 0x1C and
   0x20: from the resource D_44F100 when D_80153780 is set, otherwise from the record's word at 0x24.
   Returns one. */
struct Record {
    char pad[0x1C];
    s32 first;
    s32 second;
    void *resource;
};

extern s32 D_80153780;
extern char D_8014561C[];
extern char D_44F100[];
extern void func_804426E4(void *, void *, s32, s32, s32);

s32 func_8040A708(void *unused, struct Record *record) {
    do {
        if (D_80153780 != 0) {
            func_804426E4(D_8014561C, D_44F100, record->first, record->second, 0);
        } else {
            func_804426E4(D_8014561C, record->resource, record->first, record->second, 0);
        }
    } while (0);
    return 1;
}
