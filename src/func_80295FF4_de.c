#include "span_1000/code_802953FC.h"
/** Clear the global word at VRAM 0x800D2B00. */
extern int D_800CD890;

void func_80295FF4_de(void) {
    D_800CD890 = 0;
}
