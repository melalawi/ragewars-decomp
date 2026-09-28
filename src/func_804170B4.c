/* Selects render mode 11 or 12 (always 11 while D_80153F60's enable word is clear) when it differs
   from the cached mode D_800E32CC: flushes through func_8041900C and applies the mode word built
   from the mode's base bits (0x53 or 0x33, with bit 2 when the first switch is set), then 0x300 or
   0x500, 0x3000 or 0x5000 and 0x30000 or 0x50000 chosen by the three further switches, through
   func_804171B8. */
#include "basetypes.h"

typedef struct {
    s32 filter;
    s32 enable;
    s32 depth;
} RenderSwitches;

extern RenderSwitches D_80153F60;
extern s32 D_80153F6C;
extern s32 D_80153F70;
extern s32 D_800E32CC;

extern void func_8041900C(void);
extern void func_804171B8(s32 mode);

void func_804170B4(s32 mode) {
    s32 bits;

    if (D_80153F60.enable == 0) {
        mode = 11;
    }
    if (mode == D_800E32CC) {
        return;
    }
    D_800E32CC = mode;
    if (mode == 11) {
        func_8041900C();
        bits = D_80153F60.filter ? 0x55 : 0x53;
        bits |= D_80153F60.depth ? 0x300 : 0x500;
        func_804171B8(bits | (D_80153F6C ? 0x3000 : 0x5000) | (D_80153F70 ? 0x30000 : 0x50000));
    } else if (mode == 12) {
        func_8041900C();
        bits = D_80153F60.filter ? 0x35 : 0x33;
        bits |= D_80153F60.depth ? 0x300 : 0x500;
        func_804171B8(bits | (D_80153F6C ? 0x3000 : 0x5000) | (D_80153F70 ? 0x30000 : 0x50000));
    }
}
