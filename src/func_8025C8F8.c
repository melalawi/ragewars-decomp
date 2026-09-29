#include "basetypes.h"

extern void func_80255C40(s32 *, s32, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_8025C8F8_S1 func_8025C8F8_S1;
typedef struct func_8025C8F8_S2 func_8025C8F8_S2;
struct func_8025C8F8_S1 {
    char pad0[0x14];
    char unk14;
    char pad14[0x28 - 0x14 - sizeof(char)];
    s32 unk28;
};
struct func_8025C8F8_S2 {
    char pad0[0x20];
    char unk20;
};

void func_8025C8F8(void *arg0, void *arg1, s32 arg2) {
    s32 i;

    func_80255C40(arg0, 0, 4);
    func_80255C40(&((func_8025C8F8_S1 *)(arg0))->unk14, 0, 4);
    i = 0;
    if (arg2 > 0) {
        do {
            func_80255CB4(arg0, arg1);
            i += 1;
            arg1 = &((func_8025C8F8_S2 *)(arg1))->unk20;
        } while (i < arg2);
    }
    ((func_8025C8F8_S1 *)(arg0))->unk28 = 0;
}
