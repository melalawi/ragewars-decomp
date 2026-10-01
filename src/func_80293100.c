#include "unbake_gbi.h"
/* Draws a filled screen rectangle with nonnegative corners; the volatile bottom-coordinate argument constrains its stack-load scheduling. */

#include "basetypes.h"
#include "basetypes.h"
#include "n64sdk.h"
typedef struct Color
{
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
} Color;
extern Gfx *D_80110634;
extern void func_8026925C(s32 mode);
extern void func_80268CE0(s32 mode);
void func_80293100(void *unused, Color *color, s32 left, s32 top, s32 right, volatile s32 bottom)
{
  if (color->a != 0)
  {
    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_1CYCLE);
    func_8026925C(0x13);
    func_80268CE0(0x19);
    {
      Gfx *cmd = D_80110634++;
      cmd->words.w0 = 0xFA00FFFF;
      cmd->words.w1 = (((color->r << 24) | (color->g << 16)) | (color->b << 8)) | color->a;
    }
    {
      Gfx *cmd = D_80110634++;
      s32 x0 = right;
      s32 y0;
      s32 x1;
      s32 y1;
      s32 xbits, leftbits;
      if (x0 < 0)
      {
        x0 = 0;
      }
      xbits = (x0 & 0x3FF) << 14;
      y0 = bottom;
      if (y0 < 0)
      {
        y0 = 0;
      }
      cmd->words.w0 = (0xF6000000 | xbits) | ((y0 & 0x3FF) << 2);
      x1 = left;
      if (x1 < 0)
      {
        x1 = 0;
      }
      leftbits = (x1 & 0x3FF) << 14;
      y1 = top;
      if (y1 < 0)
      {
        y1 = 0;
      }
      cmd->words.w1 = leftbits | ((y1 & 0x3FF) << 2);
    }
  }
}
