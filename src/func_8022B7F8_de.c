#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "types.h"

/** Start the actor effect and attach optional source-specific resources; the European cartridges pick
    each resource from a per-language table. */

#if defined(VERSION_EU) || defined(VERSION_EU_X)




extern Game_func_8022B7F8_de D_80140FC8;
extern void *D_800D31B4_de[];
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern void *D_800E1144[];
#else
extern void *D_800D31BC[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern void *D_800E1154[];
#else
extern void *D_800D31C0[];
#endif
#else
extern char D_80140FC8;
extern void *D_800D31B4_de;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern void *D_800E1144;
#else
extern void *D_800D31BC;
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern void *D_800E1154;
#else
extern void *D_800D31C0;
#endif
#endif

extern f32 D_800C2D1C_de;

extern s32 func_8025DF34_de(s32);
extern void func_80237E80_de(void *arg0, void *arg1, void *arg2);
extern void func_802BD320_de(void *arg0, void *arg1, void *arg2);






void func_8022B7F8_de(void *arg0, void *arg1) {
    char *state = arg0;
    char *source = arg1;
    void *owner;
    void *payload;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    Game_func_8022B7F8_de *game;
    MenuSettings *settings;
#endif

    if (((func_8022B7E8_S1 *)(state))->unk11E4 != 0.0f) {
        return;
    }

    func_8025DF34_de(0xB45);
    ((func_8022B7E8_S1 *)(state))->unk11E4 = D_800C2D1C_de;
    ((func_8022B7E8_S1 *)(state))->unk13E0 = source;
    owner = ((func_8022B7E8_S1 *)(state))->unk5DC;
    if (owner == 0) {
        return;
    }

#if defined(VERSION_EU) || defined(VERSION_EU_X)
    game = &D_80140FC8;
    settings = &game->settings;
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_80237E80_de(game, owner, D_800D31B4_de[settings->language]);
#else
    func_80237E80_de(&D_80140FC8, owner, D_800D31B4_de);
#endif
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
#if defined(VERSION_EU) || defined(VERSION_EU_X)
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_802BD320_de(payload, D_800E1144[settings->language],
#else
    func_802BD320_de(payload, D_800E1144,
#endif
#else
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_802BD320_de(payload, D_800D31BC[settings->language],
#else
    func_802BD320_de(payload, D_800D31BC,
#endif
#endif
                  ((func_8022B7E8_S2 *)(source))->unk5D8 + 0x84);
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_80237E80_de(game, ((func_8022B7E8_S1 *)(state))->unk5DC, payload);
#else
    func_80237E80_de(&D_80140FC8, ((func_8022B7E8_S1 *)(state))->unk5DC, payload);
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_80237E80_de(game, ((func_8022B7E8_S1 *)(state))->unk5DC, D_800E1154[settings->language]);
#else
    func_80237E80_de(&D_80140FC8, ((func_8022B7E8_S1 *)(state))->unk5DC, D_800E1154);
#endif
#else
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    func_80237E80_de(game, ((func_8022B7E8_S1 *)(state))->unk5DC, D_800D31C0[settings->language]);
#else
    func_80237E80_de(&D_80140FC8, ((func_8022B7E8_S1 *)(state))->unk5DC, D_800D31C0);
#endif
#endif
}
