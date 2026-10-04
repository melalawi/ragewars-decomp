#include "span_16E000/code_8042ACB0.h"
/* Calls func_8042B0A4_de and then func_8042A7B4_de with 0. */
extern void func_8042B0A4_de();
extern void func_8042A7B4_de(int);

void func_8042B080_de(void) {
    func_8042B0A4_de();
    func_8042A7B4_de(0);
}
