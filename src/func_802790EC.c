#include "basetypes.h"

extern void func_8025E13C(s32 arg0);
extern void func_8025E2F4(s32 arg0);

typedef struct func_802790EC_S1 func_802790EC_S1;
struct func_802790EC_S1 {
    char pad0[0x6];
    u16 unk6;
};

void func_802790EC(s32 arg0, s32 arg1, void *arg2) {
    if (((func_802790EC_S1 *)(arg2))->unk6 >= 0x100) {
        func_8025E13C(((func_802790EC_S1 *)(arg2))->unk6);
        return;
    }
    func_8025E2F4(((func_802790EC_S1 *)(arg2))->unk6);
}
