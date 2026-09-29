#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

typedef struct func_80207890_S1 func_80207890_S1;
typedef struct func_80207890_S2 func_80207890_S2;
struct func_80207890_S1 {
    char pad0[0x37];
    s8 unk37;
    char pad37[0x94 - 0x37 - sizeof(s8)];
    s8 unk94;
    char pad94[0x96 - 0x94 - sizeof(s8)];
    u16 unk96;
    char pad96[0x98 - 0x96 - sizeof(u16)];
    u16 unk98;
};
struct func_80207890_S2 {
    char pad0[0x100];
    s32 unk100;
};

void func_80207890(void *arg0, void *arg1) {
    ((func_80207890_S1 *)(arg1))->unk37 = 0;
    func_80214178(arg0, arg1, 0);
    if (((func_80207890_S1 *)(arg1))->unk94 == 1) {
        ((func_80207890_S1 *)(arg1))->unk98 = ((func_80207890_S1 *)(arg1))->unk96;
        func_80214178(arg0, arg1, 4);
    }
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        ((func_80207890_S2 *)(arg0))->unk100 &= ~0x100;
    }
}
