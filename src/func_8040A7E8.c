#include "basetypes.h"

/* Points a field's text at D_800D77EC when D_80153730 is set, at D_800D77F4 when D_80153774 is set instead, and at
   D_800D77F0 otherwise. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153730;
extern s32 D_80153774;
extern char D_800D77EC[];
extern char D_800D77F4[];
extern char D_800D77F0[];

s32 func_8040A7E8(struct Field *field) {
    if (D_80153730 != 0) {
        field->text = D_800D77EC;
    } else if (D_80153774 != 0) {
        field->text = D_800D77F4;
    } else {
        field->text = D_800D77F0;
    }
    return 0;
}
