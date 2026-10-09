#include "span_16E000/code_80434F4C.h"
#include "types.h"

/* Marks entry i of the 150-byte records D_80146410 and sets the words at offsets 0x6C and 0x58
   of entry i of the 2920-byte records D_800E54A4 points to to 2. */


extern u8 D_80142350[];
extern struct Entry_func_804350CC_de *D_800E1454_de;

void func_804350CC_de(s32 index) {
    struct Entry_func_804350CC_de *entry;

    D_80142350[index * 150] = 1;
    entry = &D_800E1454_de[index];
    entry->second = 2;
    entry->first = 2;
}
