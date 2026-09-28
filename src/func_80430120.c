/* Marks a player's record as ready for the next round: clears its pending counters, and on mode 1 advances its tier, gives the newly reached tier its default entry and flags the acquired handle for the notice sent to 0xE74. */

#include "basetypes.h"
extern char *D_800E54A4;
extern void *func_8041B87C(s32, s32);
extern void func_8025DF54(s32, void *);
s32 func_80430120(s32 unusedA, s32 unusedB, s32 index, s32 mode)
{
  s32 slot = index & 0xFFFF;
  s32 offset = slot * 0xB68;
  void *handle;
  if ((*((s32 *) ((D_800E54A4 + offset) + 0x58))) == 0xC)
  {
    handle = func_8041B87C(*((s32 *) (D_800E54A4 + 4)), slot);
    *((s32 *) ((D_800E54A4 + offset) + 0xBA4)) = 0;
    *((s32 *) ((D_800E54A4 + offset) + 0xBA0)) = 2;
    if (mode == 1)
    {
      s32 tier = (*((s32 *) ((D_800E54A4 + offset) + 0xB9C))) + 1;
      if (tier < 7)
      {
        *((s32 *) ((D_800E54A4 + offset) + 0xB9C)) = tier;
      }
      {
        char *base = D_800E54A4;
        s32 row = slot * 0xB68;
        char *entry = base + (((*((s32 *) ((base + row) + 0xB9C))) * 2) + row);
        if ((*((u8 *) (entry + 0xB8C))) == 0)
        {
          *((u8 *) (entry + 0xB8C)) = 0x41;
        }
      }
      *((u8 *) (((char *) handle) + 0x10)) = 0xFF;
      func_8025DF54(0xE74, handle);
    }
  }
 do { return 0; } while (0);
}
