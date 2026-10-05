#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8042BD40.h"
#include "span_16E000/code_80434F4C.h"
#include "types.h"

/* Handles the answer on the screen D_800E53C0. */

#if defined(VERSION_DE)
#define VALUE_239 0x235
#elif defined(VERSION_EU_X)
#define VALUE_239 0x23E
#else
#define VALUE_239 0x239
#endif



extern struct MenuRules *D_800E1370;
extern s32 D_801427D4;
extern s32 D_80142858;
extern s32 D_80142834;
extern void func_8029973C_de();
extern s32 func_8043C308_de(struct MenuRules *);
extern s32 func_80299A08_de();
extern void func_8043C278_de(struct MenuRules *);

extern s32 func_8042AF28_de();
extern void func_8042E988_de(s32);
extern void func_80298368_de(s32);

s32 func_8042D788_de(void) {
    s32 *paused;

    func_8029973C_de();
    if (func_8043C308_de(D_800E1370) == 1) {
        return 0;
    }
    paused = &D_801427D4;
    *paused = 0;
    switch (func_80299A08_de()) {
    case VALUE_239 - 2:
        if (((u8 *)paused)[-0x5BF] == 0) {
            func_8043C278_de(D_800E1370);
            D_800E1370->locked = 0;
        } else {
            D_80142858 = 0;
            D_80142834 = 0;
            func_80298368_de(0xF);
        }
        break;
    case VALUE_239 - 1:
        func_80434FB4_de(5);
        func_80298368_de(0x13);
        break;
    case VALUE_239 + 3:
        if (func_8042AF28_de() == 1) {
            func_8042E988_de(0x21);
            return 0;
        }
        if (((u8 *)paused)[-0x5BF] == 0) {
            func_80298368_de(0x14);
        } else {
            func_80298368_de(0xF);
        }
        break;
    default:
        return 0;
    }
    return 0;
}
