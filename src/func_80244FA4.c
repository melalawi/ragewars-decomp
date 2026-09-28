#include "basetypes.h"

typedef struct Record {
    char pad0[0x1C];
    f32 value;
    f32 previous;
    char pad24[8];
    f32 limit;
    f32 threshold;
    char pad34[8];
    s32 done;
    char pad40[0x74];
    s32 active;
    char padB8[0x24];
    s32 resource;
    char padE0[0x24];
    s32 mode;
} Record;

extern void func_804009F4(s32 resource);
extern s32 func_80245774(void);
extern u32 func_80245840(void);
extern void func_80244E48(void);
extern void func_80403458(void);
extern Record *D_800E2830;
extern f32 D_800D2988;
extern f32 D_800C88A0;

s32 func_80244FA4(void) {
    s32 none;
    f32 value;
    f32 limit;
    Record *record;

    none = -1;
    if (D_800E2830->resource == none) {
        return 0;
    }
    func_804009F4(D_800E2830->resource);
    D_800E2830->resource = none;
    if (func_80245774() != 0) {
        if (func_80245840() != 0) {
            D_800E2830->previous = D_800E2830->value;
        } else {
            record = D_800E2830;
            record->previous = *(volatile f32 *)&record->value;
            record->value += D_800D2988 * D_800C88A0;
            if (record->threshold <= record->value) {
                func_80244E48();
            }
            value = D_800E2830->value;
            limit = D_800E2830->limit;
            if (limit <= value) {
                if (D_800E2830->mode == 1) {
                    D_800E2830->value = value - limit;
                } else {
                    D_800E2830->value = limit;
                    if (D_800E2830->active != 0) {
                        D_800E2830->done = 1;
                        D_800E2830->active = 0;
                    }
                }
            }
        }
    }
    func_80403458();
    return 1;
}
