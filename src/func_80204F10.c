#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern s32 D_8011FE88;
extern void func_802671B0(void *, void *, s32, Triple, Pair);
extern void func_80285D80(void *, void *, s32);

/** Submit an object's three-word record, then attach it to the global owner. */
void func_80204F10(void *arg0) {
    Pair pair;

    pair.a = 0;
    func_802671B0(arg0, arg0, 7, *(Triple *)((char *)arg0 + 8), pair);
    func_80285D80(&D_8011FE88, arg0, 0);
}
