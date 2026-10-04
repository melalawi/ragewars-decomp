#include "span_1000/code_80299FC4.h"
#include "span_1000/code_802A26F8.h"
#include "span_1000/code_802A31F4.h"
#include "span_16E000/code_8040EBC8.h"
#include "span_C76B0/data.h"
#include "types.h"




extern f32 D_800CD738;
extern s32 D_800CDA20;
extern s32 D_800CDA28;
extern StatePair D_800CDA30_de;
extern s8 D_8010BBB8;
extern s32 D_8014288C;


extern s32 func_80299958_de(void);
extern s32 func_802995D4_de(s32, s32, s32, s32, s32);



extern void func_8042E5EC_de(void);
extern void func_8042DEA0_de(void);
extern void func_802A2400_de(f32);


void func_802A2090_de(void) {
    s32 mode;
    s32 value;
    s32 active;
    s32 state;

    if (D_800CDA28 == 1) {
        func_802A17C4_de();
        mode = func_80299958_de();
        func_802995D4_de(mode, 0xE08, 0, 0, 0);
        func_80298FE8_de();
        func_80410448_de();
        func_802A1944_de();
        mode = func_80299958_de();
        active = 1;
        value = 0;
        if (mode == 3) {
            goto mode_three;
        }
        if (mode != 0x18) {
            goto mode_inactive;
        }
        value = 20;
        goto mode_done;
mode_three:
        value = 300;
        goto mode_done;
mode_inactive:
        active = 0;
mode_done:
        if ((D_8014288C == 0) && (active == 1) && ((f32)(value * 15) < D_800CDA30_de.value)) {
            func_8042E5EC_de();
            func_8042DEA0_de();
            func_802A2400_de(0.0f);
        }
        D_800CDA30_de.value += D_800CD738;
        state = D_800CDA30_de.state;
        if (state == 1) {
            D_800CBC14--;
            if (D_800CBC14 <= 0) {
                D_800CBC14 = 60;
                D_8010BBB8 = state;
            }
        }
        if (D_800CDA20 == 1) {
            func_802A2434_de();
        }
    }
}
