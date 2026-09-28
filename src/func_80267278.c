#include "basetypes.h"

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

extern void func_8024E78C(void *arg0, Triple input, Triple *output,
                          s32 *value, s32 unused0, s32 unused1);
extern void func_802761F4(void *arg0);
extern void func_80276228(void *arg0);

void func_80267278(void *arg0, Triple input, s32 arg4) {
    Triple output;
    s32 value;

    func_8024E78C(arg0, input, &output, &value, 0, 0);
    if (arg4 != 0) {
        func_802761F4((void *)value);
    } else {
        func_80276228((void *)value);
    }
}
