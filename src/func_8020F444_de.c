#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8020EAE0.h"
#include "types.h"

extern s32 D_8013B364;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern void *func_8020C994_de(void *, s32);
extern void func_8020D220_de(void *, s32);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);












s32 func_8020F444_de(void *arg0) {
    char *global;
    char *scanbase;
    void *node;
    void *result;
    s32 count;
    s32 type;
    s32 value;
    s32 current;

    global = &D_8013B364;
    func_8020D014_de(global);
    func_8020D1FC_de((s32)global);
    count = 0;
    node = D_801372C8;
    scanbase = global;
    if (node != 0) {
        type = 0x64E;
        do {
            result = func_8020C994_de(scanbase, *(s32 *)node);
            if ((((func_8020EEA4_S2 *)(result))->unkC & 1) &&
                ((func_8020EEA4_S2 *)(result))->unkE == type &&
                ((func_8020F444_S3 *)((((func_8020F444_S2 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220_de(scanbase, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F444_S2 *)(node))->unk10;
        } while (node != 0);
    }
    if (count == 0) {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = -1;
        return 1;
    }
    value = -1;
    ((func_802066A4_S3 *)(global))->unk18 = value;
    func_8020D0CC_de(global, ((func_8020F2A8_S1 *)(arg0))->unk4);
    current = ((func_802066A4_S3 *)(global))->unk18;
    if (current != value) {
        ((func_8020F2A8_S1 *)(arg0))->unkC = current;
        func_8020D114_de(global, &((func_8020F2A8_S1 *)(arg0))->unk14, 4);
    }
    return 1;
}
