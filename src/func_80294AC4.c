#include "basetypes.h"

typedef struct {
    void (*callback)(void *arg0);
    s32 field4;
    s32 field8;
} Entry80294AC4;

extern s32 D_80146D68;
extern Entry80294AC4 D_800D29D8[];
extern void func_80245690(void);
extern void func_8025E234(s32 arg0);
extern void func_80264874(s32 arg0);

typedef struct func_80294AC4_S1 func_80294AC4_S1;
struct func_80294AC4_S1 {
    char pad0[0x26DB0];
    s32 unk26DB0;
    char pad26DB0[0x26DB8 - 0x26DB0 - sizeof(s32)];
    s32 unk26DB8;
    char pad26DB8[0x26DBC - 0x26DB8 - sizeof(s32)];
    s32 unk26DBC;
    char pad26DBC[0x26DD0 - 0x26DBC - sizeof(s32)];
    s32 unk26DD0;
};

void func_80294AC4(void *arg0) {
    void (*callback)(void *arg0);
    s32 index;

    if ((D_80146D68 == 2) &&
        (((func_80294AC4_S1 *)(arg0))->unk26DD0 == 0)) {
        index = ((func_80294AC4_S1 *)(arg0))->unk26DBC;
        ((func_80294AC4_S1 *)(arg0))->unk26DB0 = 0;
        ((func_80294AC4_S1 *)(arg0))->unk26DB8 = index;
        func_80245690();
        func_8025E234(-1);
        func_80264874(0);
        callback = D_800D29D8[((func_80294AC4_S1 *)(arg0))->unk26DB8].callback;
        if (callback != 0) {
            callback(arg0);
        }
    }
}
