#include "basetypes.h"

/* Draws join request r on the screen D_800E39C0: hides the request's row item (0x8 plus four per
   request) when r is past the last row at 0x1C or the request's id is negative; otherwise sets
   alpha 0x7D on the row's items 0x38D, 0x38F, 0x38E, 0x390 and 0x391, giving 0x38D the image word
   of the model row func_8041F1B0 maps the id to in D_800E3A58, copying the model name from the
   3 by 17 table D_800E381C (column func_8041ECB4 of the request's variant) into the request's name
   and pointing 0x38F at it, pointing 0x38E at the variant label D_800E39B4, and giving 0x390 and
   0x391 the two words of the colour entry D_800E3790 the request's word at 0x8 selects. Written
   from the assembly. */

struct Item {
    char pad[0x10];
    u8 alpha;
    char pad11[0x2C - 0x11];
    s32 image;
    char pad30[0x38 - 0x30];
    char *text;
};

struct Screen {
    char pad0[0x8];
    void *rows[3];
    char pad14[0x1C - 0x14];
    s32 last;
};

struct Request {
    s32 id;
    s32 variant;
    s32 colour;
    s32 wordC;
    char name[28 - 0x10];
};

struct Model {
    s32 id;
    char **name;
};

struct Colour {
    s32 first;
    s32 second;
};

struct ModelRow {
    s32 image;
    char pad4[0x70 - 0x4];
};

extern struct Screen *D_800E39C0;
extern struct Request D_80153F80[];
extern struct Model D_800E381C[][17];
extern struct ModelRow D_800E3A58[];
extern char **D_800E39B4[];
extern struct Colour D_800E3790[];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(void *, s32);
extern s32 func_8041F1B0(s32);
extern s32 func_8041ECB4(s32, s32);
extern void func_802A125C(char *, char *);

void func_8041E478(s32 request) {
    void *row;
    struct Item *item;

    row = D_800E39C0->rows[request];
    if (D_800E39C0->last < request || D_80153F80[request].id < 0) {
        func_8040E958(row, 0);
        return;
    }
    item = func_8040ECB0(row, 0x38D);
    item->alpha = 0x7D;
    item->image = D_800E3A58[func_8041F1B0(D_80153F80[request].id)].image;
    item = func_8040ECB0(row, 0x38F);
    item->alpha = 0x7D;
    func_802A125C(D_80153F80[request].name,
                  *D_800E381C[D_80153F80[request].variant]
                       [func_8041ECB4(D_80153F80[request].variant, D_80153F80[request].id)].name);
    item->text = D_80153F80[request].name;
    item = func_8040ECB0(row, 0x38E);
    item->alpha = 0x7D;
    item->text = *D_800E39B4[D_80153F80[request].variant];
    item = func_8040ECB0(row, 0x390);
    item->alpha = 0x7D;
    item->image = D_800E3790[D_80153F80[request].colour].first;
    item = func_8040ECB0(row, 0x391);
    item->alpha = 0x7D;
    item->image = D_800E3790[D_80153F80[request].colour].second;
}
