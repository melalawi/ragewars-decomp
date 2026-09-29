#include "basetypes.h"

extern char D_8013BA80;
extern char D_8013B1A8;

extern void func_8028414C(void);
extern void func_802A52E4(void *arg0, void *arg1);
extern void func_80268C7C(void *arg0, s32 arg1);

typedef struct func_802839F0_S1 func_802839F0_S1;
struct func_802839F0_S1 {
    char pad0[0x138];
    s32 unk138;
    char pad138[0x1D9 - 0x138 - sizeof(s32)];
    u8 unk1D9;
};

void func_802839F0(void *arg0) {
    s32 temp;

    if (((func_802839F0_S1 *)(arg0))->unk1D9 != 0) {
        func_8028414C();
        func_802A52E4(&D_8013BA80, arg0);
    }
    temp = ((func_802839F0_S1 *)(arg0))->unk138;
    if (temp != 0) {
        func_80268C7C(&D_8013B1A8, temp);
        ((func_802839F0_S1 *)(arg0))->unk138 = 0;
    }
}
