#include "basetypes.h"

typedef void (*Callback802B6D04)(void *arg0);

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

void func_802B6D04(void *arg0, void *arg1) {
    char *cur;
    char *next;
    u16 type;
    s32 type16;

    cur = *(char **)((char *)arg0 + 0x50);
    if (cur != 0) {
        type16 = 0x16;
        do {
            type = *(u16 *)(cur + 0xC);
            next = *(char **)(cur + 0);
            if ((type == 0x16 || type == 0x17) &&
                *(void **)(cur + 0x10) == arg1) {
                ((Callback802B6D04)*(void **)((char *)arg0 + 0x78))(
                    *(void **)(cur + 0x14));
                func_802B7520(cur);
                if (next != 0) {
                    *(s32 *)(next + 8) = *(s32 *)(next + 8) +
                                        *(s32 *)(cur + 8);
                }
                func_802B7550(cur, (void **)((char *)arg0 + 0x48));
                if ((short)type == type16) {
                    *(u8 *)((char *)arg1 + 0x37) &= 0xFE;
                } else {
                    *(u8 *)((char *)arg1 + 0x37) &= 0xFD;
                }
                if (*(u8 *)((char *)arg1 + 0x37) == 0) {
                    break;
                }
            }
            cur = next;
        } while (cur != 0);
    }
}
