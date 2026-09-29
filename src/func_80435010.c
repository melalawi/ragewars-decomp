/* Advances the current player's name-entry character one step forward, defaulting an unset slot to 'A' and wrapping past 'Z' back to a space. */
#include "basetypes.h"

extern char *D_800E54A4;
extern void *func_8041B87C(s32, s32);

typedef struct func_80435010_S1 func_80435010_S1;
typedef struct func_80435010_S2 func_80435010_S2;
typedef struct func_80435010_S3 func_80435010_S3;
typedef struct func_80435010_S4 func_80435010_S4;
struct func_80435010_S1 {
    char pad0[0x2C];
    s32 unk2C;
};
struct func_80435010_S2 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80435010_S3 {
    char pad0[0xB8C];
    u8 unkB8C;
};
struct func_80435010_S4 {
    char pad0[0xB9C];
    s32 unkB9C;
};

void func_80435010(s32 arg0) {
    char *base;
    char *entry;
    u8 value;
    s32 *index;
    char *flags;

    flags = D_800E54A4 + arg0 * 4;
    ((func_80435010_S1 *)(flags))->unk2C = 0;
    func_8041B87C(((func_80435010_S2 *)(D_800E54A4))->unk4, arg0);
    index = (s32 *)((arg0 * 0xB68 + D_800E54A4) + 0xB9C);
    entry = (*index * 2 + arg0 * 0xB68) + D_800E54A4;
    if (((func_80435010_S3 *)(entry))->unkB8C == 0) {
        ((func_80435010_S3 *)(entry))->unkB8C = 0x41;
    }
    base = arg0 * 0xB68 + D_800E54A4;
    entry = (((func_80435010_S4 *)(base))->unkB9C * 2 + arg0 * 0xB68) + D_800E54A4;
    value = ((func_80435010_S3 *)(entry))->unkB8C;
    value = value + 1;
    if (value >= 0x5B) {
        value = 0x20;
    }
    ((func_80435010_S3 *)(entry))->unkB8C = value;
}
