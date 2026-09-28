#include "basetypes.h"

typedef void (*Callback)(s32, s32, s32, s32);

typedef struct Manager {
    Callback callback;
    s32 index;
    s32 lowIndex;
    void *entries;
    char pad10[0x520];
    s32 field530;
    char pad534[8];
    void *field53C;
} Manager;

extern Manager *D_8014D080;
extern void func_80299ECC(void);
extern void func_80254784(void *arg0);
extern void func_8029BAAC(void);
extern void func_8040F5E8(void);
extern void func_80411FA8(void);

void func_8029A468(void) {
    Manager *manager;
    s32 lowIndex;
    s32 one;

    manager = D_8014D080;
    lowIndex = manager->lowIndex;
    if (manager->index >= lowIndex) {
        one = 1;
        do {
            manager->field530 = one;
            func_80299ECC();
            manager = D_8014D080;
        } while (manager->index >= lowIndex);
    }
    if (D_8014D080->callback != 0) {
        D_8014D080->callback(0xE05, 0, 0, 0);
    }
    if (D_8014D080->field53C != 0) {
        func_80254784(D_8014D080->field53C);
    }
    func_80254784(D_8014D080->entries);
    func_80254784(D_8014D080);
    D_8014D080 = 0;
    func_8029BAAC();
    func_8040F5E8();
    func_80411FA8();
}
