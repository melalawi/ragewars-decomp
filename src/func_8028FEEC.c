/* Transposes the byte matrix after its eight-byte dimensions header and optionally copies the result back. */

#include "basetypes.h"
typedef struct 
{
  s32 unk0;
  s32 unk4;
} Header;
extern void func_802C2490(void *, void *, s32);
void func_8028FEEC(void *arg0, void *arg1, s32 arg2)
{
  char *data = ((char *) arg0) + 8;
  s32 temp_a2;
  int first_column;
  s32 temp_t0;
  s32 var_a0;
  s32 var_a1;
  s32 var_v1;
  u8 *temp_v0;
  u8 *var_a3;
  first_column = 0;
  func_802C2490(arg1, arg0, 8);
  var_a3 = arg1 + 8;
  temp_a2 = ((Header *) arg0)->unk4;
  temp_t0 = ((Header *) arg0)->unk0;
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
    func_802C2490(arg0, arg1, (temp_a2 * temp_t0) + 8);
  }
}
