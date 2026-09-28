#include "basetypes.h"

/* The debugger showed this global holding 0x80698160, a heap address rather than a static one,
   so it is a pointer variable and not an array base. The returned words were 0x8069A52F and
   0x8069A673, which are guest addresses that are not word aligned, so the element type is a
   pointer to bytes. */
extern char **D_80153C3C;

char *func_80411DF8(s32 index) {
    return D_80153C3C[index];
}
