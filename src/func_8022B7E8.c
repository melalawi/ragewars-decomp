#include "basetypes.h"

/** Start the actor effect and attach optional source-specific resources; the European cartridges pick
    each resource from a per-language table. */

#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
typedef struct {
    char pad0[0x581];
    u8 language;
} Settings;

typedef struct {
    char pad0[0x1240];
    Settings settings;
} Game;

extern Game D_80145088;
extern void *D_800D71E0[];
extern void *D_800D71E8[];
extern void *D_800D71EC[];
#define RESOURCE(table) table[settings->language]
#define GAME game
#else
extern char D_80145088;
extern void *D_800D71E0;
extern void *D_800D71E8;
extern void *D_800D71EC;
#define RESOURCE(table) table
#define GAME &D_80145088
#endif

extern f32 D_800C7E0C;

extern s32 func_8025DF54(s32);
extern void func_80237E70(void *arg0, void *arg1, void *arg2);
extern void func_802C2410(void *arg0, void *arg1, void *arg2);

void func_8022B7E8(void *arg0, void *arg1) {
    char *state = arg0;
    char *source = arg1;
    void *owner;
    void *payload;
#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
    Game *game;
    Settings *settings;
#endif

    if (*(f32 *)(state + 0x11E4) != 0.0f) {
        return;
    }

    func_8025DF54(0xB45);
    *(f32 *)(state + 0x11E4) = D_800C7E0C;
    *(void **)(state + 0x13E0) = source;
    owner = *(void **)(state + 0x5DC);
    if (owner == 0) {
        return;
    }

#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
    game = &D_80145088;
    settings = &game->settings;
#endif
    func_80237E70(GAME, owner, RESOURCE(D_800D71E0));
    if (source == 0) {
        return;
    }
    if (*(u8 *)source != 1) {
        return;
    }
    if ((*(s32 *)(source + 0x100) & 0x300000) == 0) {
        return;
    }

    payload = state + 0x13EC;
    func_802C2410(payload, RESOURCE(D_800D71E8),
                  *(char **)(source + 0x5D8) + 0x84);
    func_80237E70(GAME, *(void **)(state + 0x5DC), payload);
    func_80237E70(GAME, *(void **)(state + 0x5DC), RESOURCE(D_800D71EC));
}
