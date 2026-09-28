#include "basetypes.h"

/* Points a field's text at D_800D7810 when D_80153730 is set, at D_800D7818 when D_80153774 is set instead, and at
   D_800D7814 otherwise. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153730;
extern s32 D_80153774;
extern char D_800D7810[];
extern char D_800D7818[];
extern char D_800D7814[];

s32 func_8040AA78(struct Field *field) {
    if (D_80153730 != 0) {
        field->text = D_800D7810;
    } else if (D_80153774 != 0) {
        field->text = D_800D7818;
    } else {
        field->text = D_800D7814;
    }
    return 0;
}
