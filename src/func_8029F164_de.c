#include "span_1000/code_8029FF18.h"
extern void func_8029CE3C_de(s32, s32, s32);

/** Thin wrapper forwarding arg0 twice (as first and third args) to func_8029CE3C_de. */
void func_8029F164_de(int arg0, int arg1) {
    func_8029CE3C_de(arg0, arg1, arg0);
}
