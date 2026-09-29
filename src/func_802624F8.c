#include "basetypes.h"

extern int func_80253294(void *arg0);

typedef struct func_802624F8_S1 func_802624F8_S1;
struct func_802624F8_S1 {
    char pad0[0x10];
    void* unk10;
};

s32 func_802624F8(void *arg0) {
    void *temp = ((func_802624F8_S1 *)(arg0))->unk10;
    if (temp == 0) {
        return 0;
    }
    return func_80253294(temp) != 0;
}
