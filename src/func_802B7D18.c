#include "basetypes.h"

extern s32 func_802C2260(s32);
extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void *arg1);

void func_802B7D18(void *arg0, s32 arg1) {
    s32 saved;
    char *cur;
    char *next;

    saved = func_802C2260(1);
    cur = *(char **)((char *)arg0 + 8);
    if (cur != 0) {
        do {
            next = *(char **)(cur + 0);
            if (*(s32 *)(cur + 0x10) == arg1) {
                if (next != 0) {
                    *(s32 *)(next + 8) = *(s32 *)(next + 8) + *(s32 *)(cur + 8);
                }
                func_802B7520(cur);
                func_802B7550(cur, arg0);
            }
            cur = next;
        } while (cur != 0);
    }
    func_802C2260(saved);
}
