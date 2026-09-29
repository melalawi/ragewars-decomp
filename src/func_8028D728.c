#include "basetypes.h"

typedef struct func_8028D728_S1 func_8028D728_S1;
typedef struct func_8028D728_S2 func_8028D728_S2;
struct func_8028D728_S1 {
    char pad0[0x100];
    u32 unk100;
};
struct func_8028D728_S2 {
    char pad0[0x138];
    void* unk138;
    char pad138[0x140 - 0x138 - sizeof(void*)];
    u32 unk140;
};

s32 func_8028D728(void *arg0, void *arg1) {
    void *base;

    if (((func_8028D728_S1 *)(arg1))->unk100 & 0x80000) {
        return -1;
    }
    base = ((func_8028D728_S2 *)(arg0))->unk138;
    if (arg1 >= base &&
        (char *)arg1 <= (char *)base + (((func_8028D728_S2 *)(arg0))->unk140 * 0x2E8 - 0x2E8)) {
        return ((u32)arg1 - (u32)base) / 0x2E8;
    }
    return -1;
}
