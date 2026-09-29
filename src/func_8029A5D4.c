#include "basetypes.h"

typedef struct Entry {
    void *object;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
    s32 field14;
    s32 field18;
} Entry;

typedef s32 (*Callback)(s32, s32, s32, s32);

typedef struct Manager {
    Callback callback;
    s32 index;
    s32 lowIndex;
    Entry *entries;
    char pad10[0x510];
    s32 dispatching;
    s32 pad524;
    s32 blockedValue;
} Manager;

extern Manager *D_8014D080;
extern s32 func_80411E70(s32 value);
extern s32 func_80298A34(s32, s32, s32, s32);
extern s32 func_80297E3C(s32, s32, s32, s32, s32);

typedef struct func_8029A5D4_S1 func_8029A5D4_S1;
struct func_8029A5D4_S1 {
    char pad0[0xC];
    s16 unkC;
};

s32 func_8029A5D4(s32 value, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Manager *manager;
    s32 blockedValue;
    s32 index;
    s32 minusOne;
    s32 saved;
    s32 result;

    if (func_80411E70(value) != 0) {
        if (value != D_8014D080->entries[D_8014D080->index].field4) {
            return 0;
        }
    }
    manager = D_8014D080;
    blockedValue = manager->blockedValue;
    index = manager->index;
    minusOne = -1;
    if ((value == blockedValue) || (index == minusOne)) {
        return 0;
    }
    if (D_8014D080->callback != 0) {
        saved = D_8014D080->dispatching;
        D_8014D080->dispatching = 0;
        result = D_8014D080->callback(arg1, arg2, arg3, arg4);
        if (D_8014D080->dispatching == 1) {
            D_8014D080->dispatching = saved;
            return result;
        }
        D_8014D080->dispatching = saved;
    }
    if (value == ((func_8029A5D4_S1 *)(D_8014D080->entries[D_8014D080->index].object))->unkC) {
        result = func_80298A34(arg1, arg2, arg3, arg4);
    } else {
        result = func_80297E3C(value, arg1, arg2, arg3, arg4);
    }
    return result;
}
