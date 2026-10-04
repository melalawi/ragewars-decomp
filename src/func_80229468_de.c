#include "span_1000/code_80228934.h"
#include "types.h"
/* Transfers a randomly selected inventory quantity into an empty recipient slot. */
#define NULL ((void *)0)
s32 func_802744D4_de();                             /* extern */



void func_80229468_de(Inventory *arg0, Receiver *arg1) {
 s32 amount;
 s32 index;
 s32 value;
 void *scan;
 if (arg1->amount == 0) {
  amount=15;
  index=func_802744D4_de()%3;
  value=arg0->items[index];
  if(value<16) amount=value;
  if(amount==0) {
   func_802744D4_de();
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
