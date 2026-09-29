#include "basetypes.h"

extern struct { void **value; } D_80104564;
extern s32 D_80104570;
extern struct { s32 value; } D_8010513C;

extern void func_80255E78(void *, s32);

typedef struct { char pad[0xC]; s32 flags; } func_80254A70_Node;

typedef struct func_80254A70_S1 func_80254A70_S1;
struct func_80254A70_S1 {
    char pad0[0x14];
    char unk14;
};

void func_80254A70(s32 arg0, s32 arg1) {
    func_80255E78((void *)&D_80104570, arg1);
    if (((func_80254A70_Node *)arg1)->flags & 0x1000) {
        func_80255E78(&((func_80254A70_S1 *)(&D_80104570))->unk14, arg1);
    }
    if (*(&D_80104570 - 2) == arg1) {
        *(&D_80104570 - 2) = 0;
    }
    ((func_80254A70_Node *)arg1)->flags = 0;
    D_80104564.value[D_8010513C.value] = (void *)arg1;
    *(&D_80104570 + 0x2F3) += 1;
}
