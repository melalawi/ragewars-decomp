#include "common/types.h"
#include "span_16E000/code_80435010.h"
#include "span_16E000/types.h"
#include "types.h"
/* Advances the current player's name-entry character one step forward, defaulting an unset slot to 'A' and wrapping past 'Z' back to a space. */

extern char *D_800E1454_de;
extern void *func_8041B7FC_de(s32, s32);










void func_80434E34_de(s32 arg0) {
    char *base;
    char *entry;
    u8 value;
    s32 *index;
    char *flags;

    flags = D_800E1454_de + arg0 * 4;
    ((func_80205314_S2 *)(flags))->unk2C = 0;
    func_8041B7FC_de(((func_80203E78_S1 *)(D_800E1454_de))->unk4, arg0);
    index = (s32 *)((arg0 * 0xB68 + D_800E1454_de) + 0xB9C);
    entry = (*index * 2 + arg0 * 0xB68) + D_800E1454_de;
    if (((func_80435010_S3 *)(entry))->unkB8C == 0) {
        ((func_80435010_S3 *)(entry))->unkB8C = 0x41;
    }
    base = arg0 * 0xB68 + D_800E1454_de;
    entry = (((func_80435010_S4 *)(base))->unkB9C * 2 + arg0 * 0xB68) + D_800E1454_de;
    value = ((func_80435010_S3 *)(entry))->unkB8C;
    value = value + 1;
    if (value >= 0x5B) {
        value = 0x20;
    }
    ((func_80435010_S3 *)(entry))->unkB8C = value;
}
