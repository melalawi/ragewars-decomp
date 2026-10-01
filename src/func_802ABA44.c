#include "unbake_gbi.h"
/* Emits pipe sync, primitive color and a rectangle with nonnegative coordinates. */
#include "basetypes.h"
#include "basetypes.h"
#include "n64sdk.h"
extern Gfx *D_80110634;
#define MAX(a,b) ((a)>(b)?(a):(b))
void func_802ABA44(s32 x0,s32 y0,s32 x1,s32 y1,u8 r,u8 g,u8 b,u8 a) {
 gDPPipeSync(D_80110634++);
 gDPSetPrimColor(D_80110634++, 255, 255, r, g, b, a);
 gDPFillRectangle(D_80110634++, ((x0))>((0))?((x0)):((0)), ((y0))>((0))?((y0)):((0)), ((x1))>((0))?((x1)):((0)), ((y1))>((0))?((y1)):((0)));
}
