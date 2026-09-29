#include "basetypes.h"

extern void func_80218464();

typedef struct func_8022D9F4_S1 func_8022D9F4_S1;
struct func_8022D9F4_S1 {
    char pad0[0x11B4];
    s32 unk11B4;
};

void func_8022D9F4(void *arg0) {
    func_80218464((char *)arg0 + 0x938);
    ((func_8022D9F4_S1 *)(arg0))->unk11B4 = 0;
}
