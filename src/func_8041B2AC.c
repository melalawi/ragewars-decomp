#include "basetypes.h"

/* Copies record arg0 unless it already carries tag 0xB61: allocates and zeroes a 0x44-byte record, copies arg0's header and five-word block into it, tags it 0xB61, and registers it through func_8040EF24 and func_8040F004. Adapted from func_8041B190 with the source record passed in and the early return for a record already tagged 0xB61 added. */

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
    u16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
};

extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32 arg0);
extern Record *func_80252FFC(s32);
extern void func_802A1748(Record *, s32, s32);
extern void func_8040EF24(Record *arg0, Record *arg1);
extern void func_8040F004(s32 arg0, Record *arg1, Record *arg2);

void func_8041B2AC(Record *source) {
    s32 context;
    Record *result;

    if (source->field_0E == 0xB61) {
        return;
    }
    context = func_80411E4C(func_8029A958());
    result = func_80252FFC(0x44);
    func_802A1748(result, 0, 0x44);
    *(Header44 *)result = *(Header44 *)source;
    result->field_0E = 0xB61;
    *(Block20 *)&result->fields_2C = *(Block20 *)&source->fields_2C;
    func_8040EF24(source, result);
    source->field_0C = -1;
    func_8040F004(context, source, result);
}
