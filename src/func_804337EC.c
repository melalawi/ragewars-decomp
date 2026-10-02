/* Updates a player menu state from controller status, available saves, and the current menu phase. */

#include "shared/pak_menu_controller.h"
#include "shared/menu_language.h"


extern PakMenuController *D_800E54A4;
extern void *D_800D7700;
extern s32 func_80404F04(s32);
extern s32 func_80404BE8(void *, s32, s32 *);
extern s32 func_80434814(s32, s32);
extern s32 func_80435304(s32);
extern s32 func_80435360(s32);
extern s32 func_80435AE8(s32);
extern s32 func_80274544(void);
extern void func_80432488(s32);
#if defined(VERSION_EU)
extern void *D_800E25A4[];
#elif defined(VERSION_EU_X)
extern void *D_800DDEB0[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
void func_804337EC(s32 player)
{
  s32 random;
  s32 done = 1;
  s32 result;
  s32 status = func_80404F04(player);
  short one = done;
  do
  {
    switch (status)
    {
      case -4:

      case -3:

      case -1:
        D_800E54A4->players[player].state = 3;
        break;

      case 0:
        if (D_800E54A4->phase == 6)
      {
        D_800E54A4->players[player].state = D_800E54A4->players[player].next;
      }
      else
        if (func_80404BE8(RW_LOCALIZED_TEXT(D_800D7700, D_800E25A4, D_800DDEB0, D_80152789), player, &result) == one)
      {
        if (func_80434814(player, result) == one)
        {
          D_800E54A4->players[player].state = D_800E54A4->players[player].next;
          switch (D_800E54A4->phase)
          {
            case 0:
              if (func_80435304(player) == (-1))
            {
              D_800E54A4->players[player].state = 24;
            }
              break;

            case 7:
              if (func_80435360(player) == one)
            {
              D_800E54A4->players[player].state = 15;
            }
              break;

            case 2:
              if (func_80435360(player) == one)
            {
              D_800E54A4->players[player].state = 25;
            }
            else
              if ((D_800E54A4->players[player].host == one) && (func_80435304(player) == (-1)))
            {
              D_800E54A4->players[player].state = 24;
            }
              break;

            case 5:
              if (func_80435AE8(player) == 0)
            {
              D_800E54A4->players[player].state = 21;
            }
              break;

          }

        }
      }
      else
      {
        switch (D_800E54A4->phase)
        {
          case 0:

          case 1:

          case 7:
            random = func_80274544();
            D_800E54A4->players[player].state = 15;
            D_800E54A4->players[player].profile = (random % 9999999) + 1;
            break;

          case 5:
            D_800E54A4->players[player].state = 21;
            break;

          case 4:
            D_800E54A4->players[player].state = D_800E54A4->players[player].next;
            break;

          case 2:

          case 3:
            D_800E54A4->players[player].state = 25;
            break;

        }

      }
        break;

      case -5:

      case -2:

      default:
        D_800E54A4->players[player].state = one;
        break;

    }

  }
  while (done == 0);
  func_80432488(player);
}
