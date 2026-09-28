/* Selects the descriptor for a single masked category bit; on eu and eu-mul the slot is
   additionally offset by nine descriptors per local player, read from the byte after D_80146848. */
#include "basetypes.h"
typedef struct { char pad[8]; u32 flags; } Obj;
extern char D_800E5E74[];
extern u8 D_80146848;
void *func_80442F4C(Obj *arg0) {
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
#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
 index += (&D_80146848)[1] * 9;
#endif
 return D_800E5E74+index*28;
}
