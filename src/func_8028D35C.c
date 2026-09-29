#include "basetypes.h"

extern s32 func_8028FE08(s32 *arg0, s32 arg1, s32 arg2);
extern s32 func_80254224(s32 arg0, s32 *arg1, s32 arg2, void *arg3);
extern void **func_802543A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6);
extern void *func_802C2490(void *destination, const void *source, int count);
extern void func_802537D8(void *, void *);

extern s32 D_800CA200;
extern char D_800CA370;

typedef struct func_8028D35C_S1 func_8028D35C_S1;
typedef struct func_8028D35C_S2 func_8028D35C_S2;
struct func_8028D35C_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x4C - 0x1C - sizeof(s32)];
    s32* unk4C;
    char pad4C[0x1B40C - 0x4C - sizeof(s32*)];
    s32 unk1B40C;
};
struct func_8028D35C_S2 {
    void* unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    s32 unk4;
};

void func_8028D35C(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 sp20;
    s32 tempv0;
    s32 temps2;
    void *node;
    s32 count;

    tempv0 = func_8028FE08(((func_8028D35C_S1 *)(arg0))->unk4C, ((func_8028D35C_S1 *)(arg0))->unk1C, arg1);
    temps2 = func_80254224(0, &sp20, tempv0, &D_800CA200);
    node = func_802543A8(0, sp20, 8, tempv0, (s32)arg0, 0, &D_800CA370 + 4);
    count = ((func_8028D35C_S2 *)(node))->unk4;
    if (arg3 < count) {
        count = arg3;
    }
    func_802C2490(arg2, ((func_8028D35C_S2 *)(node))->unk0, count);
    func_802537D8(0, (s32)node);
    if (((func_8028D35C_S1 *)(arg0))->unk1B40C != arg1) {
        func_802537D8(0, temps2);
    }
}
