#include "span_1000/code_80245804.h"
/* Reports whether func_80245798_de accepts the globally selected record and bit 2 of its word at 0x74
   is set. */
extern int func_80245798_de(void);

extern void *D_800DE7E0;




int func_80245908_de(void) {
    void *record;
    if (func_80245798_de() == 0) {
        return 0;
    }
    record = D_800DE7E0;
    if ((((func_802458F8_S1 *)(record))->unk74 & 2) != 0) {
        return 1;
    }
    return 0;
}
