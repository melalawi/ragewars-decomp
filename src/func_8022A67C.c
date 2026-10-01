/** Start the round-end sequence once no menu or transition is active and any player is flagged. */
extern int func_80245788(void);
extern int func_80245774(void);
extern int D_8013B29C;
typedef struct State {
    char pad0[0x1C];
    int armed;
    int active;
} State;

extern State D_801468A0;

#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct func_8022A67C_S1 func_8022A67C_S1;
struct func_8022A67C_S1 {
    char pad0[0x20];
    Player* unk20;
};

int func_8022A67C(char *arg0) {
    Player *p;
    int count;
    State *s;
    State *t;

    if (func_80245788() != 0 || func_80245774() != 0 || D_8013B29C != 0) {
        return 0;
    }
    t = &D_801468A0;
    if (t->active != 0 || t->armed == 0) {
        return 0;
    }
    count = 0;
    for (p = ((func_8022A67C_S1 *)(arg0))->unk20; p != 0; p = p->views16E0.view16E0_1.next) {
        if (p->views5D8.view5D8_5.info[0x8E] == 1) {
            count++;
        }
    }
    if (count <= 0) {
        return 0;
    }
    s = &D_801468A0;
    s->active = 1;
    s->armed = 0;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C54D0_40[] = {0x002974C8U, 0x00297500U, 0x00297554U, 0x00297554U, 0x002974A8U, 0x002974A8U, 0x002974A8U, 0x002974A8U, 0x00297554U, 0x00297554U, 0x00297554U, 0x00297554U, 0x00297554U, 0x00297554U, 0x00297524U, 0x0029753CU};
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CA800_8 = 1000.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5660_4 = (-0.667424023f);
const float unbake_rodata_800C5664_4 = 0.953462005f;
const float unbake_rodata_800C5668_4 = (-0.57207799f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5680_4 = 122.879997f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54D8_4 = 1.0f;
#endif
