#include "basetypes.h"

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

s32 func_802B66A0(void *arg0, s32 arg1, s32 arg2) {
    s32 amount;
    s32 total;
    s32 result;
    char *next;
    char *cur;

    total = 0;
    cur = *(char **)((char *)arg0 + 0x50);
    result = 1;
    if (cur != 0) {
        do {
            amount = *(s32 *)(cur + 8);
            next = *(char **)(cur + 0);
            total += amount;
            if (*(s16 *)(cur + 0xC) == 5 && *(s32 *)(cur + 0x10) == arg1) {
                if (arg2 < total) {
                    if (next != 0) {
                        *(s32 *)(next + 8) = *(s32 *)(next + 8) + amount;
                    }
                    func_802B7520(cur);
                    func_802B7550(cur, (void **)((char *)arg0 + 0x48));
                    goto done;
                }
                result = 0;
                goto done;
            }
            cur = next;
        } while (cur != 0);
    }
done:
    return result;
}
