#include "basetypes.h"

typedef struct {
    s16 f0;
    char pad[14];
} Buf16;

extern s32 func_802B73C4(void *arg0, s32 *arg1);
extern s32 func_802B7198(void *arg0);
extern void func_802B738C(void *arg0, void *arg1);
extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B6DF4_S1 func_802B6DF4_S1;
struct func_802B6DF4_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x24 - 0x18 - sizeof(void*)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x48 - 0x2C - sizeof(s32)];
    char unk48;
    char pad48[0x7C - 0x48 - sizeof(char)];
    void* unk7C;
    char pad7C[0x80 - 0x7C - sizeof(void*)];
    char* unk80;
    char pad80[0x84 - 0x80 - sizeof(char*)];
    s32 unk84;
};

void func_802B6DF4(void *arg0) {
    Buf16 sp10;
    s32 sp20;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = ((func_802B6DF4_S1 *)(arg0))->unk18;
    if ((((func_802B6DF4_S1 *)(arg0))->unk2C == 1) && (temp_s0 != 0) &&
        (func_802B73C4(temp_s0, &sp20) & 0xFF)) {
        if ((((func_802B6DF4_S1 *)(arg0))->unk84 != 0) &&
            ((func_802B7198(temp_s0) + sp20) >=
             *(s32 *)(((func_802B6DF4_S1 *)(arg0))->unk80 + 8))) {
            func_802B738C(temp_s0, ((func_802B6DF4_S1 *)(arg0))->unk7C);
            temp_v1 = ((func_802B6DF4_S1 *)(arg0))->unk84;
            if (temp_v1 != -1) {
                ((func_802B6DF4_S1 *)(arg0))->unk84 = temp_v1 - 1;
            }
        }
        sp10.f0 = 0;
        func_802B51A4(&((func_802B6DF4_S1 *)(arg0))->unk48, &sp10,
                      sp20 * ((func_802B6DF4_S1 *)(arg0))->unk24);
    }
}
