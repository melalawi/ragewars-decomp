#include "basetypes.h"

/* Places the models of the first two active players on the screen D_800E4690: calls
   func_802A33BC(1) and func_802A338C, clears the word at 0xA58, and for each player whose 150-byte
   status record in D_80146398 has byte 0x78 equal to one maps its kind byte at 0x80 to a 0x70-byte
   row of D_800E3A58 through func_8041F1B0 and shows object 0x38F plus the kind through
   func_8041CB48 in the next 0x4A8-byte view from 0x20 of the screen, using layout 0 of the row
   (uniform scale, position, float and word) for the first model and layout 2 for the second.
   Returns zero. */

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

struct Row {
    s32 pad0;
    f32 scale[4];
    f32 distance[4];
    Vec3 position[4];
    s32 light[4];
    char pad64[0x70 - 0x64];
};

struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[0x80 - 0x79];
    s8 kind;
    char pad81[150 - 0x81];
};

struct Screen {
    char pad0[0xA58];
    s32 wordA58;
};

extern struct Screen *D_800E4690;
extern struct Status D_80146398[];
extern struct Row D_800E3A58[];
extern void func_802A33BC(s32);
extern void func_802A338C();
extern s32 func_8041F1B0(s32);
extern void func_8041CB48(void *, s32, s32, s32, s32, Vec3, Vec3, f32, s32);

s32 func_80426968(void) {
    s32 shown;
    s32 layout;
    s32 view;
    s32 row;
    s32 i;
    Vec3 scale;
    struct Status *status;
    s32 offset;

    func_802A33BC(1);
    func_802A338C();
    shown = 0;
    layout = 0;
    i = 0;
    offset = 0;
    view = 0x20;
    D_800E4690->wordA58 = 0;
next:
    status = (struct Status *)((char *)D_80146398 + offset);
    if (status->active == 1) {
        shown++;
        row = func_8041F1B0(status->kind);
        scale.x = D_800E3A58[row].scale[layout];
        scale.y = D_800E3A58[row].scale[layout];
        scale.z = D_800E3A58[row].scale[layout];
        func_8041CB48((char *)D_800E4690 + view, 9, status->kind + 0x38F, 0x4B, 0x5DC0, scale,
                      D_800E3A58[row].position[layout], D_800E3A58[row].distance[layout],
                      D_800E3A58[row].light[layout]);
        view += 0x4A8;
        layout = 2;
        if (shown >= layout) {
            goto done;
        }
    }
    i++;
    offset += 150;
    if (i < 4) {
        goto next;
    }
done:
    return 0;
}
