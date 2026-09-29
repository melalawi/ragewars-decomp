#include "basetypes.h"

extern void func_8020C5A0(void *arg0, void *node);

typedef struct func_8020D0CC_S1 func_8020D0CC_S1;
typedef struct func_8020D0CC_S2 func_8020D0CC_S2;
struct func_8020D0CC_S1 {
    char pad0[0x24];
    void* unk24;
};
struct func_8020D0CC_S2 {
    char pad0[0x10];
    void* unk10;
};

/** Find a keyed node in the object's list and pass it to func_8020C5A0. */
void func_8020D0CC(void *arg0, s32 key) {
    void *node = ((func_8020D0CC_S1 *)(arg0))->unk24;

    if (node == 0) {
        goto not_found;
    }
loop:
    if (*(s32 *)node == key) {
        goto found;
    }
    node = ((func_8020D0CC_S2 *)(node))->unk10;
    if (node != 0) {
        goto loop;
    }
not_found:
    node = 0;
found:
    func_8020C5A0(arg0, node);
}
