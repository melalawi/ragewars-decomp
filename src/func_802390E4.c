#include "basetypes.h"
typedef void (*FuncPtr)(void);

extern char D_800D05C0[];

typedef struct func_802390E4_S1 func_802390E4_S1;
struct func_802390E4_S1 {
    char pad0[0x14];
    s16 unk14;
    char pad14[0x18 - 0x14 - sizeof(s16)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s16 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s16)];
    s32 unk20;
};

void func_802390E4(void *arg0, s16 arg1) {
    FuncPtr fn;

    ((func_802390E4_S1 *)(arg0))->unk14 = arg1;
    ((func_802390E4_S1 *)(arg0))->unk18 = 0;
    ((func_802390E4_S1 *)(arg0))->unk1C = 0;
    ((func_802390E4_S1 *)(arg0))->unk20 = 0;
    fn = *(FuncPtr *)(D_800D05C0 + (((func_802390E4_S1 *)(arg0))->unk14 * 8));
    if (fn != 0) {
        fn();
    }
}
