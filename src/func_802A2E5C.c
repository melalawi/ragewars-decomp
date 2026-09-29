#include "basetypes.h"

extern s32 func_8025DF54(s32);

typedef struct func_802A2E5C_S1 func_802A2E5C_S1;
typedef struct func_802A2E5C_S2 func_802A2E5C_S2;
struct func_802A2E5C_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0x48 - 0x8 - sizeof(void*)];
    s32 unk48;
    char pad48[0x5C - 0x48 - sizeof(s32)];
    s32 unk5C;
};
struct func_802A2E5C_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0xE - 0x4 - sizeof(void*)];
    u16 unkE;
    char padE[0x10 - 0xE - sizeof(u16)];
    s8 unk10;
};

s32 func_802A2E5C(void *arg0) {
    void *p;

    ((func_802A2E5C_S1 *)(arg0))->unk5C = 2;
    ((func_802A2E5C_S1 *)(arg0))->unk48 = 0;
    func_8025DF54(0xE74);
    p = ((func_802A2E5C_S1 *)(arg0))->unk8;
    if (p != 0) {
        do {
            if (((func_802A2E5C_S2 *)(p))->unkE != 8) {
                ((func_802A2E5C_S2 *)(p))->unk10 = 0x64;
            }
            p = ((func_802A2E5C_S2 *)(p))->unk4;
        } while (p != 0);
    }
    return 0;
}
