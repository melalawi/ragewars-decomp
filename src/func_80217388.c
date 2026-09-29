#include "basetypes.h"

extern void func_8025E1E4(s32);
extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);

typedef struct func_80217388_S1 func_80217388_S1;
typedef struct func_80217388_S2 func_80217388_S2;
struct func_80217388_S1 {
    char pad0[0xD0];
    void* unkD0;
};
struct func_80217388_S2 {
    char pad0[0xFC];
    s32 unkFC;
};

void func_80217388(void *arg0, void *arg1) {
    void *owner = 0;
    u8 type = *(u8 *)arg0;

    switch (type) {
    case 1:
    case 2:
        owner = arg0;
        break;
    case 0:
        owner = ((func_80217388_S1 *)(arg0))->unkD0;
        break;
    }

    if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
        func_8025E1E4(owner);
        if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
            func_8025CA44(func_8025CC8C(), ((func_80217388_S2 *)(arg1))->unkFC);
            ((func_80217388_S2 *)(arg1))->unkFC = 0;
        }
    }
}
