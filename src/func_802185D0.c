/* Draws the team selection menu: each listed team icon is placed in the player's viewport, tinted
   with a pulsing shade under the cursor at 0x6C or grey 150 at three quarters alpha otherwise, faded by
   the menu's opening and the options fade D_801462DE and drawn scaled to the viewport and its size,
   and the "Select Team" title is drawn in white centred on the viewport. Adapted from func_80217630
   with 0x1C-byte items, the grey tint and the title added, reusing the scale and position variables
   for the title. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 slot;
    Vec3f position;
    s32 icon;
    f32 width;
    f32 height;
} Item;

typedef struct {
    s32 active;
    s32 pad4;
    f32 open;
    char padC[0x14 - 0xC];
    f32 phase;
    char pad18[0x6C - 0x18];
    s32 cursor;
} Menu;

typedef struct {
    char pad[0x29C];
    f32 viewport[4];
} View;

typedef struct {
    char pad[0x5DC];
    View *view;
} Player;

extern u8 D_801462DE;
extern Gfx *D_80110634;
extern s32 D_800E28D0;
extern char D_800C7350[]; /* "Select Team" */
extern void func_802AB940(s32, s32, s32 *, s32 *);
extern f32 func_802BB630(f32);
extern void func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
extern void func_802A94E8(void);
extern void func_802ABB58(f32, f32);
extern void func_802ABB2C(s32, s32, s32, s32, s32, s32);
extern void func_802A9F18(char *, s32, s32, s32, s32, s32, f32, f32);

void func_802185D0(Menu *menu, Item *items, s32 count, Player *player) {
    s32 width;
    s32 height;
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
    View *view;
    View *titleView;
    f32 *viewport;
    Item *item;

    titleView = player->view;
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
                red = func_802BB630(menu->phase) * 63.0f + 192.0f;
                alpha = 1.0f;
                green = red;
                blue = red;
            } else {
                red = 150;
                green = red;
                blue = red;
                alpha *= 0.75f;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->w0 = 0xFB000000;
                cmd->w1 = (red << 24) | ((green & 0xFF) << 16) | ((blue & 0xFF) << 8)
                    | ((u32) (alpha * fade) & 0xFF);
            }
            func_802ABC18(item->icon, 0, x - width * item->height * scaleX * 0.5f,
                          y - height * item->height * scaleY * 0.5f,
                          scaleX * item->height, scaleY * item->height, 1);
        }
        item++;
    }
    scaleY = titleView->viewport[1] / *(&D_800E28D0 + 1);
    scaleX = titleView->viewport[0] / D_800E28D0;
    func_802A94E8();
    func_802ABB58(0.6f, 0.6f);
    func_802ABB2C(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
    x = viewport[2] + viewport[0] * 0.5f;
    y = viewport[3] + viewport[1] * 0.5f;
    func_802A9F18(D_800C7350, x, y, 0xC8, 1, 1, scaleX, scaleY);
}
