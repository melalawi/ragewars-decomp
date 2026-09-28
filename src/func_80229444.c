/* Transfers a randomly selected inventory quantity into an empty recipient slot. */
#include "basetypes.h"
#define NULL ((void *)0)
s32 func_80274544();                             /* extern */

typedef struct {char pad[0x5F4];s16 items[3];} Inventory;
typedef struct {char pad[0x5A4];s32 index,amount;} Receiver;
void func_80229444(Inventory *arg0, Receiver *arg1) {
 s32 amount;
 s32 index;
 s32 value;
 void *scan;
 if (arg1->amount == 0) {
  amount=15;
  index=func_80274544()%3;
  value=arg0->items[index];
  if(value<16) amount=value;
  if(amount==0) {
   func_80274544();
   scan=arg0;
   for(index=0;index<3;index++) {
    s16 item=arg0->items[index];
    if(item>0) { s32 v=item; if(amount<v) v=amount; amount=v; }
   }
   index=2;
  }
  if(amount!=0) {
   arg0->items[index]-=amount;
   arg1->index=index;
   arg1->amount=amount;
  }
 }
}
