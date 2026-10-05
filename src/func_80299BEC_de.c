#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80299DB4.h"
#include "types.h"

extern s32 func_802A0724_de(s32, s32, s32);
void func_80299BEC_de(s32 *arg0, s32 arg1, s32 arg2)
{
  long new_var;
  int new_var2;
  new_var2 = arg0[0];
  new_var2 = new_var2 + arg0[2];
  new_var = new_var2;
  func_802A0724_de(arg1, new_var, arg2);
  arg0[2] = arg0[2] + arg2;
}

void func_80299C38_de(void *arg0, s32 arg1) {
    if ((((struct func_8029AB74_S1 *) ((s8 *) arg0))->unk0) == 0) {
        (((struct func_8029AB74_S1 *) ((s8 *) arg0))->unk0) = func_8025305C_de(arg1);
        (((struct func_8029AB74_S1 *) ((s8 *) arg0))->unkC) = 0;
        (((struct func_8029AB74_S1 *) ((s8 *) arg0))->unk4) = arg1;
    }
}

void func_80299C80_de(void *arg0) {
    s32 temp_a0;
    temp_a0 = (((struct Shape_typemap_6 *) ((s8 *) arg0))->field_0);
    if (temp_a0 != 0) {
        func_802547E4_de(temp_a0);
        (((struct Shape_typemap_6 *) ((s8 *) arg0))->field_0) = 0;
    }
    (((struct Shape_typemap_6 *) ((s8 *) arg0))->field_C) = 0;
    (((struct Shape_typemap_6 *) ((s8 *) arg0))->field_8) = 0;
    (((struct Shape_typemap_6 *) ((s8 *) arg0))->field_4) = 0;
}
