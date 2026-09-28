#include "basetypes.h"

extern s32 D_8013B364;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern s32 func_8020F150(void *arg0);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);

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
        *(s32 *)((char *)arg0 + 0x68) = 0;
        *(s32 *)((char *)arg0 + 0xBC) = -1;
        return 1;
    }
    value = -1;
    *(s32 *)(global + 0x18) = value;
    func_8020D0CC(global, *(s32 *)((char *)arg0 + 4));
    current = *(s32 *)(global + 0x18);
    if (current != value) {
        *(s32 *)((char *)arg0 + 0xC) = current;
        func_8020D114(global, (char *)arg0 + 0x14, 4);
    }
    return 1;
}
