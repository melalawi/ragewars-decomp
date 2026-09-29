#include "basetypes.h"

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void **func_80296E04(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);

typedef struct func_8026E158_S1 func_8026E158_S1;
typedef union func_8026E158_S1_U8 { s32 v0; char v1; } func_8026E158_S1_U8;
struct func_8026E158_S1 {
    char pad0[0x8];
    func_8026E158_S1_U8 unk8;
};

void func_8026E158(void **arg0) {
    void *temp_v0;
    s32 count;
    s32 i;
    void *rec;
    s32 result;

    temp_v0 = func_8028FD94(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FD94(func_8028FD94(temp_v0, i), 0);
        if (((func_8026E158_S1 *)(rec))->unk8.v0 == 0) {
            continue;
        }
        result = func_80296E04(&((func_8026E158_S1 *)(rec))->unk8.v1, -1);
        if (result == 0) {
            continue;
        }
        func_802536F4(0, result);
    }
}
