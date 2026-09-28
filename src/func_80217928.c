/* Lays out a player's weapon menu when it is active: for each of the eight slots at 0x1C holding a
   weapon it eases the slot's scale toward its target (1.3 times larger under the cursor at 0x37C),
   turns an offset raised by the menu's opening by the slot's angle to place it, and lists it with its
   weapon's icon from D_800D052C (no icon for weapons outside 0 to 21), then passes the list to
   func_80217630. */
#include "basetypes.h"

typedef struct {
    s32 weapon;
    void *info;
    s32 owned;
    f32 angle;
    s32 y;
    f32 scale;
} Slot;

typedef struct {
    s32 active;
    s32 pad4;
    f32 open;
    char padC[0x1C - 0xC];
    Slot slots[8];
    char pad[0x37C - 0xDC];
    s32 cursor;
} Menu;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 slot;
    s32 weapon;
    Vec3f position;
    s32 icon;
    f32 width;
    f32 height;
} Item;

typedef struct {
    f32 m[16];
} Matrix;

typedef struct {
    char pad[6];
    u16 icon;
} Record;

extern f32 D_800CE388;
extern Record *D_800D052C[];
extern f32 func_80274878(f32, f32, f32);
extern void func_80272848(Matrix *);
extern void func_80273CD8(Matrix *, f32);
extern void func_80272908(Matrix *, Vec3f *, Vec3f *);
extern void func_80217630(Menu *, Item *, s32, s32);

void func_80217928(Menu *menu, s32 arg1, s32 arg2) {
    Matrix matrix;
    Vec3f position;
    Item items[36];
    Vec3f offset;
    s32 count;
    s32 i;
    Slot *slot;
    Item *item;
    f32 target;
    f32 size;
    s32 weapon;

    if (menu->active != 0) {
        offset.x = 0.0f;
        item = items;
        count = 0;
        offset.y = -0.6f - (0.4f - menu->open * 0.4f);
        offset.z = 0.0f;
        for (i = 0; i < 8; i++) {
            slot = &menu->slots[i];
            if (menu->slots[i].weapon != -1) {
                if (i == menu->cursor) {
                    target = *(&D_800CE388 + 1) * 1.3f;
                } else {
                    target = *(&D_800CE388 + 1);
                }
                size = 1.0f;
                slot->scale = func_80274878(slot->scale, target, *(&D_800CE388 + 1) * 0.1f);
                func_80272848(&matrix);
                func_80273CD8(&matrix, slot->angle);
                func_80272908(&matrix, &offset, &position);
                weapon = menu->slots[i].weapon;
                if (weapon < 0) {
                    goto no_icon;
                }
                if (weapon >= 0x16) {
                no_icon:
                    item->icon = item->width = 0;
                    item->slot = i;
                    item->weapon = menu->slots[i].weapon;
                    item->position = position;
                } else {
                    item->slot = i;
                    item->weapon = menu->slots[i].weapon;
                    item->position = position;
                    item->icon = D_800D052C[weapon]->icon;
                    item->width = size;
                    item->height = size;
                }
                item++;
                count++;
            } else {
                item->icon = item->width = 0;
            }
        }
        func_80217630(menu, items, count, arg2);
    }
}
