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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C52E0_4 = (-0.667424023f);
const float unbake_rodata_800C52E4_4 = 0.953462005f;
const float unbake_rodata_800C52E8_4 = (-0.57207799f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA4A0_4 = (-0.667424023f);
const float unbake_rodata_800CA4A4_4 = 0.953462005f;
const float unbake_rodata_800CA4A8_4 = (-0.57207799f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C54A4_4 = 3.40282347e+38f;
const float unbake_rodata_800C54A8_4 = 3.14159274f;
const float unbake_rodata_800C54AC_4 = 204.799988f;
const float unbake_rodata_800C54B0_4 = (-3.14159274f);
const float unbake_rodata_800C54B4_4 = 10430.0596f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C53EC_4 = (-2.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5340_4 = 262144.0f;
#endif
