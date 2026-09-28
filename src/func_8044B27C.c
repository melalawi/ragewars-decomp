#include "basetypes.h"

/* Resets a 0x1208-byte actor: clears it through func_802A101C, initialises its three lists at 0xC,
   0x20 and 0xF24 through func_80255C40, sets its words at 0x1200 and 0x38 to 1 and 2, clears those at
   0 to 8 and 0xF18 to 0xF20, and resets the parts at offset 0x40 through func_8044ADC0 and
   func_80234FDC. */
extern void func_802A101C(void *, s32, s32);
extern void func_80255C40(void *, s32, s32);
extern void func_8044ADC0(void *);
extern void func_80234FDC(void *);

void func_8044B27C(char *actor) {
    char *parts;

    func_802A101C(actor, 0, 0x1208);
    func_80255C40(actor + 0xC, 0, 4);
    func_80255C40(actor + 0x20, 0, 4);
    func_80255C40(actor + 0xF24, 0, 4);
    parts = actor + 0x40;
    *(s32 *) (actor + 0x1200) = 1;
    *(s32 *) (actor + 0) = 0;
    *(s32 *) (actor + 4) = 0;
    *(s32 *) (actor + 8) = 0;
    *(s32 *) (actor + 0xF18) = 0;
    *(s32 *) (actor + 0xF1C) = 0;
    *(s32 *) (actor + 0xF20) = 0;
    *(s32 *) (actor + 0x38) = 2;
    func_8044ADC0(parts);
    func_80234FDC(parts);
}
