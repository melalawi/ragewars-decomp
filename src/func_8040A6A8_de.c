#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80409A88.h"
#include "types.h"

/* Points a field's text at D_800D7810 when the option D_80153780 is set and at D_800D7814 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_8014D4F0;
extern char D_800D37E4[];
extern char D_800D37E8[];

s32 func_8040A6A8_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4F0 != 0) {
        field->text = D_800D37E4;
    } else {
        field->text = D_800D37E8;
    }
    return 0;
}

/* Loads a text into the block D_8014561C through func_80442574_de from the record's words at 0x1C and
   0x20: from the resource D_44F100 when D_80153780 is set, otherwise from the record's word at 0x24.
   Returns one. */


extern s32 D_8014D4F0;
extern char D_8014155C[];
extern char D_0044E4B0[];
extern void func_80442574_de(void *, void *, s32, s32, s32);

s32 func_8040A6DC_de(void *unused, struct Record_func_8040A6DC_de *record) {
    do {
        if (D_8014D4F0 != 0) {
            func_80442574_de(D_8014155C, D_0044E4B0, record->first, record->second, 0);
        } else {
            func_80442574_de(D_8014155C, record->resource, record->first, record->second, 0);
        }
    } while (0);
    return 1;
}

/* Stores 1 in D_80153730 and 0 in D_80153774. */
extern s32 D_8014D4A0;
extern s32 D_8014D4E4;

void func_8040A748_de(void) {
    D_8014D4A0 = 1;
    D_8014D4E4 = 0;
}

/* Stores 0 in D_80153730 and 0 in D_80153774. */
extern s32 D_8014D4A0;
extern s32 D_8014D4E4;

void func_8040A764_de(void) {
    D_8014D4A0 = 0;
    D_8014D4E4 = 0;
}

/* Clears bits 23 and 24 of the flag words at offsets 0xA8 and 0xD0 of the object at offset 0xC
   of a record, clearing D_80153730 and setting D_80153774 between the two. */




extern s32 D_8014D4A0;
extern s32 D_8014D4E4;

void func_8040A77C_de(struct Record_func_8040A77C_de *record) {
    record->target->first &= ~0x01800000;
    D_8014D4A0 = 0;
    D_8014D4E4 = 1;
    record->target->second &= ~0x01800000;
}

/* Points a field's text at D_800D77EC when D_80153730 is set, at D_800D77F4 when D_80153774 is set instead, and at
   D_800D77F0 otherwise. Returns zero. */


extern s32 D_8014D4A0;
extern s32 D_8014D4E4;
extern char D_800D37C0[];
extern char D_800D37C8[];
extern char D_800D37C4[];

s32 func_8040A7BC_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4A0 != 0) {
        field->text = D_800D37C0;
    } else if (D_8014D4E4 != 0) {
        field->text = D_800D37C8;
    } else {
        field->text = D_800D37C4;
    }
    return 0;
}
