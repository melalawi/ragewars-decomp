#include "basetypes.h"

/* Announces the current arena's entry for a slot: selects one of four five-byte name tables from the
   mode byte D_801462D5, indexes it by the argument times 400 and hands that entry to func_802656A8
   together with the current handle D_8015402C and flag 1; an unrecognised mode does nothing. */

extern char D_80102B7E[];
extern char D_80102B83[];
extern char D_80102B88[];
extern char D_80102B8D[];
extern u8 D_801462D5;
extern s32 D_8015402C;
extern void func_802656A8(char *, s32, s32);

void func_80425EF4(s32 slot) {
    switch (D_801462D5) {
    case 1:
        func_802656A8(&D_80102B7E[slot * 0x190], D_8015402C, 1);
        return;
    case 2:
        func_802656A8(&D_80102B83[slot * 0x190], D_8015402C, 1);
        return;
    case 3:
        func_802656A8(&D_80102B88[slot * 0x190], D_8015402C, 1);
        return;
    case 4:
        func_802656A8(&D_80102B8D[slot * 0x190], D_8015402C, 1);
        return;
    }
}
