/* Chooses a different enabled random character, updates its preview and selects an available costume. */
#include "basetypes.h"

typedef struct Vec {
    f32 x;
    f32 y;
    f32 z;
} Vec;

typedef struct Row {
    s32 choice;
    s32 phase;
    s32 costume;
    char padC[4];
    char preview[0x4A8];
    char tail[0x10];
} Row;

typedef struct Selection {
    void *screen;
    char pad4[0xC];
    Row rows[8];
} Selection;

typedef struct Choice {
    s32 id;
    char pad4[8];
    f32 scale[4];
    f32 angle[4];
    Vec position[4];
    s32 flags[4];
    char pad6C[4];
} Choice;

extern Selection *D_800E42D0;
extern Choice D_800E3A50[];
extern u8 D_80102B57[][0x190];
extern s32 func_80274544(void);
extern s32 func_8040EC50(void *widget);
extern s32 func_8041F248(s32 id);
extern s32 func_8041F1FC(s32 id);
extern void *func_8040ECB0(void *parent, s32 id);
extern void func_8041CB48(void *preview, s32 a1, s32 model, s32 a3, s32 a4, Vec scale, Vec position, f32 angle, s32 flags);

void func_804208C0(s32 player) {
    s32 tries;
    s32 done;
    s32 id;
    s32 kind;
    s32 index;
    s32 costumes;

    tries = 0;
    done = 0;
    do {
        id = D_800E3A50[func_80274544() % 17].id;
        if (func_8040EC50(func_8040ECB0(D_800E42D0->screen, (u16)id)) == 0 && D_800E42D0->rows[player].choice != id) {
            done = 1;
        } else if (++tries > 5000) {
            id = 0x92;
            done = 1;
        }
    } while (!done);
    D_800E42D0->rows[player].choice = id;
    kind = func_8041F248(id);
    index = func_8041F1FC(D_800E42D0->rows[player].choice);
    {
        Vec scale;
        scale.x = D_800E3A50[index].scale[player];
        scale.y = D_800E3A50[index].scale[player];
        scale.z = D_800E3A50[index].scale[player];
        func_8041CB48(D_800E42D0->rows[player].preview, 9, kind + 0x38F, 75, 24000, scale,
                      D_800E3A50[index].position[player], D_800E3A50[index].angle[player],
                      D_800E3A50[index].flags[player]);
    }
    costumes = D_80102B57[player][kind];
    if (costumes <= 0) {
        costumes = 1;
    }
    D_800E42D0->rows[player].costume = func_80274544() % costumes;
}
