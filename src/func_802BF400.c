#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
typedef struct func_802BF400_S1 func_802BF400_S1;
struct func_802BF400_S1 {
    char pad0[0x4];
    void* unk4;
};

extern func_802BF400_S1 *D_800D8440;

void *func_802BF400(void) {
    void *result = func_802C2020();
    void *saved = D_800D8440->unk4;
    func_802C2040(result);
    return saved;
}
