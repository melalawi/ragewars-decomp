#ifndef UNBAKE_SPAN_1000_CODE_802A26F8_H
#define UNBAKE_SPAN_1000_CODE_802A26F8_H
#include "common/types.h"
#include "../types.h"
struct Record_func_802A1990_de;
typedef struct Record_func_802A1990_de Record_func_802A1990_de;

struct StatePair;
typedef struct StatePair StatePair;

struct func_802A2D14_S1;
typedef struct func_802A2D14_S1 func_802A2D14_S1;

struct func_802A2DE4_S1;
typedef struct func_802A2DE4_S1 func_802A2DE4_S1;

struct func_802A2DE4_S2;
typedef struct func_802A2DE4_S2 func_802A2DE4_S2;

struct func_802A2E5C_S1;
typedef struct func_802A2E5C_S1 func_802A2E5C_S1;

struct func_802A2EC0_S1;
typedef struct func_802A2EC0_S1 func_802A2EC0_S1;

struct Record_func_802A1990_de;
struct Record_func_802A1990_de {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[7];
    s32 fields_2C[5];
    s32 field_40;
    struct Record_func_802A1990_de *field_44;
    s32 field_48;
    s32 field_4C;
    s32 field_50;
    s32 field_54;
    s32 field_58;
    s32 field_5C;
    s32 field_60[3];
};
struct StatePair;
struct StatePair {
    f32 value;
    s32 state;
};
struct func_802A2D14_S1;
struct func_802A2D14_S1 {
    char pad0[0x4C];
    s32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(s32)];
    s32 unk50;
    char pad50[0x54 - 0x50 - sizeof(s32)];
    s32 unk54;
    char pad54[0x58 - 0x54 - sizeof(s32)];
    s32 unk58;
};
struct func_802A2DE4_S1;
struct func_802A2DE4_S1 {
    char pad0[0x8];
    char * unk8;
    char pad8[0x48 - 0x8 - sizeof(char*)];
    int unk48;
    char pad48[0x5C - 0x48 - sizeof(int)];
    int unk5C;
};
struct func_802A2DE4_S2;
struct func_802A2DE4_S2 {
    char pad0[0x4];
    char * unk4;
    char pad4[0xE - 0x4 - sizeof(char*)];
    unsigned short unkE;
    char padE[0x10 - 0xE - sizeof(unsigned short)];
    unsigned char unk10;
};
struct func_802A2E5C_S1;
struct func_802A2E5C_S1 {
    char pad0[0x8];
    void * unk8;
    char pad8[0x48 - 0x8 - sizeof(void*)];
    s32 unk48;
    char pad48[0x5C - 0x48 - sizeof(s32)];
    s32 unk5C;
};
struct func_802A2EC0_S1;
struct func_802A2EC0_S1 {
    char pad0[0x48];
    s32 unk48;
    char pad48[0x5C - 0x48 - sizeof(s32)];
    s32 unk5C;
};
extern void func_802A16F8_de(s32 arg0);
extern void func_802A176C_de(void);
extern void func_802A17C4_de(void);
extern void func_802A17F8_de(void);
extern void func_802A182C_de(void);
extern void func_802A18F4_de(void);
extern void func_802A18FC_de(void);
extern void func_802A1918_de(int *arg0, int *arg1);
extern int func_802A1934_de(void);
extern void func_802A1944_de(void);
extern void func_802A1960_de(void);
extern s32 func_802A1B50_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_802A2090_de(void);
#endif
