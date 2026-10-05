#include "span_1000/code_8025A3EC.h"
#include "types.h"
/* Stops the selected sound slot and sets its release flag; split unsigned offset-to-pointer casts and a one-pass statement group preserve the separate table and offset schedule. */


extern void func_802B2D80_de(void *);
void func_8025B8BC_de(Slot_func_8025B8BC_de *base, s16 index)
{
  unsigned int offset = index * (sizeof(Slot_func_8025B8BC_de));
  char *entry = (char *) offset;
  Slot_func_8025B8BC_de *slots;
  Slot_func_8025B8BC_de *selected;
  entry += (unsigned int) base;
  slots = base;
 do { func_802B2D80_de(0x84 + ((Slot_func_8025B8BC_de *) entry)->owner); entry = (char *) slots; entry += offset; selected = (Slot_func_8025B8BC_de *) entry; } while (0);
  selected->flags |= 8;
}
