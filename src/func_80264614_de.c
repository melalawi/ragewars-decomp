#include "span_1000/code_80263754.h"
extern unsigned char D_8010BBE3[];

int func_80264614_de(int arg0) {
    return ((D_8010BBE3[arg0 * 4] >> 3) ^ 1) & 1;
}
