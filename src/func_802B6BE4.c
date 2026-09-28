#include "basetypes.h"

typedef struct Entry802B6BE4 {
    s16 type;
    s16 pad;
    void *object;
    s32 unused;
} Entry802B6BE4;

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);
extern void func_802B8540(void *arg0, void *arg1, s16 arg2);
extern void func_802B8550(void *arg0, void *arg1, s16 arg2, s32 arg3);
extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B6BE4(void *arg0, void *arg1, s32 arg2) {
    char *cur;
    char *next;
    char *object;
    s32 type6;
    Entry802B6BE4 entry;

    object = *(char **)((char *)arg1 + 0x10);
    if (*(u8 *)(object + 0x34) == 0) {
        cur = *(char **)((char *)arg0 + 0x50);
        if (cur != 0) {
            type6 = 6;
            do {
                next = *(char **)(cur + 0);
                if (*(s16 *)(cur + 0xC) == type6 &&
                    *(void **)(cur + 0x10) == arg1) {
                    if (next != 0) {
                        *(s32 *)(next + 8) = *(s32 *)(next + 8) +
                                            *(s32 *)(cur + 8);
                    }
                    func_802B7520(cur);
                    func_802B7550(cur, (void **)((char *)arg0 + 0x48));
                }
                cur = next;
            } while (cur != 0);
        }
    }
    *(u8 *)(object + 0x33) = 0;
    *(u8 *)(object + 0x34) = 3;
    *(u8 *)(object + 0x30) = 0;
    *(s32 *)(object + 0x24) = *(s32 *)((char *)arg0 + 0x1C) + arg2;
    func_802B8540(*(void **)((char *)arg0 + 0x14), arg1, 0);
    func_802B8550(*(void **)((char *)arg0 + 0x14), arg1, 0, arg2);
    entry.type = 5;
    entry.object = arg1;
    func_802B51A4((void **)((char *)arg0 + 0x48), &entry, arg2);
}
