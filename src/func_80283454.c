#include "basetypes.h"

typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
typedef struct { Triple v; s32 w; } Config;

extern Triple D_801042C8;
extern Config D_80104290;
extern char D_80121990;

extern void func_80271888(Quad *out, Triple *in);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);

typedef struct func_80283454_S1 func_80283454_S1;
struct func_80283454_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32* unk118;
    char pad118[0x12C - 0x118 - sizeof(s32*)];
    void* unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
};

void func_80283454(void *arg0, s32 arg1) {
    Quad q;
    Triple pos;

    if ((*((func_80283454_S1 *)(arg0))->unk118 & 0x10) != 0) {
        pos = D_801042C8;
    } else {
        pos = ((func_80283454_S1 *)(arg0))->unk1C;
    }
    func_80271888(&q, &pos);
    func_80280094(&D_80121990, arg0,
                  ((func_80283454_S1 *)(arg0))->unk12C,
                  ((func_80283454_S1 *)(arg0))->unk130,
                  ((func_80283454_S1 *)(arg0))->unk134, arg1,
                  pos, q, D_80104290.v, 0, D_80104290.w,
                  (((func_80283454_S1 *)(arg0))->unk5C & 0x200006) | 1);
}
