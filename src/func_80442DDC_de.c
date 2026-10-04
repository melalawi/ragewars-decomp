#include "span_16E000/code_8044239C.h"
#include "types.h"
/* Selects the descriptor for a single masked category bit; on eu and eu-x the slot is
   additionally offset by nine descriptors per local player, read from the byte after D_80142788. */

extern char D_800E1E24_de[];
extern u8 D_80142788;
void *func_80442DDC_de(Obj_func_80442DDC_de *arg0) {
 s32 index=0;
 switch(arg0->flags & 0x3fe0) {
 case 0x20: break;
 case 0x40: index=1; break;
 case 0x80: index=2; break;
 case 0x100: index=3; break;
 case 0x200: index=4; break;
 case 0x400: index=5; break;
 case 0x800: index=6; break;
 case 0x1000: index=7; break;
 case 0x2000: index=8; break;
 default: index=0; break;
 }
#if defined(VERSION_EU) || defined(VERSION_EU_X)
 index += (&D_80142788)[1] * 9;
#endif
 return D_800E1E24_de+index*28;
}
