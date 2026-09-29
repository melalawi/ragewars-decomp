#include "basetypes.h"

typedef struct func_8022D24C_S1 func_8022D24C_S1;
struct func_8022D24C_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x11D8 - 0x100 - sizeof(s32)];
    s32 unk11D8;
    char pad11D8[0x11FC - 0x11D8 - sizeof(s32)];
    s32 unk11FC;
};

/** Reset two object fields and replace the control word's mode bit. */
void func_8022D24C(void *arg0) {
    ((func_8022D24C_S1 *)(arg0))->unk100 &= 0xFF7FFFFF;
    ((func_8022D24C_S1 *)(arg0))->unk11D8 = 0;
    ((func_8022D24C_S1 *)(arg0))->unk11FC = 0;
    ((func_8022D24C_S1 *)(arg0))->unk100 |= 0x01000000;
}
