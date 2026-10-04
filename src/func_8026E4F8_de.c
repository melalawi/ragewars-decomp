#include "span_1000/code_8026D4F0.h"
#include "types.h"


void *func_8026E4F8_de(Node8026E4F8 **arg0, u32 arg1)
{
  u32 temp_v1;
  Node8026E4F8 *var_a0;
  Node8026E4F8 *var_v0;
  var_v0 = *arg0;
  var_a0 = 0;
  if (var_v0 != 0)
  {
    loop_1:
    temp_v1 = var_v0->key;

    if (var_v0->key)
    {
      var_a0 = var_v0;
    }
    else
    {
      var_a0 = var_v0;
    }
    if (temp_v1 != arg1)
    {
      if (arg1 < temp_v1)
      {
        var_v0 = var_a0->left;
      }
      else
      {
        var_v0 = var_a0->right;
      }
      if (var_v0 == 0)
      {
        goto block_6;
      }
      goto loop_1;
    }
  }
  else
  {
    block_6:
    var_v0 = var_a0;

  }
  return var_v0;
}
