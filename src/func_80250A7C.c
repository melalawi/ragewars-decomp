#include "basetypes.h"

extern s32 D_800D2640;
extern u8 D_800D297B;
extern void func_80253F2C(s32 arg0, s32 arg1);

typedef struct func_80250A7C_S1 func_80250A7C_S1;
struct func_80250A7C_S1 {
    char pad0[0xD0];
    s32 unkD0;
    char padD0[0xD8 - 0xD0 - sizeof(s32)];
    u16 unkD8;
    char padD8[0xDA - 0xD8 - sizeof(u16)];
    u8 unkDA;
};

void func_80250A7C(void *arg0) {
    if (!(((func_80250A7C_S1 *)(arg0))->unkD8 & 0x40) && (((func_80250A7C_S1 *)(arg0))->unkDA != D_800D297B)) {
        func_80253F2C(0, ((func_80250A7C_S1 *)(arg0))->unkD0 | D_800D2640);
    }
}
