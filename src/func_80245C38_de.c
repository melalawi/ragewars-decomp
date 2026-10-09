#include "span_1000/code_80243A80.h"
#include "span_1000/code_80245980.h"
#include "types.h"

extern int func_80245784_de(void);
extern u32 func_80245850_de(void);



extern Record_func_80245C38_de *D_800DE7E0;
extern f32 D_800CD738;


void func_80245C38_de(void) {
    f32 value;
    f32 limit;
    Record_func_80245C38_de *record;

    if (func_80245784_de() != 0) {
        if (func_80245850_de() != 0) {
            D_800DE7E0->previous = D_800DE7E0->value;
            return;
        }
        record = D_800DE7E0;
        record->previous = *(volatile f32 *)&record->value;
        record->value += D_800CD738 * D_800C37E0_de;
        if (record->threshold <= record->value) {
            func_80244E58_de();
        }
        value = D_800DE7E0->value;
        limit = D_800DE7E0->limit;
        if (limit <= value) {
            if (D_800DE7E0->mode == 1) {
                D_800DE7E0->value = value - limit;
                return;
            }
            D_800DE7E0->value = limit;
            if (D_800DE7E0->active != 0) {
                D_800DE7E0->done = 1;
                D_800DE7E0->active = 0;
            }
        }
    }
}
