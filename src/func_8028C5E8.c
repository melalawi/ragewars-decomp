#include "basetypes.h"

extern f32 D_800D2988;
extern void func_80278C80(void *);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void func_8028C5E8(void *arg0) {
    void *node;
    void *next;
    void *object;
    s32 remove;
    s32 expired;
    f32 zero;
    f32 value;

    node = *(void **)((char *)arg0 + 0x11D8);
    remove = 0;
    if (node != 0) {
        zero = 0.0f;
        do {
            object = *(void **)((char *)node + 8);
            next = *(void **)((char *)node + 4);
            expired = remove;
            if (*(u8 *)((char *)object + 0xE) & 2) {
                value = *(f32 *)((char *)node + 0xC) - D_800D2988;
                *(f32 *)((char *)node + 0xC) = value;
                if (value <= zero) {
                    expired = 1;
                    remove = 1;
                }
            }
            if (expired != 0) {
                func_80278C80(object);
            }
            if (remove != 0) {
                func_80255E78((char *)arg0 + 0x11D8, (s32)node);
                func_80255C58((char *)arg0 + 0x11EC, (s32)node);
            }
            node = next;
            remove = 0;
        } while (node != 0);
    }
}
