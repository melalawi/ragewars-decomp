#include "span_1000/code_80258760.h"
extern void func_8025DB58_de(int a);

/** Thin wrapper forwarding an offset argument to func_8025DB58_de. */
void func_80258E40_de(int arg0) {
    func_8025DB58_de(arg0 + 0x1D64);
}
