/* Emits pipe sync, primitive color and a rectangle with nonnegative coordinates. */
#include "basetypes.h"
typedef struct {u32 w0,w1;} Gfx;
extern Gfx *D_80110634;
#define MAX(a,b) ((a)>(b)?(a):(b))
void func_802ABA44(s32 x0,s32 y0,s32 x1,s32 y1,u8 r,u8 g,u8 b,u8 a) {
 {Gfx *p=D_80110634++;p->w0=0xE7000000;p->w1=0;}
 {Gfx *p=D_80110634++;p->w0=0xFA00FFFF;p->w1=(r<<24)|((g&255)<<16)|((b&255)<<8)|(a&255);}
 {Gfx *p=D_80110634++;p->w0=0xF6000000|((MAX(x1,0)&1023)<<14)|((MAX(y1,0)&1023)<<2);p->w1=((MAX(x0,0)&1023)<<14)|((MAX(y0,0)&1023)<<2);}
}
