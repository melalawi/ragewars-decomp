#include "structs.h"
/* Builds the four-player selection screen state, its preview models and sliding panels, then marks active players. */
#include "basetypes.h"








extern func_8041F2A0_State *D_800E42D0;
extern func_8041F2A0_Layout D_800E42D4[];
extern func_8041F2A0_Row D_800E3A58[];
extern func_8041F2A0_Config D_80146398[];
extern func_8041F2A0_State *func_80252FFC(s32);
extern s32 func_8041B690(s32, s32);
extern void func_8041B768(s32, s32, s32);
extern void func_8042EB80(s32, s32);
extern s32 func_8041F248(s32);
extern s32 func_8041F1FC(s32);
extern void func_8041CB48(void *, s32, s32, s32, s32, func_8041F2A0_Vec3, func_8041F2A0_Vec3, f32, s32);
extern func_8041F2A0_Item *func_8040ECB0(void *, s32);
extern void func_8040E958(func_8041F2A0_Item *, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_8041FF9C(void);
extern void func_80420378(s32);
extern void func_802A338C(void);
s32 func_8041F2A0(s32 screen)
{
  func_8041F2A0_Vec3 scale;
  s32 j;
  s32 i;
  s32 model;
  s32 row;
  func_8041F2A0_Config *config;
  func_8041F2A0_Item *item;
  s32 rest;
  D_800E42D0 = func_80252FFC(0x1358);
  D_800E42D0->screen = (void *) screen;
  D_800E42D0->unk4 = func_8041B690(screen, 4);
  func_8041B768(screen, 0, 0x7A);
  func_8041B768(screen, 1, 0x7A);
  func_8041B768(screen, 2, 0x7A);
  func_8041B768(screen, 3, 0x7A);
  func_8042EB80(0, 0);
  D_800E42D0->clock = 0;
  scale.x = 1.0f;
  scale.y = 1.0f;
  scale.z = 1.0f;
  for (i = 0; i < 4; i++)
  {
    D_800E42D0->players[i].unk4 = 0;
    D_800E42D0->players[i].kind = D_800E42D4[i].kind;
    D_800E42D0->players[i].highlight = 0;
    D_800E42D0->players[i].unkC = 0;
    D_800E42D0->players[i].choice = 0;
    D_800E42D0->players[i].unk4C0 = 0;
    model = func_8041F248(D_800E42D0->players[i].kind);
    row = func_8041F1FC(D_800E42D0->players[i].kind);
    scale.x = D_800E3A58[row].scale[i];
    scale.y = D_800E3A58[row].scale[i];
    scale.z = D_800E3A58[row].scale[i];
    func_8041CB48(D_800E42D0->players[i].model, 9, model + 0x38F, 0x4B, 0x5DC0, scale, D_800E3A58[row].position[i], D_800E3A58[row].distance[i], D_800E3A58[row].light[i]);
    func_8040ECB0(D_800E42D0->screen, D_800E42D4[i].title)->alpha = 0x6E;
    for (j = 0; j < 3; j++)
    {
      func_8040ECB0(D_800E42D0->screen, D_800E42D4[i].cells[j].id)->alpha = 0x50;
      func_8040E958(func_8040ECB0(D_800E42D0->screen, D_800E42D4[i].options[j].id), 1);
    }

  }

  D_800E42D0->phase = 1;
  D_800E42D0->timer = 4;
  D_800E42D0->header = func_8040ECB0((void *) screen, 0xAC);
  D_800E42D0->header->x -= D_800E42D0->header->w;
  D_800E42D0->headerStep = D_800E42D0->header->w / 4;
  rest = D_800E42D0->header->w - (D_800E42D0->headerStep * 4);
  D_800E42D0->header->x += rest;
  D_800E42D0->footer = func_8040ECB0((void *) screen, 0x93);
  D_800E42D0->footer->x += D_800E42D0->footer->w;
  D_800E42D0->footerStep = D_800E42D0->footer->w / 4;
  rest = D_800E42D0->footer->w - (D_800E42D0->footerStep * 4);
  D_800E42D0->footer->x -= rest;
  func_8040ECB0((void *) screen, 0x76)->alpha = 0x6E;
  func_8040ECB0((void *) screen, 0x79)->alpha = 0x19;
  D_800E42D0->prompt = func_80419ED4(0x74, 0xFF);
  item = func_8040ECB0((void *) screen, 0x74);
  D_800E42D0->promptItem = item;
  func_8040E958(item, 0);
  D_800E42D0->pulse = func_8040ECB0((void *) screen, 0x7B);
  func_8040E958(D_800E42D0->pulse, 0);
  D_800E42D0->pulse->alpha = 0;
  D_800E42D0->pulseStep = 0x32;
  func_8041FF9C();
  config = D_80146398;
  for (i = 0; i < 4; i++)
  {
    if (config[i].active == 1)
    {
      func_80420378(i);
    }
  }

  func_802A338C();
  D_800E42D0->result = -1;
  return 0;
}
