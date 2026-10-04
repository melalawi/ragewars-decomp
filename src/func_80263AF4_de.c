#include "span_1000/code_80263754.h"
#include "types.h"
/* Polls the controller paks when they are enabled: after func_80285C78_de it tries to take the pak lock
 * D_8010FBC0 without blocking and, holding it, refreshes the four pak entries through func_80264104_de and
 * advances the pak state (state 0 opens the pak through func_802B74B0_de once func_80264728_de detects it,
 * otherwise closes it through func_802B7560_de; states 1 to 3 reset to 0 and close it), then releases the
 * lock. */

extern u8 D_800CBC10;
extern s32 D_800CBC1C;
extern char D_8010AC90;
extern char D_8010B328[];
extern u8 D_8010BBB8;
extern char D_8010BBC0;
extern char D_8010BC00;
extern void func_80285C78_de(void *);
extern s32 func_802BB2A0_de(void *, void *, s32);
extern s32 func_802BB420_de(void *, void *, s32);
extern s32 func_802BAD80_de(void *);
extern void func_80263740_de(void);
extern void func_80264104_de(void *);
extern s32 func_80264728_de(void);
extern void func_802B74B0_de(void *);
extern void func_802B7560_de(void *);

void func_80263AF4_de(void) {
    s32 locked;
    s32 i;

    if (D_800CBC10 != 0) {
        func_80285C78_de(&D_8010AC90);
        if ((locked = func_802BB2A0_de(&D_8010BBC0, 0, 0) == 0)) {
            D_800CBC1C = func_802BAD80_de(0);
        }
        if (locked) {
            func_80263740_de();
            for (i = 0; i < 4; i++) {
                func_80264104_de(&D_8010B328[i * 0x224]);
            }
            switch (D_8010BBB8) {
            case 0:
                if (func_80264728_de() != 0) {
                    D_8010BBB8 = 1;
                    func_802B74B0_de(&D_8010BC00);
                } else {
                    func_802B7560_de(&D_8010BC00);
                }
                break;
            case 1:
            case 2:
            case 3:
                D_8010BBB8 = 0;
                func_802B7560_de(&D_8010BC00);
                break;
            }
            D_800CBC1C = -1;
            func_802BB420_de(&D_8010BBC0, 0, 1);
        }
    }
}
