#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void *D_800D8440;

void *func_802BF400(void) {
    void *result = func_802C2020();
    void *saved = *(void **)((char *)D_800D8440 + 0x4);
    func_802C2040(result);
    return saved;
}
