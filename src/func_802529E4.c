/* Draws the memory heap and block usage as colored graphics. */

#include "shared/heap_usage_graph.h"

void func_802529E4(s32 unused, s32 x0, s32 y0, s32 x1, s32 y1)
{
  HeapUsageRegion *region;
  HeapUsageBlock *block;
  u32 total;
  u32 rectangleWord;
  u32 kseg0;
  u32 mask;
  u32 unmask;
  s32 top;
  s32 bottom;
  s32 pass;
  u32 r;
  u32 g;
  u32 b;
  u32 flags;
  s32 lum;
  s32 show;
  {
    Gfx *_g = D_80110634++;
    _g->w0 = 0xE7000000;
    _g->w1 = 0;
  }
  {
    Gfx *_g = D_80110634++;
    _g->w0 = 0xE3000A01;
    _g->w1 = 0;
  }
  func_80268CE0(0x19);
  func_8026925C(0x15);
  {
    Gfx *_g = D_80110634++;
    _g->w0 = 0xFA000000;
    _g->w1 = 0xA0A0A000;
  }
  ;
  {
    Gfx *_g = D_80110634++;
    _g->w0 = (0xF6000000 | (((x1 + 1) & 0x3FF) << 14)) | (((y1 + 1) & 0x3FF) << 2);
    _g->w1 = (((x0 - 1) & 0x3FF) << 14) | (((y0 - 1) & 0x3FF) << 2);
  }
  ;
  func_8026925C(0x1B);
  {
    Gfx *_g = D_80110634++;
    _g->w0 = 0xFA000000;
    _g->w1 = 0xA0A0A0FF;
  }
  ;
  {
    Gfx *_g = D_80110634++;
    _g->w0 = (0xF6000000 | ((x1 & 0x3FF) << 14)) | ((y1 & 0x3FF) << 2);
    _g->w1 = ((x0 & 0x3FF) << 14) | ((y0 & 0x3FF) << 2);
  }
  ;
  mask = func_802C2020();
  if ((++D_8010515C) != 1)
  {
    func_802C2040(mask);
    func_802C0390(&D_80105140, 0, 1);
  }
  else
  {
    func_802C2040(mask);
  }
  kseg0 = 0x80000000;
  region = D_80105140.regions;
  total = ((u32) region) - kseg0;
  while (region != 0)
  {
    total += region->base + region->size;
    region = region->next;
  }

  {
    Gfx *_g = D_80110634++;
    _g->w0 = 0xFA000000;
    _g->w1 = 0x646400FF;
  }
  ;
  top = (y1 - (((((u32) D_80105140.regions) - kseg0) * (y1 - y0)) / total)) - 1;
  {
    Gfx *_g = D_80110634++;
    _g->w0 = (0xF6000000 | ((x1 & 0x3FF) << 14)) | (((y1 + 1) & 0x3FF) << 2);
    /* FAKEMATCH: reuse the color local to preserve the allocator lifetime. */
    _g->w1 = ((x0 & 0x3FF) << 14) | ((top & 0x3FF) << 2);
  }
  ;
  for (pass = 0; pass < 2; pass++)
  {
    for (block = D_80104584; block != 0; block = block->next)
    {
      if (pass != 0)
      {
        show = (block->flags & 0x101) == 0x100;
      }
      else
      {
        show = (block->flags & 0x101) != 0x100;
      }
      if (show)
      {
        flags = block->flags;
        if (flags & 1)
        {
          r = 0xFF;
          g = 0xFF;
          b = 0;
        }
        else
          if (flags & 0x100)
        {
          r = 0xFF;
          g = 0;
          b = 0;
        }
        else
          if (flags & 0x600)
        {
          r = 0;
          g = 0;
          b = 0xFF;
        }
        else
        {
          r = 0;
          g = 0xFF;
          b = 0;
        }
        {
          Gfx *_g = D_80110634++;
          _g->w0 = 0xFA000000;
          _g->w1 = (((r << 24) | (g << 16)) | (b << 8)) | 0xFF;
        }
        lum = (((block->start - kseg0) - 0x20) * (y1 - y0)) / total;
        ;
        top = (y1 - ((((block->start + block->size) - kseg0) * (y1 - y0)) / total)) - 1;
        lum = y1 - lum;
        bottom = lum - 1;
        if (top < bottom)
        {
          {
            Gfx *_g = D_80110634++;
            _g->w0 = (0xF6000000 | ((x1 & 0x3FF) << 14)) | ((bottom & 0x3FF) << 2);
            _g->w1 = ((x0 & 0x3FF) << 14) | ((top & 0x3FF) << 2);
          }
          ;
        }
        {
          Gfx *_g = D_80110634++;
          _g->w0 = 0xFA000000;
          /* FAKEMATCH: stage the shift in lum to preserve the allocator lifetime. */
          _g->w1 = ((((((s32) ((r * 1) >> 1)) < 0x100) ? (((r * 1) >> 1) << (lum = 24)) : (0xFF << 24)) | ((((s32) ((g * 1) >> 1)) < 0x100) ? (((g * 1) >> 1) << 16) : (0xFF << 16))) | ((((s32) ((b * 1) >> 1)) < 0x100) ? (((b * 1) >> 1) << 8) : (0xFF << 8))) | 0xFF;
        }
        ;
        {
          Gfx *_g = D_80110634++;
          /* FAKEMATCH: retain the rectangle word for the later highlight command. */
          rectangleWord = (0xF6000000 | ((x1 & 0x3FF) << 14)) | ((bottom & 0x3FF) << 2);
          _g->w0 = rectangleWord;
          _g->w1 = ((x0 & 0x3FF) << 14) | (((bottom - 1) & 0x3FF) << 2);
        }
        ;
        if ((!(block->flags & 0x702)) && ((D_80105180 - block->frame) >= 5))
        {
          r = (g = (b = 0xFF));
          {
            Gfx *_g = D_80110634++;
            _g->w0 = 0xFA000000;
            _g->w1 = (((r << 24) | (g << 16)) | (b << 8)) | 0xFF;
          }
          ;
          if (top < bottom)
          {
            {
              Gfx *_g = D_80110634++;
              _g->w0 = rectangleWord;
              _g->w1 = (((x0 + 8) & 0x3FF) << 14) | ((top & 0x3FF) << 2);
            }
            ;
          }
          {
            Gfx *_g = D_80110634++;
            _g->w0 = 0xFA000000;
            _g->w1 = ((((((r * 3) >> 1) < 0x100) ? ((((r * 3) >> 1) & 0xFF) << 24) : (0xFF << 24)) | ((((g * 3) >> 1) < 0x100) ? ((((g * 3) >> 1) & 0xFF) << 16) : (0xFF << 16))) | (((((s32)b * 3) >> 1) < 0x100) ? (((r = (((s32)b * 3) >> 1)) & 0xFF) << 8) : (0xFF << 8))) | 0xFF;
          }
          ;
          {
            Gfx *_g = D_80110634++;
            _g->w0 = (0xF6000000 | ((x1 & 0x3FF) << 14)) | ((bottom & 0x3FF) << 2);
            _g->w1 = (((x0 + 8) & 0x3FF) << 14) | (((bottom - 1) & 0x3FF) << 2);
          }
          ;
        }
      }
    }

  }

  unmask = func_802C2020();
  if ((--D_8010515C) != 0)
  {
    func_802C2040(unmask);
    func_802C0510(&D_80105140, 0, 1);
    return;
  }
  func_802C2040(unmask);
}

