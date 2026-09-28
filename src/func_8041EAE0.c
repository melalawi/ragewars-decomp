#include "basetypes.h"

/* Resets the three 28-byte entries of D_80153F80: -1 in the first word and zero in the next
   three. */
struct Entry {
    s32 value;
    s32 a;
    s32 b;
    s32 c;
    char pad[28 - 16];
};

extern struct Entry D_80153F80[];

void func_8041EAE0(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        D_80153F80[i].value = -1;
        D_80153F80[i].a = 0;
        D_80153F80[i].b = 0;
        D_80153F80[i].c = 0;
    }
}
