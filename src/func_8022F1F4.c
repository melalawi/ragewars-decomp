#include "basetypes.h"

extern u8 D_80102B00[];
extern u8 D_80102B08[];
extern s8 D_80102B0C[];
extern s8 D_80102B0D[];
extern s8 D_80102B0E[];
extern s8 D_80102C89[];
extern s8 D_80102C8A[];
extern s8 D_80102C8B[];
extern s8 D_80102C8C[];
extern s8 D_80102C8D[];
extern u8 D_80146398[];
extern s32 D_800D750C;

extern void func_8022EF20(void *arg0);
extern void func_802A1C08(void *arg0, s32 arg1, s32 arg2);

void func_8022F1F4(s32 arg0) {
    s32 offset;
    u8 *entry;
    u8 *config;

    offset = arg0 * 0x190;
    entry = D_80102B00 + offset;
    func_8022EF20(entry);
    *(s32 *)(D_80102B08 + offset) = 0;
    D_80102B0D[offset] = arg0;
    D_80102B0C[offset] = 0;
    D_80102B0E[offset] = 1;
    func_802A1C08(entry, D_800D750C, arg0 + 1);
    config = D_80146398 + arg0 * 0x96;
    D_80102C89[offset] = config[0x7B];
    D_80102C8A[offset] = config[0x7D];
    D_80102C8B[offset] = config[0x79];
    D_80102C8C[offset] = config[0x7A];
    D_80102C8D[offset] = config[0x82];
}
