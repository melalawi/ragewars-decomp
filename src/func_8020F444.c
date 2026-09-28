#include "basetypes.h"

extern s32 D_8013B364;
extern void *D_8013B388;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern void *func_8020C994(void *, s32);
extern void func_8020D220(void *, s32);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);

s32 func_8020F444(void *arg0) {
    char *global;
    char *scanbase;
    void *node;
    void *result;
    s32 count;
    s32 type;
    s32 value;
    s32 current;

    global = &D_8013B364;
    func_8020D014(global);
    func_8020D1FC((s32)global);
    count = 0;
    node = D_8013B388;
    scanbase = global;
    if (node != 0) {
        type = 0x64E;
        do {
            result = func_8020C994(scanbase, *(s32 *)node);
            if ((*(u16 *)((char *)result + 0xC) & 1) &&
                *(u16 *)((char *)result + 0xE) == type &&
                *(s8 *)((char *)(*(void **)((char *)node + 0x34)) + 0x1A4) == 0) {
                func_8020D220(scanbase, *(s32 *)node);
                count += 1;
            }
            node = *(void **)((char *)node + 0x10);
        } while (node != 0);
    }
    if (count == 0) {
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
