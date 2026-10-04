#ifndef UNBAKE_SPAN_1000_CODE_80260D98_H
#define UNBAKE_SPAN_1000_CODE_80260D98_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Anim;
typedef struct Anim Anim;

struct BitFieldSource;
typedef struct BitFieldSource BitFieldSource;

struct Entry802612C8;
typedef struct Entry802612C8 Entry802612C8;

struct Pack;
typedef struct Pack Pack;

struct Six;
typedef struct Six Six;

struct Stream_func_80261418_de;
typedef struct Stream_func_80261418_de Stream_func_80261418_de;

struct Track_func_80261180_de;
typedef struct Track_func_80261180_de Track_func_80261180_de;

struct func_80260EEC_S1;
typedef struct func_80260EEC_S1 func_80260EEC_S1;

struct func_802624A0_S1;
typedef struct func_802624A0_S1 func_802624A0_S1;

struct Anim;
struct Anim {
    s32 time;
    s16 current;
    s16 next;
    u16 frames;
    u8 blending;
    u8 active;
    s32 length;
    void *resource;
};
struct BitFieldSource;
struct BitFieldSource {
    int base;
    unsigned int width;
};
struct Entry802612C8;
struct Entry802612C8 {
    s32 x;
    s32 pad4;
    s32 z;
    f32 f0C;
    s32 n10;
    s32 n14;
};
struct Pack;
struct Pack {
    s32 count;
    s32 offsets[1];
};
struct Six;
struct Six {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
};
struct Stream_func_80261418_de;
struct Stream_func_80261418_de {
    s32 unk0;
    char pad4[8];
    s32 unkC;
    char pad10[16];
    u32 unk20;
    u32 unk24;
    s32 unk28;
};
struct Track_func_80261180_de;
struct Track_func_80261180_de {
    s32 keys;
    char pad4[0x2C - 4];
    s32 stride;
};
struct func_80260EEC_S1;
struct func_80260EEC_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    Triple unk4;
};
struct func_802624A0_S1;
struct func_802624A0_S1 {
    char pad0[0x4];
    short unk4;
    char pad4[0x6 - 0x4 - sizeof(short)];
    short unk6;
    char pad6[0x8 - 0x6 - sizeof(short)];
    short unk8;
    char pad8[0xA - 0x8 - sizeof(short)];
    unsigned char unkA;
    char padA[0xB - 0xA - sizeof(unsigned char)];
    unsigned char unkB;
    char padB[0x10 - 0xB - sizeof(unsigned char)];
    int unk10;
};
extern void func_80260D78_de(void *arg0, int arg1, Triple t, int arg5);
extern int func_80260DA8_de(BitFieldSource *arg0, int arg1);
extern void func_80260E1C_de(void *arg0, int arg1, Triple t, int arg5);
extern int func_80260E4C_de(BitFieldSource *arg0, int arg1);
extern void func_80260ECC_de(void *arg0, int arg1, Triple t);
extern f32 func_80260EF8_de(LocalDecodeRange *arg0);
extern void func_80260FF0_de(unsigned int *record, int index);
extern unsigned int func_8026100C_de(unsigned int *arg0, unsigned int arg1);
extern void func_8026107C_de(int *arg0, int arg1);
extern void func_80261180_de(char **stream, f32 *out, s32 frames);
extern int func_8026140C_de(char *object);
extern f32 func_802615B4_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5);
extern unsigned int func_8026160C_de(unsigned int value);
extern u32 func_80261614_de(s32 arg0);
extern void func_802624A8_de(void *arg0);
#endif
