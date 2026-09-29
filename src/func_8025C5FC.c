#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern s32 func_802B76F0(void *arg0);
extern void func_802B8030(void *arg0);

typedef struct func_8025C5FC_S1 func_8025C5FC_S1;
struct func_8025C5FC_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x10 - 0x4 - sizeof(s32)];
    s32 unk10;
    char pad10[0x50 - 0x10 - sizeof(s32)];
    s32 unk50;
    char pad50[0xAC - 0x50 - sizeof(s32)];
    s32 unkAC;
    char padAC[0xB0 - 0xAC - sizeof(s32)];
    s32 unkB0;
};

void func_8025C5FC(void *arg0) {
    s32 a0;
    void *s1;

    a0 = ((func_8025C5FC_S1 *)(arg0))->unkB0;
    ((func_8025C5FC_S1 *)(arg0))->unkAC = 1;
    ((func_8025C5FC_S1 *)(arg0))->unk50 = 0;
    s1 = (void *)(a0 + 0x84);
    if (((func_8025C5FC_S1 *)(arg0))->unk10 != *(s32 *)(a0 + 0x104)) {
        s32 idx = *(s32 *)arg0;
        s32 addr = a0 + idx * 2;
        func_802B7FD0(s1, *(s16 *)(addr + 0xDC));
        if (func_802B76F0(s1) != 0) {
            func_802B8030(s1);
        }
        ((func_8025C5FC_S1 *)(arg0))->unk4 = -1;
    }
}
