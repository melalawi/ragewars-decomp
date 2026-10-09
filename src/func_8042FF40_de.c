#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_16E000/code_8042F988.h"
#include "types.h"
/* Marks a player's record as ready for the next round: clears its pending counters, and on mode 1 advances its tier, gives the newly reached tier its default entry and flags the acquired handle for the notice sent to 0xE74. */

extern char *D_800E54A4;
extern void *func_8041B7FC_de(s32, s32);
extern void func_8025DF34_de(s32, void *);







s32 func_8042FF40_de(s32 unusedA, s32 unusedB, s32 index, s32 mode)
{
  s32 slot = index & 0xFFFF;
  s32 offset = slot * 0xB68;
  void *handle;
  if ((((struct Row_func_80430028_de *) (D_800E54A4 + offset))->state) == 0xC)
  {
    handle = func_8041B7FC_de(((func_80203E78_S1 *)(D_800E54A4))->unk4, slot);
    ((struct Row_func_80430028_de *) (D_800E54A4 + offset))->timer = 0;
    ((struct Row_func_80430028_de *) (D_800E54A4 + offset))->phase = 2;
    if (mode == 1)
    {
      s32 tier = (((struct Row_func_80430028_de *) (D_800E54A4 + offset))->count) + 1;
      if (tier < 7)
      {
        ((struct Row_func_80430028_de *) (D_800E54A4 + offset))->count = tier;
      }
      {
        char *base = D_800E54A4;
        s32 row = slot * 0xB68;
        char *entry = base + (((((struct func_80435010_S4 *) (base + row))->unkB9C) * 2) + row);
        if ((((func_80435010_S3 *)(entry))->unkB8C) == 0)
        {
          ((func_80435010_S3 *)(entry))->unkB8C = 0x41;
        }
      }
      ((struct Shape_typemap_21 *)(handle))->field_10 = 0xFF;
      func_8025DF34_de(0xE74, handle);
    }
  }
 do { return 0; } while (0);
}
