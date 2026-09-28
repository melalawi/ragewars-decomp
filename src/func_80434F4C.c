/* Resets the selected player menu record, updates the initiating player state and refreshes the team labels. */

#include "basetypes.h"
typedef struct 
{
  char pad0[4];
  s32 window;
  char pad8[0x50];
  s32 state;
  s32 step;
  s32 next;
  char pad64[8];
  s32 display;
  char pad70[0xB18];
  s32 reset;
  char padb8c[0x226C];
  s32 selected;
} State;
extern State *D_800E54A4;
extern void func_8041B834(s32, s32, s32);
extern void func_80432488(s32);
extern void func_80433F14(s32);
void func_80434F4C(s32 player)
{
  s32 selected = D_800E54A4->selected;
  State *slot;
  State *selected_slot;
  func_8041B834(D_800E54A4->window, selected, 0);
  slot = (State *) (((char *) D_800E54A4) + (player * 0xB68));
  slot->state = 17;
  slot->reset = 0;
  selected_slot = (State *) (((char *) D_800E54A4) + (selected * 0xB68));
  slot = selected_slot;
  slot->display = 2;
  slot->state = 2;
  slot->next = 13;
  slot->step = 3;
  func_80432488(selected);
  func_80433F14(-1);
}
