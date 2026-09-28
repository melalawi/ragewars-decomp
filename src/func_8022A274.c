#include "basetypes.h"

extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_802458F8(void);
extern void func_8021C9B4(void *arg0, void *arg1);

void func_8022A274(void *arg0, void *arg1) {
    void *cur;

    func_8026D980();
    cur = *(void **)((char *)arg0 + 0x20);
    if (cur != 0) {
        do {
            if (*(void **)((char *)cur + 0x5DC) != arg1 ||
                *(s32 *)((char *)arg1 + 0x24) == 1 ||
                func_802458F8() != 0) {
                func_8021C9B4(cur, arg1);
            }
            cur = *(void **)((char *)cur + 0x16E0);
        } while (cur != 0);
    }
    func_8026D9D0();
}
