#include "basetypes.h"

extern void func_8025E1E4(s32);
extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);

void func_80217388(void *arg0, void *arg1) {
    void *owner = 0;
    u8 type = *(u8 *)arg0;

    switch (type) {
    case 1:
    case 2:
        owner = arg0;
        break;
    case 0:
        owner = *(void **)((s8 *)arg0 + 0xD0);
        break;
    }

    if (*(s32 *)((s8 *)arg1 + 0xFC) != 0) {
        func_8025E1E4(owner);
        if (*(s32 *)((s8 *)arg1 + 0xFC) != 0) {
            func_8025CA44(func_8025CC8C(), *(s32 *)((s8 *)arg1 + 0xFC));
            *(s32 *)((s8 *)arg1 + 0xFC) = 0;
        }
    }
}
