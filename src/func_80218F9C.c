/* Lays out the four team choices around the open menu and draws their icons. */
typedef signed int s32;
typedef float f32;
typedef struct { f32 x, y, z; } Vec3f;
typedef struct { f32 m[16]; } Matrix;
typedef struct {
    s32 slot;
    Vec3f position;
    s32 icon;
    f32 width;
    f32 height;
} Item;
typedef struct {
    s32 team;
    s32 unused;
    f32 angle;
    s32 unused2;
    f32 scale;
} Slot;
typedef struct {
    s32 active;
    s32 unused;
    f32 open;
    char padC[0x10];
    Slot slots[4];
    s32 cursor;
} Menu;
extern f32 D_800CE3C8;
extern f32 func_80274878(f32, f32, f32);
extern void func_80272848(Matrix *);
extern void func_80273CD8(Matrix *, f32);
extern void func_80272908(Matrix *, Vec3f *, Vec3f *);
extern void func_802185D0(Menu *, Item *, s32, void *);

void func_80218F9C(Menu *menu, s32 arg1, void *player) {
    Matrix matrix;
    Vec3f position;
    Item items[4];
    Vec3f offset;
    s32 i;
    Slot *slot;
    Item *item;
    f32 target;

    if (menu->active != 0) {
        offset.x = 0.0f;
        item = items;
        offset.y = -0.6f - (0.4f - menu->open * 0.4f);
        offset.z = 0.0f;
        for (i = 0; i < 4; i++) {
            slot = &menu->slots[i];
            if (i == menu->cursor) {
                target = *(&D_800CE3C8 + 1) * 1.3f;
            } else {
                target = *(&D_800CE3C8 + 1);
            }
            slot->scale = func_80274878(slot->scale, target, *(&D_800CE3C8 + 1) * 0.1f);
            func_80272848(&matrix);
            func_80273CD8(&matrix, slot->angle);
            func_80272908(&matrix, &offset, &position);
            item->slot = i;
            item->position = position;
            item->icon = i + 0xC1C;
            item->width = 1.0f;
            item->height = 1.0f;
            item++;
        }
        func_802185D0(menu, items, 4, player);
    }
}
