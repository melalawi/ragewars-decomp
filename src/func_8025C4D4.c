#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B7F50(void *arg0, f32 arg1);

typedef struct func_8025C4D4_S1 func_8025C4D4_S1;
typedef struct func_8025C4D4_S2 func_8025C4D4_S2;
typedef struct func_8025C4D4_S3 func_8025C4D4_S3;
struct func_8025C4D4_S1 {
    char unk0;
    char pad0[0x34 - 0x0 - sizeof(char)];
    f32 unk34;
    char pad34[0xB0 - 0x34 - sizeof(f32)];
    s32 unkB0;
    char padB0[0xB8 - 0xB0 - sizeof(s32)];
    f32 unkB8;
};
struct func_8025C4D4_S2 {
    char pad0[0x84];
    char unk84;
};
struct func_8025C4D4_S3 {
    char pad0[0xDC];
    s16 unkDC;
};

void func_8025C4D4(void *arg0, f32 arg1) {
    s8 *new_var;
    int new_var2;
    s32 temp_s0;
    void *temp_s0_2;
    f32 scaled;

    temp_s0 = ((func_8025C4D4_S1 *)(arg0))->unkB0;
    temp_s0_2 = &((func_8025C4D4_S2 *)(temp_s0))->unk84;
    new_var2 = 2;
    new_var = &((func_8025C4D4_S1 *)(arg0))->unk0;
    func_802B7FD0(temp_s0_2, ((func_8025C4D4_S3 *)((temp_s0 + ((*(s32 *)new_var) * new_var2))))->unkDC);
    scaled = arg1 * (((func_8025C4D4_S1 *)(arg0))->unk34);
    scaled = scaled * (((func_8025C4D4_S1 *)(arg0))->unkB8);
    func_802B7F50(temp_s0_2, scaled);
}
