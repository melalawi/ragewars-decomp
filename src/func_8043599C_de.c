#include "span_16E000/code_80435010.h"
#include "types.h"

/* Fills entry i of the 12-byte records at offset 0x2DF8 of the object D_800E54A4 points to with
   two values and marks it set. */




extern struct Table_func_804352C8_de *D_800E1454_de;

void func_8043599C_de(s32 first, s32 second, s32 index) {
    D_800E1454_de->slots[index].x = first;
    D_800E1454_de->slots[index].y = second;
    D_800E1454_de->slots[index].z = 1;
}
