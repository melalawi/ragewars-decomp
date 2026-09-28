#include "basetypes.h"

/* Steps the model of the join request the screen D_800E39C0 edits (index at 0x14) forward on event 1
   unless func_8029A9A0 reports 0x16: calls func_8029A73C, finds the request's place in the 3 by 17
   model table D_800E381C through func_8041ECB4, walks forward through its variants and, past the
   last, to the first variant of the next model (wrapping to the first), skipping entries whose
   id is -1, then stores the variant at 0x4 and 0xC and the id at 0x0 of the 28-byte request in
   D_80153F80, copies the name of the entry the found id selects in that variant row to 0x10, redraws through func_8041E478 and plays sound
   0xE81. Returns zero. Adapted from func_8041E170 with the walk direction reversed. */

struct Model {
    s32 id;
    char **name;
};

struct Request {
    s32 id;
    s32 variant;
    s32 word8;
    s32 variantC;
    char name[28 - 0x10];
};

struct Screen {
    char pad[0x14];
    s32 request;
};

extern struct Screen *D_800E39C0;
extern struct Model D_800E381C[][17];
extern struct Request D_80153F80[];
extern void func_8029A73C();
extern s32 func_8029A9A0(s32);
extern s32 func_8041ECB4(s32, s32);
extern void func_802A125C(char *, char *);
extern void func_8041E478(s32);
extern void func_8025DF54(s32);

s32 func_8041E2F0(void *arg0, void *arg1, void *arg2, s32 event) {
    s32 variant;
    s32 model;
    s32 id;

    if (event != 1) {
        return 0;
    }
    func_8029A73C();
    if (func_8029A9A0(0) == 0x16) {
        return 0;
    }
    variant = D_80153F80[D_800E39C0->request].variant;
    model = func_8041ECB4(variant, D_80153F80[D_800E39C0->request].id);
    do {
        variant++;
        if (variant >= 3) {
            variant = 0;
            model++;
            if (model >= 17) {
                model = 0;
            }
        }
        id = D_800E381C[variant][model].id;
    } while (id == -1);
    D_80153F80[D_800E39C0->request].variant = variant;
    D_80153F80[D_800E39C0->request].id = id;
    func_802A125C(D_80153F80[D_800E39C0->request].name, *D_800E381C[variant][id].name);
    D_80153F80[D_800E39C0->request].variantC = variant;
    id = D_800E39C0->request;
    func_8041E478(id);
    func_8025DF54(0xE81);
    return 0;
}
