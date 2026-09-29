#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern f32 D_800C7E4C;

typedef struct func_8022C7E8_S1 func_8022C7E8_S1;
typedef struct func_8022C7E8_S2 func_8022C7E8_S2;
typedef struct func_8022C7E8_S3 func_8022C7E8_S3;
struct func_8022C7E8_S1 {
    char pad0[0x6B0];
    s32 unk6B0;
    char pad6B0[0x6E4 - 0x6B0 - sizeof(s32)];
    f32 unk6E4;
    char pad6E4[0x7E8 - 0x6E4 - sizeof(f32)];
    s32 unk7E8;
    char pad7E8[0x11D8 - 0x7E8 - sizeof(s32)];
    f32 unk11D8;
};
struct func_8022C7E8_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x38 - 0x18 - sizeof(void*)];
    s32 unk38;
};
struct func_8022C7E8_S3 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_8022C7E8(void *arg0, void *arg1) {
    f32 field6E4;

    if (((func_8022C7E8_S1 *)(arg0))->unk7E8 == 0) {
        field6E4 = ((func_8022C7E8_S1 *)(arg0))->unk6E4;
        if (!(D_800C7E4C < field6E4)) {
            if (!(((func_8022C7E8_S2 *)(arg1))->unk38 & 0xC0000)) {
                if (((func_8022C7E8_S3 *)(((func_8022C7E8_S2 *)(arg1))->unk18))->unk14 & 2) {
                    if ((((func_8022C7E8_S1 *)(arg0))->unk6B0 & 0x10) && (((func_8022C7E8_S1 *)(arg0))->unk11D8 <= 0.0f)) {
                        func_802227D0(arg0, arg1, 5);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
