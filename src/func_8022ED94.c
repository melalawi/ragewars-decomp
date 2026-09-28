#include "basetypes.h"

extern void func_80264874(s32 a);
extern void func_802538A8(s32 a);
extern void func_802537D8(void *, void *);

void func_8022ED94(void *arg0) {
    s32 temp_a1;

    func_80264874(0);
    func_802538A8(0);
    temp_a1 = *(s32 *)((char *)arg0 + 0);
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
        *(s32 *)((char *)arg0 + 0) = 0;
        *(s32 *)((char *)arg0 + 4) = 0;
        *(s32 *)((char *)arg0 + 8) = 0;
    }
}
