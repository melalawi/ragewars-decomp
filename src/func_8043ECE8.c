#include "basetypes.h"

typedef struct Flagged {
    u8 pad0[0x58];
    u32 unk58;
} Flagged;

typedef struct Obj8043ECE8 {
    s16 unk0;
    u8 pad2[10];
    Flagged *unkC;
} Obj8043ECE8;

extern s32 func_802646B0(void);

/** Clears or sets bit 24 of arg1's record's flags depending on how many of func_802646B0's four slots are active, and demotes arg1->unk0 from state 2 to 1 in the low-count case. */
s32 func_8043ECE8(void *arg0, Obj8043ECE8 *arg1) {
    if (func_802646B0() < 2) {
        arg1->unkC->unk58 &= 0xFEFFFFFF;
        if (arg1->unk0 == 2) {
            arg1->unk0 = 1;
        }
    } else {
        arg1->unkC->unk58 |= 0x01000000;
    }
    return 0;
}
