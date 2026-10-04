#include "span_1000/code_80258760.h"
extern void func_8025BB3C_de(int a);

/** Thin wrapper forwarding an offset argument to func_8025BB3C_de. */
void func_80258EF4_de(int arg0) {
    func_8025BB3C_de(arg0 + 0x1DB8);
}
