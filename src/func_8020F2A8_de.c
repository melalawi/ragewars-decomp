#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8020EAE0.h"
#include "types.h"

extern s32 D_8013B364;

extern void func_8020D014_de(void *arg0);
extern void func_8020D1FC_de(s32);
extern s32 func_8020F150_de(void *arg0);
extern void func_8020D0CC_de(void *arg0, s32 arg1);
extern void *func_8020CFE0_de(char *, s32);
extern void func_8020D114_de(void *arg0, void *arg1, s32 arg2);








s32 func_8020F2A8_de(void *arg0) {
    s32 data[30];
    s32 *cursor;
    s32 count;
    char *global;
    s32 value;
    s32 current;
    void *entry;

    global = &D_8013B364;
    func_8020D014_de(global);
    func_8020D1FC_de((s32)global);
    count = 29;
    cursor = &data[29];
    do {
        *cursor = 0;
        count--;
        cursor--;
    } while (count >= 0);
    data[0] = 0xBD7;
    if (func_8020F150_de(data) == 0) {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = -1;
        return 1;
    }
    value = -1;
    ((func_802066A4_S3 *)(global))->unk18 = value;
    func_8020D0CC_de(global, ((func_8020F2A8_S1 *)(arg0))->unk4);
    current = ((func_802066A4_S3 *)(global))->unk18;
    if (current != value) {
        entry = func_8020CFE0_de(global, current);
        ((func_8020F2A8_S1 *)(arg0))->unkC = ((func_802066A4_S3 *)(global))->unk18;
        ((func_8020F2A8_S1 *)(arg0))->unk68 = ((func_8020F2A8_S3 *)(entry))->unk34;
        func_8020D114_de(global, &((func_8020F2A8_S1 *)(arg0))->unk14, 4);
    } else {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = current;
    }
    return 1;
}
