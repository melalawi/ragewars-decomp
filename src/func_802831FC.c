#include "basetypes.h"

typedef struct func_802831FC_S1 func_802831FC_S1;
typedef struct func_802831FC_S2 func_802831FC_S2;
struct func_802831FC_S1 {
    char pad0[0xFC3C];
    s8* unkFC3C;
};
struct func_802831FC_S2 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x12C - 0x4 - sizeof(u16)];
    s32 unk12C;
    char pad12C[0x1EC - 0x12C - sizeof(s32)];
    s8* unk1EC;
};

s32 func_802831FC(void *arg0, s32 arg1) {
    s8 *record;
    s32 count;
    u16 v;

    record = ((func_802831FC_S1 *)(arg0))->unkFC3C;
    count = 0;
    if (record != 0) {
        do {
            v = ((func_802831FC_S2 *)(record))->unk4;
            if (((v == 0x3EF) || (v == 0x41E)) && (((func_802831FC_S2 *)(record))->unk12C == arg1)) {
                count += 1;
            }
            record = ((func_802831FC_S2 *)(record))->unk1EC;
        } while (record != 0);
    }
    return count;
}
