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

typedef struct func_8022B7E8_S1 func_8022B7E8_S1;
typedef struct func_8022B7E8_S2 func_8022B7E8_S2;
struct func_8022B7E8_S1 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x11E4 - 0x5DC - sizeof(void*)];
    f32 unk11E4;
    char pad11E4[0x13E0 - 0x11E4 - sizeof(f32)];
    void* unk13E0;
};
struct func_8022B7E8_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x5D8 - 0x100 - sizeof(s32)];
    char* unk5D8;
};

void func_8022B7E8(void *arg0, void *arg1) {
    char *state = arg0;
    char *source = arg1;
    void *owner;
    void *payload;
#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
    Game *game;
    Settings *settings;
#endif

    if (((func_8022B7E8_S1 *)(state))->unk11E4 != 0.0f) {
        return;
    }

    func_8025DF54(0xB45);
    ((func_8022B7E8_S1 *)(state))->unk11E4 = D_800C7E0C;
    ((func_8022B7E8_S1 *)(state))->unk13E0 = source;
    owner = ((func_8022B7E8_S1 *)(state))->unk5DC;
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
    if ((((func_8022B7E8_S2 *)(source))->unk100 & 0x300000) == 0) {
        return;
    }

    payload = state + 0x13EC;
    func_802C2410(payload, RESOURCE(D_800D71E8),
                  ((func_8022B7E8_S2 *)(source))->unk5D8 + 0x84);
    func_80237E70(GAME, ((func_8022B7E8_S1 *)(state))->unk5DC, payload);
    func_80237E70(GAME, ((func_8022B7E8_S1 *)(state))->unk5DC, RESOURCE(D_800D71EC));
}
