#include "basetypes.h"

extern u16 D_80103FA0[];
extern volatile u8 D_80103F2A[];
extern volatile u8 D_80103F2B[];
extern volatile u8 D_80103B5B[];

int func_8023BC64(void) {
    u16 previous;
    s16 index;

    previous = D_80103FA0[0];
    D_80103FA0[0] = previous + 1;
    if ((s16)(previous + 1) >= 24) {
        D_80103FA0[0] = D_80103FA0[1];
    }
    index = (s16)previous;

    if (D_80103F2A[index * 4] != 0xFF) {
        D_80103B5B[D_80103F2A[index * 4] << 4] = 0xFF;
        D_80103F2A[index * 4] = 0xFF;
    }

    if (D_80103F2B[index * 4] != 0xFF) {
        D_80103B5B[D_80103F2B[index * 4] << 4] = 0xFF;
        D_80103F2B[index * 4] = 0xFF;
    }
    return index;
}
