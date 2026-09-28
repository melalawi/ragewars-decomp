
#include "basetypes.h"
typedef struct 
{
  u16 type;
  u8 status;
  u8 errno;
} OSContStatus;
typedef struct 
{
  u16 button;
  s8 stick_x;
  s8 stick_y;
  u8 errno;
} OSContPad;
typedef struct 
{
  s16 ob[3];
  u16 flag;
  s16 tc[2];
  u8 cn[4];
} Vtx_t;
typedef struct 
{
  s16 ob[3];
  u16 flag;
  s16 tc[2];
  s8 n[3];
  u8 a;
} Vtx_tn;
typedef union 
{
  Vtx_t v;
  Vtx_tn n;
  s64 force_structure_alignment;
} Vtx;
typedef s32 Mtx_t[4][4];
typedef union 
{
  Mtx_t m;
  s64 force_structure_alignment;
} Mtx;
typedef struct 
{
  s16 vscale[4];
  s16 vtrans[4];
} Vp_t;
typedef union 
{
  Vp_t vp;
  s64 force_structure_alignment;
} Vp;
typedef struct 
{
  u8 flag;
  u8 v[3];
} Tri;
typedef struct 
{
  u8 col[3];
  s8 pad1;
  u8 colc[3];
  s8 pad2;
  s8 dir[3];
  s8 pad3;
} Light_t;
typedef struct 
{
  u8 col[3];
  s8 pad1;
  u8 colc[3];
  s8 pad2;
} Ambient_t;
typedef struct 
{
  s32 x1;
  s32 y1;
  s32 x2;
  s32 y2;
} Hilite_t;
typedef union 
{
  Light_t l;
  s64 force_structure_alignment[2];
} Light;
typedef union 
{
  Ambient_t l;
  s64 force_structure_alignment[1];
} Ambient;
typedef struct 
{
  Ambient a;
  Light l[7];
} Lightsn;
typedef struct 
{
  Ambient a;
  Light l[1];
} Lights0;
typedef struct 
{
  Ambient a;
  Light l[1];
} Lights1;
typedef struct 
{
  Ambient a;
  Light l[2];
} Lights2;
typedef struct 
{
  Ambient a;
  Light l[3];
} Lights3;
typedef struct 
{
  Ambient a;
  Light l[4];
} Lights4;
typedef struct 
{
  Ambient a;
  Light l[5];
} Lights5;
typedef struct 
{
  Ambient a;
  Light l[6];
} Lights6;
typedef struct 
{
  Ambient a;
  Light l[7];
} Lights7;
typedef struct 
{
  Light l[2];
} LookAt;
typedef union 
{
  Hilite_t h;
  s32 force_structure_alignment[4];
} Hilite;
typedef struct 
{
  u32 w0;
  u32 w1;
} Gwords;
typedef struct 
{
  s32 cmd : 8;
  u32 par : 8;
  u32 len : 16;
  u32 addr;
} Gdma;
typedef struct 
{
  s32 cmd : 8;
  s32 pad : 24;
  Tri tri;
} Gtri;
typedef struct 
{
  s32 cmd : 8;
  s32 pad1 : 24;
  s32 pad2 : 24;
  u8 param : 8;
} Gpopmtx;
typedef struct 
{
  s32 cmd : 8;
  s32 pad0 : 8;
  s32 mw_index : 8;
  s32 number : 8;
  s32 pad1 : 8;
  s32 base : 24;
} Gsegment;
typedef struct 
{
  s32 cmd : 8;
  s32 pad0 : 8;
  s32 sft : 8;
  s32 len : 8;
  u32 data : 32;
} GsetothermodeL;
typedef struct 
{
  s32 cmd : 8;
  s32 pad0 : 8;
  s32 sft : 8;
  s32 len : 8;
  u32 data : 32;
} GsetothermodeH;
typedef struct 
{
  u8 cmd;
  u8 lodscale;
  u8 tile;
  u8 on;
  u16 s;
  u16 t;
} Gtexture;
typedef struct 
{
  s32 cmd : 8;
  s32 pad : 24;
  Tri line;
} Gline3D;
typedef struct 
{
  s32 cmd : 8;
  s32 pad1 : 24;
  s16 pad2;
  s16 scale;
} Gperspnorm;
typedef struct 
{
  s32 cmd : 8;
  u32 fmt : 3;
  u32 siz : 2;
  u32 pad : 7;
  u32 wd : 12;
  u32 dram;
} Gsetimg;
typedef struct 
{
  s32 cmd : 8;
  u32 muxs0 : 24;
  u32 muxs1 : 32;
} Gsetcombine;
typedef struct 
{
  s32 cmd : 8;
  u8 pad;
  u8 prim_min_level;
  u8 prim_level;
  u32 color;
} Gsetcolor;
typedef struct 
{
  s32 cmd : 8;
  s32 x0 : 10;
  s32 x0frac : 2;
  s32 y0 : 10;
  s32 y0frac : 2;
  u32 pad : 8;
  s32 x1 : 10;
  s32 x1frac : 2;
  s32 y1 : 10;
  s32 y1frac : 2;
} Gfillrect;
typedef struct 
{
  s32 cmd : 8;
  u32 fmt : 3;
  u32 siz : 2;
  u32 pad0 : 1;
  u32 line : 9;
  u32 tmem : 9;
  u32 pad1 : 5;
  u32 tile : 3;
  u32 palette : 4;
  u32 ct : 1;
  u32 mt : 1;
  u32 maskt : 4;
  u32 shiftt : 4;
  u32 cs : 1;
  u32 ms : 1;
  u32 masks : 4;
  u32 shifts : 4;
} Gsettile;
typedef struct 
{
  s32 cmd : 8;
  u32 sl : 12;
  u32 tl : 12;
  s32 pad : 5;
  u32 tile : 3;
  u32 sh : 12;
  u32 th : 12;
} Gloadtile;
typedef Gloadtile Gloadblock;
typedef Gloadtile Gsettilesize;
typedef Gloadtile Gloadtlut;
typedef struct 
{
  u32 cmd : 8;
  u32 xl : 12;
  u32 yl : 12;
  u32 pad1 : 5;
  u32 tile : 3;
  u32 xh : 12;
  u32 yh : 12;
  u32 s : 16;
  u32 t : 16;
  u32 dsdx : 16;
  u32 dtdy : 16;
} Gtexrect;
typedef struct 
{
  u32 w0;
  u32 w1;
  u32 w2;
  u32 w3;
} TexRect;
typedef union 
{
  Gwords words;
  Gdma dma;
  Gtri tri;
  Gline3D line;
  Gpopmtx popmtx;
  Gsegment segment;
  GsetothermodeH setothermodeH;
  GsetothermodeL setothermodeL;
  Gtexture texture;
  Gperspnorm perspnorm;
  Gsetimg setimg;
  Gsetcombine setcombine;
  Gsetcolor setcolor;
  Gfillrect fillrect;
  Gsettile settile;
  Gloadtile loadtile;
  Gsettilesize settilesize;
  Gloadtlut loadtlut;
  s64 force_structure_alignment;
} Gfx;
extern Gfx *D_80110634;
extern char D_800D14B0;
extern char D_800D1268;
extern char D_800D12F0;
extern s32 D_800D15B4;
extern s32 D_800D15B0;
extern void func_80296FF8(void);
void func_8026992C(u32 matrix, s32 alternate, u32 color)
{
  Gfx *cmd;
  Gfx *new_var;
  Gfx **head;
  char *displayList;
  head = &D_80110634;
  cmd = (*head)++;
  cmd->words.w0 = 0xFD900000;
  cmd->words.w1 = (u32) (&D_800D14B0);
  cmd = (*head)++;
  cmd->words.w0 = 0xF5900000;
  cmd->words.w1 = 0x07080200;
  cmd = (*head)++;
  cmd->words.w0 = 0xE6000000;
  cmd->words.w1 = 0;
  cmd = (*head)++;
  cmd->words.w0 = 0xF3000000;
  cmd->words.w1 = 0x0707F400;
  cmd = (*head)++;
  cmd->words.w0 = 0xE7000000;
  cmd->words.w1 = 0;
  cmd = (*head)++;
  cmd->words.w0 = 0xF5880400;
  cmd->words.w1 = 0x00080200;
  cmd = (*head)++;
  cmd->words.w0 = 0xF2000000;
  cmd->words.w1 = 0x0003C03C;
  cmd = (*head)++;
  cmd->words.w0 = 0xFA000000;
  cmd->words.w1 = color | 0xFFFFFF00;
  cmd = (*head)++;
  cmd->words.w0 = 0xDA380003;
  cmd->words.w1 = matrix;
  cmd = (*head)++;
  new_var = cmd;
  displayList = &D_800D1268;
  cmd->words.w0 = 0xDE000000;
  if (alternate != 0)
  {
    displayList = &D_800D12F0;
  }
  new_var->words.w1 = (u32) displayList;
  D_800D15B4 = -1;
  D_800D15B0 = -1;
  func_80296FF8();
}
