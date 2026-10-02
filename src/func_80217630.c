#include "shared/func_80217630.h"
#include "shared/player_types.h"
#include "basetypes.h"
#include "n64sdk.h"
/* Draws a player's weapon menu icons: for each listed item it places the icon inside the player's
   viewport from 0x5DC, sets the environment colour to a pulsing grey for the item under the cursor at
   0x37C or to 200 or 100 by whether func_8022EAFC says the player owns the weapon, fades it by the
   item's alpha, the menu's opening and the options fade D_801462DE, and draws the sprite through
   func_802ABC18 scaled to the viewport and the item's size. */









extern u8 D_801462DE;
extern f32 D_800C72F0;
extern f32 D_800C72F8;
extern f32 D_800C7300;
extern f32 D_800C7308;
extern Gfx *D_80110634;
extern void func_802AB940(s32, s32, s32 *, s32 *);
extern f32 func_802BB630(f32);
extern s32 func_8022EAFC(Player *, s32);
extern void func_802ABC18(s32, s32, s16, s16, f32, f32, s32);

void func_80217630(Menu *menu, Item *items, s32 count, Player *player) {
    s32 width;
    s32 height;
    f32 base;
    f32 fade;
    s32 level;
    f32 scaleX;
    f32 scaleY;
    f32 x;
    f32 y;
    f32 alpha;
    s32 red;
    s32 green;
    s32 blue;
    s32 greenBits;
    View *view;
    f32 *viewport;
    Item *item;

    level = D_801462DE + 0x40;
    fade = menu->open * (level < 0x100 ? level : 255.0f);
    item = items;
    while (--count != -1) {
        view = player->view;
        scaleX = view->viewport[0] * (1.0f / 320.0f);
        scaleY = view->viewport[1] * (1.0f / 240.0f);
        viewport = view->viewport;
        x = viewport[2] + viewport[0] * 0.5f + item->position.x * 0.5f * viewport[0];
        y = viewport[3] + viewport[1] * 0.5f + item->position.y * 0.5f * viewport[1];
        alpha = item->width;
        if (item->icon != 0) {
            func_802AB940(item->icon, 0, &width, &height);
            if (menu->cursor == item->slot) {
                blue = red = func_802BB630(menu->phase) * 63.0f + 192.0f;
                alpha = 1.0f;
                green = red;
            } else {
                red = func_8022EAFC(player, item->weapon);
                red = red == 0 ? 100 : 200;
                green = red;
                blue = red;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xFB000000;
                greenBits = (green & 0xFF) << 16;
                cmd->words.w1 = (red << 24) | greenBits | ((blue & 0xFF) << 8)
                    | ((u32) (alpha * fade) & 0xFF);
            }
            func_802ABC18(item->icon, 0, x - width * item->height * scaleX * 0.5f,
                          y - height * item->height * scaleY * 0.5f,
                          scaleX * item->height, scaleY * item->height, 1);
        }
        item++;
    }
}
