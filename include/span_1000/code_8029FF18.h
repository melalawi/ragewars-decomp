#ifndef UNBAKE_SPAN_1000_CODE_8029FF18_H
#define UNBAKE_SPAN_1000_CODE_8029FF18_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct FloatState18;
typedef struct FloatState18 FloatState18;

struct func_8029FFB8_S1;
typedef struct func_8029FFB8_S1 func_8029FFB8_S1;

struct FloatState18;
struct FloatState18 {
    f32 unk_0;
    f32 unk_4;
    unsigned char padding_8[8];
    f32 unk_10;
    f32 unk_14;
};
struct func_8029FFB8_S1;
struct func_8029FFB8_S1 {
    char pad0[0x30];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    int unk34;
    char pad34[0x38 - 0x34 - sizeof(int)];
    int unk38;
};
extern void func_8029EFB8_de(void *arg0);
extern void func_8029EFC8_de(void *arg0, float *arg1);
extern void func_8029EFE4_de(char *object, float *output);
extern void func_8029F000_de(void *arg0, void *arg1);
extern void func_8029F034_de(float *arg0, float *arg1, float *arg2, float *arg3);
extern void func_8029F080_de(float *arg0, float *arg1, float *arg2, float *arg3);
extern void func_8029F0CC_de(float *arg0, float *arg1, float *arg2, float *arg3);
extern void func_8029F118_de(float *arg0, float *arg1, float *arg2, float *arg3);
extern void func_8029F164_de(int arg0, int arg1);
extern void func_8029F180_de(s32 arg0, s32 arg1);
extern void func_8029F1A0_de(void *arg0, void *arg1, void *arg2, s32 arg3);
extern f64 func_8029F5E0_de(u8 *arg0);
extern void func_8029F888_de(u8 *path, u8 *drive, u8 *dir, u8 *name, u8 *ext);
extern void func_8029FB74_de(char *base, char *max);
extern void func_8029FE38_de(char *base, s32 n, s32 size, s32 (*compare)(char *a, char *b));
extern void func_802A01D8_de(int arg0);
extern u8 *func_802A0294_de(u8 *arg0, u8 *arg1, s32 arg2);
extern u8 *func_802A0324_de(u8 *destination, u8 *source, s32 count);
#endif
