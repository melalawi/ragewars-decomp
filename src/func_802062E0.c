/* Spawns effect kind at an actor's position through func_8028FFB0 in D_80131600's list: kind 0xBD7
   is skipped while both of D_801468A0's flags at 0x78 and 0x80 are set, and kind 0x1388 is offset by
   the variant byte at D_800E4680 when option D_801462D5 is 1 (skipped for variant 0); a spawned node
   has its word at 0x1A0 cleared, takes one charge from the owner and starts effect 0x11D at its own
   position through func_80216288. */
#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3Words;

typedef struct {
    Vec3Words v;
    s32 w;
} Params;

typedef struct {
    char pad0[0x8];
    Vec3Words pos;
} Node;

extern char D_80131600;
typedef struct {
    char pad0[0x78];
    s32 flag78;
    s32 pad7C;
    s32 flag80;
} Settings;

extern Settings D_801468A0;
extern u8 D_801462D5;
extern u8 *D_800E4680;
extern Node *func_8028FFB0(char *, void *, s32, Vec3Words, Vec3Words, s32, s32);
extern void func_80216288(Node *, s32, Vec3Words, s32);

void func_802062E0(void *actor, void *owner, Params params, s32 kind) {
    Node *node;
    Settings *settings;

    if (kind == 0xBD7) {
        settings = &D_801468A0;
        if (settings->flag78 != 0 && settings->flag80 != 0) {
            return;
        }
    }
    if (kind == 0x1388 && D_801462D5 == 1) {
        kind = *D_800E4680 + 0x1388;
        if (kind == 0x1388) {
            return;
        }
    }
    node = func_8028FFB0(&D_80131600, (char *) owner + 0x124, kind,
                         *(Vec3Words *) ((char *) actor + 0x1C), params.v, params.w, 0);
    if (node != 0) {
        *(s32 *) ((char *) node + 0x1A0) = 0;
        *(s32 *) ((char *) owner + 0x128) -= 1;
        func_80216288(node, 0x11D, node->pos, 0);
    }
}
