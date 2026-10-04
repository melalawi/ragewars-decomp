#include "span_1000/code_80245804.h"
extern void *D_800DE7E0;




/** Store four incoming words into the global record's tail fields. */
void func_80245A5C_de(int arg0, int arg1, int arg2, int arg3) {
    char *record = (char *)D_800DE7E0;
    ((func_80245A20_S1 *)(record))->unk10C = arg1;
    ((func_80245A20_S1 *)(record))->unk108 = arg0;
    ((func_80245A20_S1 *)(record))->unk110 = arg2;
    ((func_80245A20_S1 *)(record))->unk114 = arg3;
}
