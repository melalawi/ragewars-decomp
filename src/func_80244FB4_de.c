#include "span_1000/code_80242BE0.h"
#include "span_16E000/code_80400000.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void func_804009F4_de(s32 resource);
extern s32 func_80245784_de(void);
extern u32 func_80245850_de(void);


extern Record_func_80244FB4_de *D_800DE7E0;
extern f32 D_800CD738;


s32 func_80244FB4_de(void) {
    s32 none;
    f32 value;
    f32 limit;
    Record_func_80244FB4_de *record;

    none = -1;
    if (D_800DE7E0->resource == none) {
        return 0;
    }
    func_804009F4_de(D_800DE7E0->resource);
    D_800DE7E0->resource = none;
    if (func_80245784_de() != 0) {
        if (func_80245850_de() != 0) {
            D_800DE7E0->previous = D_800DE7E0->value;
        } else {
            record = D_800DE7E0;
            record->previous = *(volatile f32 *)&record->value;
            record->value += D_800CD738 * D_800C37B0_de;
            if (record->threshold <= record->value) {
                func_80244E58_de();
            }
            value = D_800DE7E0->value;
            limit = D_800DE7E0->limit;
            if (limit <= value) {
                if (D_800DE7E0->mode == 1) {
                    D_800DE7E0->value = value - limit;
                } else {
                    D_800DE7E0->value = limit;
                    if (D_800DE7E0->active != 0) {
                        D_800DE7E0->done = 1;
                        D_800DE7E0->active = 0;
                    }
                }
            }
        }
    }
    func_80403458_de();
    return 1;
}
