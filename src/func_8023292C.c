#include "basetypes.h"

extern s32 D_800D297C;
extern u8 D_801462E5;

extern s32 func_80442B98(void *arg0);
extern s32 func_8022AB10(void *arg0, s16 arg1);
extern void func_8026DA4C();

typedef struct func_8023292C_S1 func_8023292C_S1;
typedef struct func_8023292C_S2 func_8023292C_S2;
typedef struct func_8023292C_S3 func_8023292C_S3;
typedef struct func_8023292C_S4 func_8023292C_S4;
struct func_8023292C_S1 {
    char pad0[0xB4];
    s32 unkB4;
    char padB4[0x1D8 - 0xB4 - sizeof(s32)];
    void* unk1D8;
};
struct func_8023292C_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x11F8 - 0x62E - sizeof(s16)];
    s32 unk11F8;
};
struct func_8023292C_S3 {
    char pad0[0x144];
    s32 unk144;
};
struct func_8023292C_S4 {
    char pad0[0xC];
    s32 unkC;
};

void func_8023292C(void *arg0, void *arg1, void *arg2) {
    void *actor;
    void *resource;
    s32 result;
    s32 one;
    s16 state;

    actor = ((func_8023292C_S1 *)(arg0))->unk1D8;
    resource = ((func_8023292C_S2 *)(actor))->unk5DC;
    result = -1;
    if (resource == 0) {
        return;
    }
    if (D_801462E5 != 0) {
        if (func_80442B98((char *)resource + 0x554) != 0) {
            return;
        }
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    one = 1;
    if ((state == one) && (((func_8023292C_S3 *)(arg1))->unk144 == 0)) {
        return;
    }
    if ((state >= 0x12) && (func_8022AB10(actor, state) <= 0)) {
        return;
    }
    state = ((func_8023292C_S2 *)(actor))->unk62E;
    if ((state == 0xE) || (state == one) || (state == 0)) {
        result = ((func_8023292C_S2 *)(actor))->unk11F8;
    }
    func_8026DA4C(((func_8023292C_S4 *)(arg2))->unkC,
                  ((func_8023292C_S1 *)(arg0))->unkB4, 1,
                  (char *)arg0 + (D_800D297C * 0x18 + 0x140), 0, result);
}
