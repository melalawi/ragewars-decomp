#include "span_16E000/code_80449968.h"
#include "types.h"

/* Releases the two handles at offsets 0x11BC and 0x11C0 of an object: each goes to func_8025CA24_de
   with what func_8025CC6C_de returns, and each is then cleared. */


extern void *func_8025CC6C_de();
extern void func_8025CA24_de(void *, s32);

void func_8044A07C_de(struct Object_func_8044A07C_de *object) {
    func_8025CA24_de(func_8025CC6C_de(), object->first);
    object->first = 0;
    func_8025CA24_de(func_8025CC6C_de(), object->second);
    object->second = 0;
}
