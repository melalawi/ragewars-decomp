#include "basetypes.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern s16 func_8022F95C(void *arg0);
extern s32 func_802301E4(void *, void *);
extern s32 func_80214178(void *, void *, s32);

typedef struct { s16 value; char pad2[0x16]; } func_80232FE8_Record;
extern func_80232FE8_Record D_800CE8DC[];

typedef struct func_80232FE8_S1 func_80232FE8_S1;
typedef struct func_80232FE8_S2 func_80232FE8_S2;
typedef struct func_80232FE8_S3 func_80232FE8_S3;
struct func_80232FE8_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_80232FE8_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x770 - 0x650 - sizeof(s16)];
    s16 unk770;
};
struct func_80232FE8_S3 {
    char pad0[0x13C];
    s32 unk13C;
};

void func_80232FE8(void *arg0, void *arg1) {
    char *o = (char *) arg0;
    void *temp_s0;
    s16 idx;
    s32 temp_s3;

    temp_s0 = ((func_80232FE8_S1 *)(o))->unk1D8;
    idx = ((func_80232FE8_S2 *)(temp_s0))->unk650;
    temp_s3 = D_800CE8DC[idx].value;

    if (func_80222A80(temp_s0, ((func_80232FE8_S2 *)(temp_s0))->unk62E) == 0) {
        ((func_80232FE8_S2 *)(temp_s0))->unk770 = func_8022F95C(temp_s0);
    } else {
        ((func_80232FE8_S3 *)(arg1))->unk13C = 1;
        if (func_802301E4(arg0, arg1) == 0 && !(((func_80232FE8_S1 *)(o))->unk100 & 0x400)) {
            func_80214178(arg0, arg1, temp_s3);
        }
    }
}
