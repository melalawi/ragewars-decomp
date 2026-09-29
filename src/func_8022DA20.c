#include "basetypes.h"

extern void func_80225F20(void);
extern void func_802227D0(void *arg0, void *arg1, int arg2);

typedef struct func_8022DA20_S1 func_8022DA20_S1;
struct func_8022DA20_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
};

void func_8022DA20(void *arg0, void *arg1) {
    void *a0 = arg0;
    void *a1 = arg1;

    func_80225F20();
    if (((func_8022DA20_S1 *)(a0))->unk6C0 != 0.0f) {
        func_802227D0(a0, a1, 0x25);
    }
}
