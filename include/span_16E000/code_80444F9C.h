#ifndef UNBAKE_SPAN_16E000_CODE_80444F9C_H
#define UNBAKE_SPAN_16E000_CODE_80444F9C_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct OptionEditContext;
typedef struct OptionEditContext OptionEditContext;

struct OptionEditState;
typedef struct OptionEditState OptionEditState;

struct Field_func_80445414_us_rev1;
struct Field_func_80445414_us_rev1 {
    char pad[0x14];
    char **text;
    s32 pad18;
    s32 value;
};
struct OptionEditContext;
struct Shape_typemap_13;
struct OptionEditContext {
    char pad0[0x8];
    struct Shape_typemap_13 unk_8;
};
struct OptionEditState;
struct OptionEditState {
    char p[20];
    s32 *unk_14;
    char q[4];
    struct OptionEditState *unk_1C;
    s32 unk_20;
    char r[52];
    s32 unk_58;
    char a[1408];
    struct OptionEditState *unk_5DC;
};
extern int func_80444E30_de(void);
extern void func_80444E70_de(s16 *record);
extern s32 func_80444E7C_de(void);
extern s32 func_80444EB4_de(void);
#endif
