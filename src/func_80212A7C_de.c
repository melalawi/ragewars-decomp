#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802106E0.h"
#include "types.h"

extern char D_8013B364;
extern char D_800C20C8_de;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern void *func_8020C994_de(void *arg0, s32 arg1);
extern f32 func_802726BC_de(f32 *arg0, f32 *arg1);
extern void func_8020D220_de(void *, s32);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);
extern void func_80211020_de(void *arg0);
extern void func_80208410_de(void *);
extern void func_80208AAC_de(void *arg0);
extern void func_8020FA10_de(void *arg0);














void func_80212A7C_de(void *arg0)
{
    void *state;
    void *table;
    void *entry;
    f32 threshold;
    s32 index;
    s32 value;
    u32 flags;

    state = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    table = &D_8013B364;
    if (((ObjectState2C *)(state))->unk_C == -1) {
        func_8020D014_de(table);
        func_8020D1FC_de((s32)table);
        threshold = ((struct func_802077F4_S2 *) (&D_800C20C8_de))->unk4;
        index = 0;
        if (((IntegerState1C *)(table))->unk_4 > 0) {
            do {
                entry = func_8020C994_de(table, index);
                if (func_802726BC_de(&((ObjectState3C *)(*(void **)state))->unk_8, entry) < threshold &&
                    !(((func_80205700_S1 *)(entry))->unkC & 0x04300000)) {
                    func_8020D220_de(table, index);
                }
                index++;
            } while (index < ((IntegerState1C *)(table))->unk_4);
        }
        func_8020D0CC_de(table, ((ObjectState2C *)(state))->unk_4);
        func_8020D114_de(table, &((ObjectState2C *)(state))->unk_14, 4);
        value = ((IntegerState1C *)(table))->unk_18;
        ((ObjectState2C *)(state))->unk_C = value;
        ((ObjectState2C *)(state))->unk_28 = value;
    }
    func_80211020_de(state);
    func_80208410_de(state);
    func_80208AAC_de(state);
    flags = (((ObjectState3C *)(*(void **)state))->unk_38 & 0x3000) != 0;
    if (((ObjectState2C *)(state))->unk_4 == ((ObjectState2C *)(state))->unk_C &&
        !flags) {
        func_8020FA10_de(state);
    }
}
