#include "span_1000/code_80204A68.h"
extern char D_800C8420_de;
extern char D_002052C4;
extern char D_00205628;
extern char D_002050A0;






/** Initialize the dest record's vtable-like fields from source's flag byte. */
void func_8020520C_de(void *source, void *dest) {
    ((func_8020520C_S1 *)(dest))->unk2C = &D_800C8420_de;
    ((func_8020520C_S1 *)(dest))->unk108 = &D_002052C4;
    ((func_8020520C_S1 *)(dest))->unk10C = &D_00205628;
    ((func_8020520C_S1 *)(dest))->unk110 = &D_002050A0;
    ((func_8020520C_S1 *)(dest))->unk124 = 0;
    ((func_8020520C_S1 *)(dest))->unk128 = ((func_8020520C_S2 *)(source))->unk3;
}
