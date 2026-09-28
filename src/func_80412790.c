#include "basetypes.h"

/* Allocates and zeroes a 0x60-byte record, copies the header of the record func_8040ECB0 finds for the low half of the first argument, tags it 0xB, stores four byte arguments and three alternating pairs of the last two, allocates and zeroes a width-by-height table of eight-byte cells at 0x44, and registers the record through func_8040EDB8.
   Adapted from func_8041A600 with the record size, tag 0xB, the byte fields, the cell table and the func_8040EDB8 registration changed. */

typedef struct {
    s32 words[11];
} Header44;

typedef struct Record Record;

struct Record {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[13];
    void *field_44;
    u8 field_48;
    u8 field_49;
    u8 field_4A;
    u8 field_4B;
    u8 field_4C;
    u8 field_4D;
    u8 field_4E;
    u8 field_4F;
    u8 field_50;
    u8 field_51;
    u8 pad_52[0xE];
};

extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32 arg0);
extern Record *func_8040ECB0(s32 arg0, s32 arg1);
extern void *func_80252FFC(s32);
extern void func_802A1748(void *, s32, s32);
extern void func_8040EDB8(s32 arg0, s32 arg1, Record *arg2, Record *arg3);

s32 func_80412790(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6) {
    Record *source;
    s32 context;
    Record *result;
    s32 size;
    void *cells;

    source = func_8040ECB0(func_80411E4C(func_8029A958()), arg0 & 0xFFFF);
    context = func_80411E4C(func_8029A958());
    result = func_80252FFC(0x60);
    func_802A1748(result, 0, 0x60);
    *(Header44 *)result = *(Header44 *)source;
    result->field_0E = 0xB;
    result->field_4B = arg4;
    result->field_4A = arg3;
    result->field_49 = arg2;
    result->field_48 = arg1;
    result->field_51 = arg6;
    result->field_50 = arg5;
    result->field_4F = arg6;
    result->field_4E = arg5;
    result->field_4D = arg6;
    result->field_4C = arg5;
    size = arg3 * arg4 * 8;
    cells = func_80252FFC(size);
    result->field_44 = cells;
    func_802A1748(cells, 0, size);
    func_8040EDB8(context, 0, source, result);
    return 1;
}
