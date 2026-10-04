#include "common/types.h"
#include "span_1000/code_8028FD24.h"
#include "types.h"
/* Transposes the byte matrix after its eight-byte dimensions header and optionally copies the result back. */


extern void func_802BD3A0_de(void *, void *, s32);



void func_8028FF0C_de(void *arg0, void *arg1, s32 arg2)
{
  char *data = &((func_8020CC0C_S1 *)(arg0))->unk8;
  s32 temp_a2;
  int first_column;
  s32 temp_t0;
  s32 var_a0;
  s32 var_a1;
  s32 var_v1;
  u8 *temp_v0;
  u8 *var_a3;
  first_column = 0;
  func_802BD3A0_de(arg1, arg0, 8);
  var_a3 = arg1 + 8;
  temp_a2 = ((struct Shape_func_802764D4_de_2 *) arg0)->field_4;
  temp_t0 = ((struct Shape_func_802764D4_de_2 *) arg0)->field_0;
  var_a1 = first_column;
  if (temp_a2 > first_column)
  {
    do
    {
      var_a0 = 0;
      if (temp_t0 > 0)
      {
        var_v1 = var_a1;
        do
        {
          temp_v0 = data + var_v1;
          var_v1 += temp_a2;
          var_a0 += 1;
          *var_a3 = *temp_v0;
          var_a3 += 1;
        }
        while (var_a0 < temp_t0);
      }
      var_a1 += 1;
    }
    while (var_a1 < temp_a2);
  }
  if (arg2 != 0)
  {
    func_802BD3A0_de(arg0, arg1, (temp_a2 * temp_t0) + 8);
  }
}
