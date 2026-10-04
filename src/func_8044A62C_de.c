#include "span_16E000/code_80449968.h"
#include "types.h"

/* Resets a 0x1208-byte actor: clears it through func_802A001C_de, initialises its three lists at 0xC,
   0x20 and 0xF24 through func_80255CA0_de, sets its words at 0x1200 and 0x38 to 1 and 2, clears those at
   0 to 8 and 0xF18 to 0xF20, and resets the parts at offset 0x40 through func_8044A170_de and
   func_80234FEC_de. */
extern void func_802A001C_de(void *, s32, s32);
extern void func_80255CA0_de(void *, s32, s32);
extern void func_8044A170_de(void *);
extern void func_80234FEC_de(void *);




void func_8044A62C_de(char *actor) {
    char *parts;

    func_802A001C_de(actor, 0, 0x1208);
    func_80255CA0_de(actor + 0xC, 0, 4);
    func_80255CA0_de(actor + 0x20, 0, 4);
    func_80255CA0_de(actor + 0xF24, 0, 4);
    parts = actor + 0x40;
    ((func_8044B27C_S1 *)(actor))->unk1200 = 1;
    ((func_8044B27C_S1 *)(actor))->unk0 = 0;
    ((func_8044B27C_S1 *)(actor))->unk4 = 0;
    ((func_8044B27C_S1 *)(actor))->unk8 = 0;
    ((func_8044B27C_S1 *)(actor))->unkF18 = 0;
    ((func_8044B27C_S1 *)(actor))->unkF1C = 0;
    ((func_8044B27C_S1 *)(actor))->unkF20 = 0;
    ((func_8044B27C_S1 *)(actor))->unk38 = 2;
    func_8044A170_de(parts);
    func_80234FEC_de(parts);
}
