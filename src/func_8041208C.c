#include "basetypes.h"

/* A stride of 1180 bytes. The debugger showed the global holding 0x80696F50 and the two observed
   indices, 0 and 1, returning 0x80696F50 and 0x806973EC, which differ by exactly 1180. */
typedef struct Element {
    char unk_0[1180];
} Element;

extern Element *D_80153C28;

Element *func_8041208C(s32 index) {
    return &D_80153C28[index];
}
