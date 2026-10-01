#include "unbake_gbi.h"

#include "basetypes.h"












typedef struct 
{
  s32 x1;
  s32 y1;
  s32 x2;
  s32 y2;
} UnitHilite_t;


































#include "basetypes.h"
#include "n64sdk.h"
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
  gDPSetTextureImage(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32) (&D_800D14B0));
  cmd = (*head)++;
  gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
  cmd = (*head)++;
  gDPLoadSync(cmd);
  cmd = (*head)++;
  gDPLoadBlock(cmd, G_TX_LOADTILE, 0, 0, 127, 1024);
  cmd = (*head)++;
  gDPPipeSync(cmd);
  cmd = (*head)++;
  gDPSetTile(cmd, G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
  cmd = (*head)++;
  gDPSetTileSize(cmd, G_TX_RENDERTILE, 0, 0, 60, 60);
  cmd = (*head)++;
  cmd->words.w0 = 0xFA000000;
  cmd->words.w1 = color | 0xFFFFFF00;
  cmd = (*head)++;
  gSPMatrix(cmd, matrix, G_MTX_LOAD);
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
