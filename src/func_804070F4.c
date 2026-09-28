/* Enters pak menu mode 2: sets the mode flags, shows the D_450BD0 prompt when a message is pending (D_800E28C0), and otherwise clears the owner's 0x01000000 flag, probes the Controller Pak on the selected channel, falls back to func_80405F48 when func_80404F04 reports none, and shows the D_44F67C, D_44F994 or D_44F610 prompt according to func_80404F3C and func_80405598. */

#include "basetypes.h"
typedef struct 
{
  char pad0[0x328];
  s32 flags;
} Owner;
typedef struct 
{
  char pad0[0x5DC];
  char *messages;
} Player;
typedef struct 
{
  char pad0[4];
  s8 channel;
} Slot;
typedef struct 
{
  char pad0[0xC];
  Owner *owner;
  char pad10[0xC];
  Player *player;
  Slot *slot;
} Menu;
extern s32 D_80153750;
extern s32 D_8015376C;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_800E28C4;
extern s32 D_80153784;
extern s32 D_8015375C;
extern s32 D_800E28C0;
extern char D_8014561C[];
extern char D_450BD0[];
extern volatile unsigned char D_44F100[];
extern char D_44F67C[];
extern char D_44F994[];
extern char D_44F610[];
extern void func_80404E28(s32 ch);
extern s32 func_80404F04(s32 ch);
extern s32 func_80404F3C(s32 ch);
extern s32 func_80405598(s32 ch);
extern void func_80405F48(Menu *menu);
extern void func_804426E4(char *, char *, Player *, Slot *, char *);
void func_804070F4(Menu *menu)
{
  Menu *new_var3;
  int new_var;
  char *new_var2;
  s32 ch;
  new_var = 1;
  D_800E28C4 = 2;
  D_80153750 = 0;
  D_8015376C = 0;
  D_80153760 = new_var;
  D_8015377C = 0;
  D_80153784 = 0;
  D_8015375C = 0;
  ch = menu->slot->channel;
  if (D_800E28C0 != 0)
  {
    D_80153784 = 1;
    func_804426E4(D_8014561C, D_450BD0, menu->player, menu->slot, 0);
    return;
  }
  menu->owner->flags &= ~0x01000000;
  func_80404E28(menu->slot->channel);
  new_var = 0;
  if (func_80404F04(ch) == new_var)
  {
    func_80405F48(menu);
    return;
  }
  D_80153784 = 1;
  if (func_80404F3C(ch) != new_var)
  {
    new_var2 = D_44F67C;
    func_804426E4(D_8014561C, new_var2, menu->player, menu->slot, (char *) 1);
  }
  else
  {
    new_var3 = menu;
    if (func_80405598(ch) != 0)
    {
      func_804426E4(D_8014561C, D_44F994, new_var3->player, menu->slot, D_44F100);
    }
    else
    {
      func_804426E4(D_8014561C, D_44F610, new_var3->player, new_var3->slot, D_450BD0);
    }
  }
}
