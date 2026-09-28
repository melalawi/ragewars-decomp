#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

void func_80212450(void *arg0) {
    void *level1 = *(void **) ((char *) arg0 + 0x1D8);
    void *inner = *(void **) ((char *) level1 + 0x1454);
    s32 r1, r2, r3;

    *(s32 *) ((char *) inner + 0x220) = 0;
    func_80209988(inner);

    r1 = func_80274544();
    *(s32 *) ((char *) inner + 0x2D8) = r1 % 4 + 0xC;

    r2 = func_80274544();
    *(s32 *) ((char *) inner + 0x2DC) = r2 % 2;

    r3 = func_80274544();
    *(s32 *) ((char *) inner + 0x320) = -1;
    *(s32 *) ((char *) inner + 0x318) = 0;
    *(s32 *) ((char *) inner + 0x31C) = 0;
    *(s32 *) ((char *) inner + 0x2E0) = r3 % 250000 + 360000;
}
