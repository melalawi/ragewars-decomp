#include "basetypes.h"

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef void (*Callback)(void *, void *, s32, Triple, Pair);

typedef struct CallbackEntry {
    Callback callback;
    s32 unused;
} CallbackEntry;

extern CallbackEntry D_800D1380[];

void func_80267214(void *arg0, void *arg1, s32 arg2, Triple arg3, Pair arg6) {
    if (D_800D1380[arg2].callback != 0) {
        D_800D1380[arg2].callback(arg0, arg1, arg2, arg3, arg6);
    }
}
