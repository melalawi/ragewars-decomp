/* Stops the selected sound slot and sets its release flag; split unsigned offset-to-pointer casts and a one-pass statement group preserve the separate table and offset schedule. */

#include "basetypes.h"
typedef struct 
{
  char pad0[0xA8];
  s32 flags;
  char padaC[8];
  char *owner;
  char end[0x14];
} Slot;
extern void func_802B7E50(void *);
void func_8025B8DC(Slot *base, s16 index)
{
  unsigned int offset = index * (sizeof(Slot));
  char *entry = (char *) offset;
  Slot *slots;
  Slot *selected;
  entry += (unsigned int) base;
  slots = base;
 do { func_802B7E50(0x84 + ((Slot *) entry)->owner); entry = (char *) slots; entry += offset; selected = (Slot *) entry; } while (0);
  selected->flags |= 8;
}
