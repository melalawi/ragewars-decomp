#include "basetypes.h"

extern void func_80276308(void *arg0, u16 arg1);

typedef struct func_80276228_S1 func_80276228_S1;
struct func_80276228_S1 {
    char pad0[0x2];
    u16 unk2;
};

void func_80276228(void *arg0) {
    if ((arg0 != 0) && (((func_80276228_S1 *)(arg0))->unk2 & 2)) {
        func_80276308(arg0, *(u16 *)arg0);
    }
}
