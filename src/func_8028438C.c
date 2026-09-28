#include "basetypes.h"

extern s32 func_80284408(void *arg0);
extern void *func_8025CC8C(void);
extern void *func_8025C97C(void *, s32, void *, void *, s32);

void func_8028438C(void *arg0, s32 arg1) {
    void *node;

    node = *(void **)((char *)arg0 + 0x1DC);
    if (node != 0) {
        if (*(s32 *)((char *)node + 0xC) == arg1 && *(s32 *)((char *)node + 8) != -1) {
            return;
        }
        func_80284408(arg0);
    }
    *(void **)((char *)arg0 + 0x1DC) =
        func_8025C97C(func_8025CC8C(), arg1, (char *)arg0 + 8, (char *)arg0 + 8, -1);
}
