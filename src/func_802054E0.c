#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} CTriple;

extern s32 D_8011FE88;

extern void func_80278DE8(void *, s32, void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80216288(void *, s32, CTriple, s32);
extern s32 func_802170A0(void *, void *, s32, s32, s32);

void func_802054E0(void *arg0, void *arg1) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x18) + 0x14;
    M2C_FIELD(arg0, s32 *, 0x100) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x100) & 0xFFFEFFFF);
    func_80278DE8(arg0, 0x40000, arg0);
    if (M2C_FIELD(temp_s1, s32 *, 0x2C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x2000;
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x100;
    }
    if (D_8011FE88 == 4) {
        if (M2C_FIELD(temp_s1, s32 *, 0x34) != -1) {
            func_8025DE74(M2C_FIELD(temp_s1, s16 *, 0x36),
                          M2C_FIELD(arg0, s32 *, 8),
                          M2C_FIELD(arg0, s32 *, 0xC),
                          M2C_FIELD(arg0, s32 *, 0x10), 0, -1);
        }
        if (M2C_FIELD(temp_s1, s32 *, 0x30) != -1) {
            func_80216288(arg0, M2C_FIELD(temp_s1, s32 *, 0x30),
                          *(CTriple *)((char *)arg0 + 8), 0);
        }
        func_802170A0(arg0, arg1, 8,
                      M2C_FIELD(temp_s1, s32 *, 0x38),
                      M2C_FIELD(temp_s1, s32 *, 0x3C));
    }
}
