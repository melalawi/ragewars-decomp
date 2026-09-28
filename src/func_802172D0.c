#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);

void func_802172D0(void *arg0, void *arg1, s32 arg2) {
    void *node;
    void *fallback;
    s32 kind;

    node = *(void **)((char *)arg1 + 0xFC);
    fallback = (void *)-1;
    if (node != 0) {
        if (*(s32 *)((char *)node + 0xC) == arg2) {
            return;
        }
        func_8025CA44(func_8025CC8C(), *(void **)((char *)arg1 + 0xFC));
    }

    kind = *(u8 *)arg0;
    if (kind != 0) {
        if (kind >= 0) {
            if (kind < 3) {
                fallback = arg0;
            }
        }
    } else {
        fallback = *(void **)((char *)arg0 + 0xD0);
    }

    *(void **)((char *)arg1 + 0xFC) =
        func_8025C97C(func_8025CC8C(), arg2, (char *)arg0 + 8,
                      (char *)arg0 + 8, (s32)fallback);
}
