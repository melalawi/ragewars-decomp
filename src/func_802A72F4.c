#include "basetypes.h"

extern void func_802A453C(void *arg0);
extern void func_802A438C(void *, void *);
extern void func_802A4708(s32, void *, s32);
extern void func_802A4DC4(s32, void *, s32);

void func_802A72F4(s32 arg0, void *arg1, s32 arg2) {
    if (*(s32 *)((char *)arg1 + 0x3C) & 8) {
        func_802A453C(arg1);
    }
    if (*(s32 *)((char *)arg1 + 0x3C) & 4) {
        func_802A438C(arg1, arg2);
    }
    if (*(s32 *)((char *)arg1 + 0x48) >= 2) {
        if (*(s32 *)((char *)arg1 + 0x34) >= 0) {
            func_802A4708(arg0, arg1, arg2);
            return;
        }
        func_802A4DC4(arg0, arg1, arg2);
    }
}
