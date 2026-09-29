#include "basetypes.h"

extern void func_8022B180(s32);
extern s32 func_80222A80(void *arg0, s16 arg1);
extern s32 func_802831FC(void *, s32);
extern s16 func_8022F95C(void *arg0);
extern s32 func_802301E4(void *, void *);
extern s32 func_80214178(void *, void *, s32);

typedef struct { s16 value; char pad2[0x16]; } func_80233428_Record;
extern func_80233428_Record D_800CE8DC[];
extern char D_80121990;
extern s32 D_801468F4;

typedef struct func_80233428_S1 func_80233428_S1;
typedef struct func_80233428_S2 func_80233428_S2;
struct func_80233428_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_80233428_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x62E - 0x5D8 - sizeof(char*)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x6AC - 0x650 - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x770 - 0x6AC - sizeof(s32)];
    s16 unk770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk11D8;
};

void func_80233428(void *arg0, void *arg1) {
    void *actor;
    s16 idx;
    s32 value;

    actor = ((func_80233428_S1 *)(arg0))->unk1D8;
    idx = ((func_80233428_S2 *)(actor))->unk650;
    value = D_800CE8DC[idx].value;

    if (((func_80233428_S2 *)(actor))->unk11D8 <= 0.0f) {
        if ((*(u8 *)(((func_80233428_S2 *)(actor))->unk5D8 + 0x8F) == 0 ||
             D_801468F4 == 0) &&
            (((func_80233428_S2 *)(actor))->unk6AC & 0x4000)) {
            func_8022B180(actor);
        }
    }

    if (func_80222A80(actor, ((func_80233428_S2 *)(actor))->unk62E) == 0) {
        if (func_802831FC(&D_80121990, actor) == 0) {
            ((func_80233428_S2 *)(actor))->unk770 = func_8022F95C(actor);
        }
    } else if (func_802301E4(arg0, arg1) == 0 &&
               !(((func_80233428_S1 *)(arg0))->unk100 & 0x400)) {
        func_80214178(arg0, arg1, value);
    }
}
