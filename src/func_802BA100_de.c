#include "span_1000/code_802BEDA0.h"
/** Write a word to the SP status register. */
void func_802BA100_de(unsigned int arg0) {
    *(volatile unsigned int *)0xA4040010 = arg0;
}
