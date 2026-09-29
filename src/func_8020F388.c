#include "basetypes.h"

extern s32 D_8013B364;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern s32 func_8020F150(void *arg0);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);

typedef struct func_8020F388_S1 func_8020F388_S1;
typedef struct func_8020F388_S2 func_8020F388_S2;
struct func_8020F388_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x14 - 0xC - sizeof(s32)];
    char unk14;
    char pad14[0x68 - 0x14 - sizeof(char)];
    s32 unk68;
    char pad68[0xBC - 0x68 - sizeof(s32)];
    s32 unkBC;
};
struct func_8020F388_S2 {
    char pad0[0x18];
    s32 unk18;
};

s32 func_8020F388(void *arg0) {
    s32 data[30];
    s32 *cursor;
    s32 count;
    char *global;
    s32 value;
    s32 current;

    global = &D_8013B364;
    func_8020D014(global);
    func_8020D1FC((s32)global);
    count = 29;
    cursor = &data[29];
    do {
        *cursor = 0;
        count--;
        cursor--;
    } while (count >= 0);
    data[0] = 0x653;
    if (func_8020F150(data) == 0) {
        ((func_8020F388_S1 *)(arg0))->unk68 = 0;
        ((func_8020F388_S1 *)(arg0))->unkBC = -1;
        return 1;
    }
    value = -1;
    ((func_8020F388_S2 *)(global))->unk18 = value;
    func_8020D0CC(global, ((func_8020F388_S1 *)(arg0))->unk4);
    current = ((func_8020F388_S2 *)(global))->unk18;
    if (current != value) {
        ((func_8020F388_S1 *)(arg0))->unkC = current;
        func_8020D114(global, &((func_8020F388_S1 *)(arg0))->unk14, 4);
    }
    return 1;
}
