#include "span_1000/code_80258760.h"
extern void func_8025DB44_de(int a);

/** Thin wrapper forwarding an offset argument to func_8025DB44_de. */
void func_80258ED8_de(int arg0) {
    func_8025DB44_de(arg0 + 0x1D64);
}
