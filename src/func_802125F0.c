#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

void func_802125F0(void *arg0) {
    void *level1 = *(void **)((char *)arg0 + 0x1D8);
    void *inner = *(void **)((char *)level1 + 0x1454);
    s32 r1, r2;

    *(s32 *)((char *)inner + 0x220) = 0;
    func_80209988(inner);

    r1 = func_80274544();
    *(s32 *)((char *)inner + 0x2D8) = r1 % 4 + 0xC;

    r2 = func_80274544();
    *(s32 *)((char *)inner + 0x2DC) = r2 % 2;
}
