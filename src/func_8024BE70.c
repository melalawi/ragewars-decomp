#include "basetypes.h"

extern void **func_8024BFC4(void *arg0, s32 arg1);
extern char *func_8028FD94(int *arg0, int arg1);
extern void func_802536F4(void *arg0, void *arg1);

typedef struct func_8024BE70_S1 func_8024BE70_S1;
typedef struct func_8024BE70_S2 func_8024BE70_S2;
struct func_8024BE70_S1 {
    char pad0[0x1];
    s8 unk1;
};
struct func_8024BE70_S2 {
    char pad0[0x6E];
    u8 unk6E;
};

s32 func_8024BE70(void *arg0) {
    void **temp_s0;
    char *temp_v0;
    s32 result;

    result = -1;
    temp_s0 = func_8024BFC4(arg0, ((func_8024BE70_S1 *)(arg0))->unk1);
    if (temp_s0 != 0) {
        temp_v0 = func_8028FD94((int *)*temp_s0, 5);
        result = ((func_8024BE70_S2 *)(temp_v0))->unk6E;
        func_802536F4(0, temp_s0);
    }
    return result;
}
