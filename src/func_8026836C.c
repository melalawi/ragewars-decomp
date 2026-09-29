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

typedef struct Filter {
    u8 type;
    u8 pad[0x17B];
    s32 mask;
} Filter;

extern void func_80216288(void *, s32, Triple, s32);

typedef struct func_8026836C_S1 func_8026836C_S1;
struct func_8026836C_S1 {
    char pad0[0x1];
    s8 unk1;
};

void func_8026836C(void *arg0, Filter *arg1, s32 arg2, Triple arg3, Pair arg6) {
    switch (arg1->type) {
    case 0:
        if (((func_8026836C_S1 *)(arg0))->unk1 != arg6.y) {
            return;
        }
        break;
    case 1:
        if (!(arg1->mask & (arg1->type << arg6.y))) {
            return;
        }
        break;
    }
    func_80216288(arg0, arg6.x, arg3, 0);
}
