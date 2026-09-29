/** Scales the floats at 0x6C0 and 0x6C4 of the first object and the float at 0x20 of the second by D_800C7E90. */
#include "basetypes.h"

extern f32 D_800C7E90;

typedef struct func_8022D000_S1 func_8022D000_S1;
typedef struct func_8022D000_S2 func_8022D000_S2;
struct func_8022D000_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
};
struct func_8022D000_S2 {
    char pad0[0x20];
    f32 unk20;
};

void func_8022D000(void *arg0, void *arg1) {
    ((func_8022D000_S1 *)(arg0))->unk6C0 = ((func_8022D000_S1 *)(arg0))->unk6C0 * (D_800C7E90);
    ((func_8022D000_S1 *)(arg0))->unk6C4 = ((func_8022D000_S1 *)(arg0))->unk6C4 * (D_800C7E90);
    ((func_8022D000_S2 *)(arg1))->unk20 = ((func_8022D000_S2 *)(arg1))->unk20 * (D_800C7E90);
}
