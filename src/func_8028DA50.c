#include "basetypes.h"

extern void func_802537D8(void *, void *);

typedef struct func_8028DA50_S1 func_8028DA50_S1;
struct func_8028DA50_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
};

void func_8028DA50(void *arg0) {
    s32 temp;

    temp = ((func_8028DA50_S1 *)(arg0))->unk14;
    if (temp != 0) {
        func_802537D8(0, temp);
        ((func_8028DA50_S1 *)(arg0))->unk14 = 0;
        ((func_8028DA50_S1 *)(arg0))->unk18 = -1;
    }
}
