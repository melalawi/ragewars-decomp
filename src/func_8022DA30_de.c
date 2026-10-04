#include "span_1000/code_8022D7A0.h"
#include "types.h"

extern void func_80225F44_de(void);
extern void func_802227F4_de(void *arg0, void *arg1, int arg2);




void func_8022DA30_de(void *arg0, void *arg1) {
    void *a0 = arg0;
    void *a1 = arg1;

    func_80225F44_de();
    if (((func_8022DA20_S1 *)(a0))->unk6C0 != 0.0f) {
        func_802227F4_de(a0, a1, 0x25);
    }
}
