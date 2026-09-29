#include "basetypes.h"

typedef struct func_8040E9A8_S1 func_8040E9A8_S1;
struct func_8040E9A8_S1 {
    char pad0[0x12];
    u16 unk12;
};

void func_8040E9A8(void *object, int enabled) {
    u16 *flags = &((func_8040E9A8_S1 *)(object))->unk12;
    if (enabled) {
        *flags |= 0x40;
    } else {
        *flags &= 0xFFBF;
    }
}
