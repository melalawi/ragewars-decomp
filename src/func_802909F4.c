#include "basetypes.h"

extern void func_802720EC(void *arg0, void *arg1, s32 arg2);

typedef struct func_802909F4_S1 func_802909F4_S1;
typedef union func_802909F4_S1_U14 { s32 v0; char v1; } func_802909F4_S1_U14;
struct func_802909F4_S1 {
    char pad0[0x14];
    func_802909F4_S1_U14 unk14;
    char pad14[0x18 - 0x14 - sizeof(func_802909F4_S1_U14)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
};

void func_802909F4(void *arg0, void *arg1) {
    s32 *src = (s32 *)arg1;
    s32 a = src[0];
    s32 b = src[1];
    s32 c = src[2];
    ((func_802909F4_S1 *)(arg0))->unk14.v0 = a;
    ((func_802909F4_S1 *)(arg0))->unk18 = b;
    ((func_802909F4_S1 *)(arg0))->unk1C = c;
    func_802720EC(&((func_802909F4_S1 *)(arg0))->unk14.v1, arg1, c);
}
