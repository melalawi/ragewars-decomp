#include "span_16E000/code_80410E9C.h"
/* Runs func_80411518_de for each of the manager D_80153C20's entries unless its mode word at 0x34 is 1. */


extern Manager_func_80411D18_de D_8014D990;
extern void func_80411518_de(int);

void func_80411D18_de(void) {
    int i;

    if (D_8014D990.mode != 1) {
        for (i = 0; i < D_8014D990.count; i++) {
            func_80411518_de(i);
        }
    }
}
