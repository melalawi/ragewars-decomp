#include "span_16E000/code_80409A88.h"
#include "span_16E000/code_8042F988.h"
#include "common/unused.h"
#include "common/types_1dc8418c21db.h"
#include "types.h"

#if defined(VERSION_EU) || defined(VERSION_EU_X)

extern char D_800ED404_eu[];
#define UI_FORMAT_TEXT D_800ED404_eu
#else
#define UI_FORMAT_TEXT D_800DCD84
#endif


/* Formats the three floats at offsets 0xC, 0x10 and 0x14 of the structure D_800DE86C points to,
   truncated to integers, into a field's text with the format D_800DCD84, nine bytes before the
   length func_80441FE8_de reports. Returns zero. */
struct State_func_8040A614_de;


extern struct State_func_8040A614_de *D_800DE86C;
extern char D_800DCD84[];
extern s32 func_80441FE8_de(struct Field *);
extern void func_8026591C_de(char *, char *, s32, s32, s32);

s32 func_8040A614_de(struct Field *field) {
    s32 x = D_800DE86C->x;
    s32 y = D_800DE86C->y;
    s32 z = D_800DE86C->z;
    char *text =
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        field->text[D_80152789];
#else
        *field->text;
#endif

    func_8026591C_de(text + (func_80441FE8_de(field) - 9), UI_FORMAT_TEXT, z, y, x);
    return 0;
}
