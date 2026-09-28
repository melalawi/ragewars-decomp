#include "basetypes.h"

/* Allocates and zeroes a 0x58-byte record, copies the header and five-word block of the record func_8040ECB0 finds for the low half of the first argument, links the record func_8040ECB0 finds for the second into it with its halfword at 0x18, stores the third argument, and registers it through func_8040EF24 and func_8040F004.
   Adapted from func_802A2990 with the record size, tag 0xB63, the tail fields and the dropped func_802A2B24 call changed. */

typedef struct {
    s32 words[11];
} Header44;

typedef struct {
    s32 words[5];
} Block20;

typedef struct Record Record;

struct Record {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
    Record *field_44;
    s32 field_48;
    s32 field_4C;
    s32 field_50;
    s32 field_54;
};

extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32 arg0);
extern Record *func_8040ECB0(s32 arg0, s32 arg1);
extern Record *func_80252FFC(s32);
extern void func_802A1748(Record *, s32, s32);
extern void func_8040EF24(Record *arg0, Record *arg1);
extern void func_8040F004(s32 arg0, Record *arg1, Record *arg2);

Record *func_8041A600(s32 arg0, s32 arg1, s32 arg2) {
    Record *source;
    s32 context;
    Record *result;
    Record *child;

    source = func_8040ECB0(func_80411E4C(func_8029A958()), arg0 & 0xFFFF);
    context = func_80411E4C(func_8029A958());
    result = func_80252FFC(0x58);
    func_802A1748(result, 0, 0x58);
    *(Header44 *)result = *(Header44 *)source;
    result->field_0E = 0xB63;
    *(Block20 *)&result->fields_2C = *(Block20 *)&source->fields_2C;
    child = func_8040ECB0(context, arg1 & 0xFFFF);
    result->field_44 = child;
    result->field_48 = child->field_18;
    result->field_4C = arg2;
    result->field_50 = 0;
    result->field_54 = 2;
    func_8040EF24(source, result);
    source->field_0C = -1;
    func_8040F004(context, source, result);
    return result;
}
