/* Polls the controller paks when they are enabled: after func_80285C48 it tries to take the pak lock
 * D_8010FBC0 without blocking and, holding it, refreshes the four pak entries through func_80264124 and
 * advances the pak state (state 0 opens the pak through func_802BC580 once func_80264748 detects it,
 * otherwise closes it through func_802BC630; states 1 to 3 reset to 0 and close it), then releases the
 * lock. */
#include "basetypes.h"

extern u8 D_800D0E50;
extern s32 D_800D0E5C;
extern char D_8010EC90;
extern char D_8010F328[];
extern u8 D_8010FBB8;
extern char D_8010FBC0;
extern char D_8010FC00;
extern void func_80285C48(void *);
extern s32 func_802C0390(void *, void *, s32);
extern s32 func_802C0510(void *, void *, s32);
extern s32 func_802BFE70(void *);
extern void func_80263760(void);
extern void func_80264124(void *);
extern s32 func_80264748(void);
extern void func_802BC580(void *);
extern void func_802BC630(void *);

void func_80263B14(void) {
    s32 locked;
    s32 i;

    if (D_800D0E50 != 0) {
        func_80285C48(&D_8010EC90);
        if ((locked = func_802C0390(&D_8010FBC0, 0, 0) == 0)) {
            D_800D0E5C = func_802BFE70(0);
        }
        if (locked) {
            func_80263760();
            for (i = 0; i < 4; i++) {
                func_80264124(&D_8010F328[i * 0x224]);
            }
            switch (D_8010FBB8) {
            case 0:
                if (func_80264748() != 0) {
                    D_8010FBB8 = 1;
                    func_802BC580(&D_8010FC00);
                } else {
                    func_802BC630(&D_8010FC00);
                }
                break;
            case 1:
            case 2:
            case 3:
                D_8010FBB8 = 0;
                func_802BC630(&D_8010FC00);
                break;
            }
            D_800D0E5C = -1;
            func_802C0510(&D_8010FBC0, 0, 1);
        }
    }
}
