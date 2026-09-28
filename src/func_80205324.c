#include "basetypes.h"

#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} CTriple;

extern s32 D_8011FE88;
extern char D_8013BA80;

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *, s32, void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80216288(void *, s32, CTriple, s32);
extern s32 func_802170A0(void *, void *, s32, s32, s32);
extern void func_802A6D28(void *, s32);

void func_80205324(void *arg0, void *arg1) {
    s32 temp_s3;
    s32 *flag;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x18) + 0x14;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 1);
    func_80278DE8(arg0, 0x40000, arg0);
    if (M2C_FIELD(arg1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) & 0xFFFEFFFF);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x2000;
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x100;
    }
    temp_s3 = *flag;
    if (temp_s3 == 4) {
        if (M2C_FIELD(temp_s1, s32 *, 0x20) != -1) {
            func_8025DE74(M2C_FIELD(temp_s1, s16 *, 0x22), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), 0, -1);
        }
        if (M2C_FIELD(temp_s1, s32 *, 0x1C) != -1) {
            func_80216288(arg0, M2C_FIELD(temp_s1, s32 *, 0x1C), *(CTriple *)((char *)arg0 + 8), 0);
        }
        func_802170A0(arg0, arg1, 4, M2C_FIELD(temp_s1, s32 *, 0x24), M2C_FIELD(temp_s1, s32 *, 0x28));
        func_802A6D28(&D_8013BA80, (s32) arg0);
        if (*flag != temp_s3) {
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) ((M2C_FIELD(arg0, s32 *, 0x100) & ~0x100) | 0x08000000);
    }
}
