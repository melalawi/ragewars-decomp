#ifndef UNBAKE_SPAN_1000_CODE_802AB720_H
#define UNBAKE_SPAN_1000_CODE_802AB720_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_802AB400_de;
typedef struct Actor_func_802AB400_de Actor_func_802AB400_de;

struct Actor_func_802AB6EC_de;
typedef struct Actor_func_802AB6EC_de Actor_func_802AB6EC_de;

struct Entry_func_802AB400_de;
typedef struct Entry_func_802AB400_de Entry_func_802AB400_de;

struct Gfx_func_802AAC28_de;
typedef struct Gfx_func_802AAC28_de Gfx_func_802AAC28_de;

struct IntegerState48;
typedef struct IntegerState48 IntegerState48;

struct IntegerState90;
typedef struct IntegerState90 IntegerState90;

struct Table802AB8DC;
typedef struct Table802AB8DC Table802AB8DC;

struct func_802AB78C_S1;
typedef struct func_802AB78C_S1 func_802AB78C_S1;

struct func_802AB794_S1;
typedef struct func_802AB794_S1 func_802AB794_S1;

struct func_802AB8DC_S1;
typedef struct func_802AB8DC_S1 func_802AB8DC_S1;

struct func_802ABC18_S1;
typedef struct func_802ABC18_S1 func_802ABC18_S1;

struct Actor_func_802AB400_de;
struct Actor_func_802AB400_de {
    u8 type;
    char pad1[0xE4 - 1];
    u16 team;
    char padE6[0x100 - 0xE6];
    s32 flags;
    char pad104[0x5D8 - 0x104];
    func_8020EA10_S3 *model;
    char pad5DC[0x5E4 - 0x5DC];
    s32 count;
    char pad5E8[0x5F4 - 0x5E8];
    s16 levels[7];
    char pad602[0x602 - 0x602];
    Shared_Slot slots[22];
};
struct Actor_func_802AB6EC_de;
struct Actor_func_802AB6EC_de {
    char pad0[0x5E4];
    s32 enabled;
    char pad5E8[0x1224 - 0x5E8];
    s32 lockOn[2];
    char pad122C[0x16E0 - 0x122C];
    struct Actor_func_802AB6EC_de *next;
};
struct Entry_func_802AB400_de;
struct Entry_func_802AB400_de {
    char pad0[4];
    s16 id;
    char pad6[6];
    s16 index;
};
struct Gfx_func_802AAC28_de;
struct Gfx_func_802AAC28_de {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
};
struct IntegerState48;
struct IntegerState48 {
    unsigned char padding_0[60];
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
};
struct IntegerState90;
struct IntegerState90 {
    unsigned char padding_0[132];
    s32 unk_84;
    s32 unk_88;
    s32 unk_8C;
};
struct Table802AB8DC;
struct Table802AB8DC {
    s16 count;
    u8 pad2[6];
    Entry802AB8DC entries[1];
};
struct func_802AB78C_S1;
struct func_802AB78C_S1 {
    char pad0[0x8C];
    int unk8C;
};
struct func_802AB794_S1;
struct func_802AB794_S1 {
    char pad0[0x40];
    int unk40;
    char pad40[0x88 - 0x40 - sizeof(int)];
    int unk88;
};
struct func_802AB8DC_S1;
struct func_802AB8DC_S1 {
    char pad0[0x8];
    Entry802AB8DC unk8;
};
struct func_802ABC18_S1;
struct func_802ABC18_S1 {
    char pad0[0x114];
    s32 unk114;
};
extern f32 func_802AA864_de(void);
extern void func_802AA9F4_de(void);
extern void func_802AAB68_de(float arg0, float arg1);
extern void func_802AADCC_de(u16 *grid, s16 x0, s32 y);
extern void func_802AB0B0_de(u16 *grid, s16 x0, s32 y);
extern void func_802AB1B0_de(u16 *grid, f32 x0, f32 y, f32 sx, f32 sy);
extern void func_802AB35C_de(int unused, unsigned char *pairs, int count, unsigned char *table);
extern void func_802AB3A8_de(void);
extern void func_802AD1C8_us(void);
#endif
