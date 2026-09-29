#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void **func_80296E04(void *arg0, s32 arg1);

typedef struct func_8026E27C_S1 func_8026E27C_S1;
typedef union func_8026E27C_S1_U8 { s32 v0; char v1; } func_8026E27C_S1_U8;
struct func_8026E27C_S1 {
    char pad0[0x8];
    func_8026E27C_S1_U8 unk8;
};

s32 *func_8026E27C(void **arg0, s32 arg1, s32 *arg2) {
    void *temp_v0;
    s32 count;
    s32 i;
    s32 *out;
    void *rec;
    s32 result;

    out = arg2;
    temp_v0 = func_8028FD94(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FD94(func_8028FD94(temp_v0, i), 0);
        if (((func_8026E27C_S1 *)(rec))->unk8.v0 == 0) {
            continue;
        }
        result = func_80296E04(&((func_8026E27C_S1 *)(rec))->unk8.v1, arg1);
        if (result != 0) {
            *out = result;
            out += 1;
        }
    }
    return out;
}
