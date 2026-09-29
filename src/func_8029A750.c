#include "basetypes.h"

extern void *func_80299170(void);

typedef struct func_8029A750_S1 func_8029A750_S1;
struct func_8029A750_S1 {
    char pad0[0x40];
    s32 unk40;
};

void func_8029A750(s32 arg0, s32 arg1) {
    ((func_8029A750_S1 *)(func_80299170()))->unk40 = arg1;
}
