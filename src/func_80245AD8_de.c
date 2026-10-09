#include "span_1000/code_80245980.h"
/* Returns the globally selected record's float at 0xA0 scaled by D_800C88CC. */
extern void *D_800E2830;





float func_80245AD8_de(void) {
    void *record = D_800E2830;
    return (((func_80245AC8_S1 *)(record))->unkA0) * (D_800C88CC);
}
