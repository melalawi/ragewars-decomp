#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
} Entry;

extern Entry D_8014FDA0[];
extern u32 func_802C2020(void);
extern void func_802C2040(u32);

void func_802C0640(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_v0;
    Entry *e;

    temp_v0 = func_802C2020();
    ;
    (&D_8014FDA0[arg0])->a = arg1;
    (*(&D_8014FDA0[arg0])).b = arg2;
    func_802C2040(temp_v0);
}
