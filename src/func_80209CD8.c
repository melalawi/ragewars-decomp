/* Revives a player whose down timer at 0x1340 has run past its limit (30 ticks, or 900 in
   control modes 12 and 15 while D_80146938 asks): clears the timer and calls func_8044A37C
   unless the session at 0x98 is running and the player's team membership at 0x94 and control
   mode disagree, or it is teamless and active outside session mode 3. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct Controls {
    char pad0[0x80];
    s8 mode;
    char pad81[0x94 - 0x81];
    u8 team;
    u8 active;
} Controls;


typedef struct {
    char pad0[0x98];
    s32 running;
    s32 mode;
} Session;

extern Session D_801468A0;
extern s32 D_80146938;
extern void func_8044A37C(Player *);

void func_80209CD8(Player **arg0) {
    s32 limit;
    Controls *controls;
    Session *session;
    s8 mode;

    if (D_80146938 != 0) {
        mode = (*arg0)->views5D8.view5D8_2.controls->mode;
        if (mode == 0xC || mode == 0xF) {
            limit = 0x384;
        } else {
            limit = 0x1E;
        }
    } else {
        limit = 0x1E;
    }
    if (limit < (*arg0)->views1340.view1340_2.timer) {
        session = &D_801468A0;
        do {
            (*arg0)->views1340.view1340_2.timer = 0;
        } while (0);
        if (session->running != 0) {
            controls = (*arg0)->views5D8.view5D8_2.controls;
            if (controls->team == 0) {
                if (controls->active == 0 || session->mode == 3) {
                    func_8044A37C(*arg0);
                }
            } else {
                mode = controls->mode;
                if (mode == 0xC || mode == 0xF) {
                    func_8044A37C(*arg0);
                }
            }
        } else {
            func_8044A37C(*arg0);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3448_4 = 1.0f;
const float unbake_rodata_800C344C_4 = 0.17453295f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C84E0_4 = 1.0f;
const float unbake_rodata_800C84E4_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3410_4 = 1.0f;
const float unbake_rodata_800C3414_4 = 1.0f;
const float unbake_rodata_800C3418_4 = 15.0f;
const float unbake_rodata_800C341C_4 = 1.0f;
const float unbake_rodata_800C3420_4 = (-2.0f);
const float unbake_rodata_800C3424_4 = 3.0f;
const float unbake_rodata_800C3428_4 = 255.0f;
const float unbake_rodata_800C342C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3430_8 = 4294967296.0;
const double unbake_rodata_800C3438_8 = 4294967296.0;
const double unbake_rodata_800C3440_8 = 4294967296.0;
const float unbake_rodata_800C3448_4 = 995.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C33E8_8 = 4294967296.0;
const double unbake_rodata_800C33F0_8 = 4294967296.0;
const float unbake_rodata_800C33F8_4 = 120.0f;
const float unbake_rodata_800C33FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3400_4 = 2.14748365e+09f;
const float unbake_rodata_800C3404_4 = 2.14748365e+09f;
const double unbake_rodata_800C3408_8 = 4294967296.0;
const float unbake_rodata_800C3410_4 = 0.069813177f;
const float unbake_rodata_800C3414_4 = 64.0f;
const float unbake_rodata_800C3418_4 = 128.0f;
const float unbake_rodata_800C341C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3420_8 = 4294967296.0;
const float unbake_rodata_800C3428_4 = 0.209439531f;
const float unbake_rodata_800C342C_4 = 64.0f;
const float unbake_rodata_800C3430_4 = 128.0f;
const float unbake_rodata_800C3434_4 = 2.14748365e+09f;
const double unbake_rodata_800C3438_8 = 4294967296.0;
const float unbake_rodata_800C3440_4 = 0.279252708f;
const float unbake_rodata_800C3444_4 = 64.0f;
const float unbake_rodata_800C3448_4 = 128.0f;
const float unbake_rodata_800C344C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C33F0_4 = 1.0f;
const float unbake_rodata_800C33F4_4 = 15.0f;
#endif
