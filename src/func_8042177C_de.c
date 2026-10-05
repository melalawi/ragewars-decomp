#include "span_16E000/code_80420E90.h"
#include "types.h"

#ifdef VERSION_EU_X
#define VV_03AB 0x3AF
#elif defined(VERSION_DE)
#define VV_03AB 0x3A5
#else
#define VV_03AB 0x3AB
#endif

/* Calls func_8040E8D8_de with zero on the object at offset 0x20 of the structure D_800E4400 points
   to, and with one on the entry 0x3AB that func_8040EC30_de finds in the list at offset 8, then sets
   the word at offset 0x34. */


extern struct State_func_8042177C_de *D_800E03B0_de;
extern void func_8040E8D8_de(void *, s32);
extern void *func_8040EC30_de(void *, s32);

void func_8042177C_de(void) {
    func_8040E8D8_de(D_800E03B0_de->object, 0);
    func_8040E8D8_de(func_8040EC30_de(D_800E03B0_de->list, VV_03AB), 1);
    D_800E03B0_de->ready = 1;
}
