/* Opens the screen D_800E4F60: allocates its 0x470-byte state for the window, sets up the list,
   the left and right arrows (shifted by their width and snapped to 4 pixels), the labels and
   items of the window with their alpha and visibility, resets the selection and the counters at
   D_80154024, clears the pending flag at 0x91 of the eight D_80146398 records, places the four
   character models (ids 0xEA6 to 0xEA9, x 0, -6, -13, -19) and a fifth model 0xEA6, then issues
   request 0xE78 through func_8025DF54 and calls func_804221A0; returns zero. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    s16 x;
    char pad16[0x18 - 0x16];
    s16 width;
} Item;

typedef struct {
    char data[0xC0];
} Model;

typedef struct {
    s32 window;
    char pad4[0x8 - 0x4];
    Model models[5];
    char pad3C8[0x3C8 - 0x3C8];
    s32 list;
    Item *left;
    s32 leftCount;
    Item *right;
    s32 rightCount;
    s32 unk3DC;
    s32 unk3E0;
    s32 text3E4;
    Item *unk3E8;
    Item *label;
    Item *unk3F0;
    char text[0x434 - 0x3F4];
    s32 category;
    s32 selection;
    Item *item;
    Item *unk440;
    Item *unk444;
    Item *unk448;
    Item *unk44C;
    Item *unk450;
    Item *unk454;
    Item *unk458;
    s32 unk45C;
    s32 unk460;
    s32 unk464;
    s32 unk468;
    s32 unk46C;
} Screen;

extern Screen *D_800E4F60;
extern s32 D_80154024[];
typedef struct {
    char pad0[0x78];
    u8 unk78;
    char pad79[0x91 - 0x79];
    u8 unk91;
    char pad92[0x96 - 0x92];
} Record;

extern Record D_80146398[];
extern f32 D_800E1AA0;
extern f32 D_800E1AA8;
extern f32 D_800E1AB0;
extern f32 D_800E1AB8;
static inline f32 read_float(f32 *value) {
    return *value;
}

extern void *func_80252FFC(s32 size);
extern s32 func_8041B690(s32, s32);
extern void func_8041B768(s32, s32, s32);
extern Item *func_8040ECB0(s32, s32);
extern void func_8040E958(Item *, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_8042B260(void);
extern void func_8042AB70(void);
extern void func_8042B1C0(void);
extern void func_802A338C(void);
extern void func_802A33BC(s32);
extern void func_80439D3C(Model *, s32, Vec3, Vec3);
extern void func_80439DC0(Model *, Vec3);
extern void func_80439E10(Model *, Vec3);
extern void func_8025DF54(s32);
extern void func_804221A0(void);

s32 func_80429C10(s32 window) {
    Vec3 scale;
    Vec3 position;
    Vec3 rotation;
    Vec3 offset;
    Item *item1, *item2, *item3, *item4, *item5, *item6, *item7, *item8;
    f32 z;
    Record *record;
    s32 *counter;
    s32 i;
    s32 x;
    s32 id;

    D_800E4F60 = func_80252FFC(sizeof(Screen));
    D_800E4F60->window = window;
    D_800E4F60->list = func_8041B690(window, 4);
    func_8041B768(window, 0, 0x2FF);
    func_8041B768(window, 1, 0x2FF);
    func_8041B768(window, 2, 0x2FF);
    func_8041B768(window, 3, 0x2FF);
    D_800E4F60->unk3DC = 1;
    D_800E4F60->unk45C = 0;
    D_800E4F60->unk3E0 = 4;

    item1 = func_8040ECB0(window, 0x306);
    D_800E4F60->left = item1;
    item1->x -= item1->width;
    D_800E4F60->leftCount = D_800E4F60->left->width / 4;
    x = D_800E4F60->left->width - D_800E4F60->leftCount * 4;
    D_800E4F60->left->x += x;

    item2 = func_8040ECB0(window, 0x30F);
    D_800E4F60->right = item2;
    item2->x += item2->width;
    D_800E4F60->rightCount = D_800E4F60->right->width / 4;
    x = D_800E4F60->right->width - D_800E4F60->rightCount * 4;
    D_800E4F60->right->x -= x;

    func_8040ECB0(window, 0x30A)->alpha = 0x6E;
    item3 = func_8040ECB0(window, 0x35D);
    D_800E4F60->unk448 = item3;
    item3->alpha = 0x41;
    func_8040E958(D_800E4F60->unk448, 0);
    D_800E4F60->text3E4 = func_80419ED4(0x303, 0x6E);
    item4 = func_8040ECB0(window, 0x301);
    D_800E4F60->unk3E8 = item4;
    func_8040E958(item4, 0);
    D_800E4F60->label = func_8040ECB0(window, 0x30E);
    D_800E4F60->unk3F0 = func_8040ECB0(window, 0x310);
    func_8042B260();
    D_800E4F60->selection = 0;
    D_800E4F60->category = 0;
    func_8042AB70();
    func_8042B1C0();
    counter = D_80154024;
    counter[0] = 0;
    counter[-1] = -1;
    D_800E4F60->unk454 = func_8040ECB0(window, 0x308);
    func_8040ECB0(window, 0x309)->alpha = 0x6E;
    D_800E4F60->unk46C = 0;
    item5 = func_8040ECB0(window, 0x30B);
    D_800E4F60->unk440 = item5;
    item5->alpha = 0x8C;
    func_8040E958(D_800E4F60->unk440, 1);
    item6 = func_8040ECB0(window, 0x30D);
    D_800E4F60->unk444 = item6;
    item6->alpha = 0x8C;
    func_8040E958(D_800E4F60->unk444, 0);
    item7 = func_8040ECB0(window, 0x30C);
    D_800E4F60->unk44C = item7;
    item7->alpha = 0xFF;
    D_800E4F60->unk450 = func_8040ECB0(window, 0x2FE);
    item8 = func_8040ECB0(window, 0x300);
    D_800E4F60->unk458 = item8;
    func_8040E958(item8, 1);
    func_802A338C();
    D_800E4F60->unk460 = 0;
    D_800E4F60->unk464 = 0;
    D_800E4F60->unk468 = -1;

    for (i = 0; i < 8; i++) {
        record = &D_80146398[i];
        if (record->unk91 == 1) {
            record->unk78 = 0;
            record->unk91 = 0;
        }
    }
    func_802A33BC(1);

    x = 0;
    id = 0;
    scale.x = D_800E1AA0;
    scale.y = D_800E1AA0;
    scale.z = D_800E1AA0;
    rotation.x = 0.0f;
    rotation.y = 0.0f;
    rotation.z = 0.0f;
    offset.x = 0.0f;
    offset.y = read_float(&D_800E1AA0 + 1);
    offset.z = 0.0f;
    for (i = 0; i < 4; i++) {
        switch (i) {
        case 0:
            x = 0;
            id = 0xEA6;
            break;
        case 1:
            x = -6;
            id = 0xEA7;
            break;
        case 2:
            x = -13;
            id = 0xEA8;
            break;
        case 3:
            x = -19;
            id = 0xEA9;
            break;
        }
        position.x = x;
        position.y = read_float(&D_800E1AA8);
        z = read_float(&D_800E1AA8 + 1);
        position.z = z;
        func_80439D3C(&D_800E4F60->models[i], id, scale, position);
        func_80439DC0(&D_800E4F60->models[i], rotation);
        func_80439E10(&D_800E4F60->models[i], offset);
    }
    scale.x = D_800E1AB0;
    scale.y = D_800E1AB0;
    scale.z = D_800E1AB0;
    position.z = z;
    position.x = read_float(&D_800E1AB0 + 1);
    position.y = D_800E1AB8;
    func_80439D3C(&D_800E4F60->models[4], 0xEA6, scale, position);
    func_80439DC0(&D_800E4F60->models[4], rotation);
    func_80439E10(&D_800E4F60->models[4], offset);
    func_8025DF54(0xE78);
    func_804221A0();
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC720_4 = 0.0179999992f;
const float unbake_rodata_800DC724_4 = 5.0f;
const float unbake_rodata_800DC728_4 = 13.0f;
const float unbake_rodata_800DC72C_4 = (-50.0f);
const float unbake_rodata_800DC730_4 = 0.0399999991f;
const float unbake_rodata_800DC734_4 = 17.0f;
const float unbake_rodata_800DC738_4 = (-10.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1AA0_4 = 0.0179999992f;
const float unbake_rodata_800E1AA4_4 = 5.0f;
const float unbake_rodata_800E1AA8_4 = 13.0f;
const float unbake_rodata_800E1AAC_4 = (-50.0f);
const float unbake_rodata_800E1AB0_4 = 0.0399999991f;
const float unbake_rodata_800E1AB4_4 = 17.0f;
const float unbake_rodata_800E1AB8_4 = (-10.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800EE0F0_4 = 0.0179999992f;
const float unbake_rodata_800EE0F4_4 = 5.0f;
const float unbake_rodata_800EE0F8_4 = 13.0f;
const float unbake_rodata_800EE0FC_4 = (-50.0f);
const float unbake_rodata_800EE100_4 = 0.0399999991f;
const float unbake_rodata_800EE104_4 = 17.0f;
const float unbake_rodata_800EE108_4 = (-10.0f);
#endif
