/* Marks available inventory entries with their slot indices. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char p[0x78];u8 unk78;char p2[6];s8 unk7F;char p3[17];u8 unk91;} State;
typedef struct {char p[0x4c];s32 unk4C;} Items;
typedef struct { u8 available, slot; } InventorySlot;
typedef struct {char p[0x18];Items *unk18;char p2[0x5bc];State *unk5D8;char p3[0x26];InventorySlot slots[8];} Arg;
s32 func_8022F4CC(void *, s32);                      /* extern */
extern char D_80102B00[];

typedef struct func_80426270_S1 func_80426270_S1;
struct func_80426270_S1 {
    char pad0[0x4];
    Items unk4;
};

void func_80426270(Arg *arg0) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s1;
    State *temp_a0;

    Items *var_s2;

    temp_a0 = arg0->unk5D8;
    if (temp_a0->unk91 != 1) {
        var_s1 = 0;
        if (temp_a0->unk78 != 0) {
            var_s2 = arg0->unk18;
            temp_s3 = temp_a0->unk7F * 0x190;
            do {
                temp_s0 = var_s2->unk4C;
                if (temp_s0 >= 0x4C3) {
                    temp_s0 = temp_s0 - 0x4C3;
                    temp_v0 = func_8022F4CC(temp_s3 + D_80102B00, temp_s0);
                    if (temp_v0 == 1) {
                        arg0->slots[temp_s0].available = temp_v0;
                        arg0->slots[temp_s0].slot = var_s1;
                    }
                }
                var_s1 += 1;
                var_s2 = &((func_80426270_S1 *)(var_s2))->unk4;
            } while (var_s1 < 8);
        }
    }
}
