#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B7FE0(void *arg0, s16 arg1);

typedef struct func_8025C458_S1 func_8025C458_S1;
typedef struct func_8025C458_S2 func_8025C458_S2;
typedef struct func_8025C458_S3 func_8025C458_S3;
struct func_8025C458_S1 {
    char unk0;
    char pad0[0xB0 - 0x0 - sizeof(char)];
    s32 unkB0;
    char padB0[0xC8 - 0xB0 - sizeof(s32)];
    f32 unkC8;
};
struct func_8025C458_S2 {
    char pad0[0x84];
    char unk84;
};
struct func_8025C458_S3 {
    char pad0[0xDC];
    s16 unkDC;
};

void func_8025C458(void *arg0, s32 arg1) {
    s8 *new_var;
    int new_var2;
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = ((func_8025C458_S1 *)(arg0))->unkB0;
    temp_s0_2 = &((func_8025C458_S2 *)(temp_s0))->unk84;
    new_var2 = 2;
    new_var = &((func_8025C458_S1 *)(arg0))->unk0;
    func_802B7FD0(temp_s0_2, ((func_8025C458_S3 *)((temp_s0 + ((*(s32 *)new_var) * new_var2))))->unkDC);
    func_802B7FE0(temp_s0_2, (s16)(s32)((f32) arg1 * (((func_8025C458_S1 *)(arg0))->unkC8)));
}
