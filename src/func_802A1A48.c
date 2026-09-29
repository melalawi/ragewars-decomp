#include "basetypes.h"

extern void func_802BFD50(void *arg0, void *arg1, s32 arg2);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

typedef struct func_802A1A48_S1 func_802A1A48_S1;
struct func_802A1A48_S1 {
    char pad0[0x18];
    char unk18;
};

void func_802A1A48(void *arg0) {
    func_802BFD50(arg0, &((func_802A1A48_S1 *)(arg0))->unk18, 1);
    func_802C0510(arg0, 1, 1);
}
