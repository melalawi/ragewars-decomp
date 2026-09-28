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

void func_80294AC4(void *arg0) {
    void (*callback)(void *arg0);
    s32 index;

    if ((D_80146D68 == 2) &&
        (*(s32 *)((char *)arg0 + 0x26DD0) == 0)) {
        index = *(s32 *)((char *)arg0 + 0x26DBC);
        *(s32 *)((char *)arg0 + 0x26DB0) = 0;
        *(s32 *)((char *)arg0 + 0x26DB8) = index;
        func_80245690();
        func_8025E234(-1);
        func_80264874(0);
        callback = D_800D29D8[*(s32 *)((char *)arg0 + 0x26DB8)].callback;
        if (callback != 0) {
            callback(arg0);
        }
    }
}
