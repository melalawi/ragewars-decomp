#ifndef UNBAKE_SPAN_1000_CODE_80274A24_H
#define UNBAKE_SPAN_1000_CODE_80274A24_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Header_func_80275AA4_de;
typedef struct Header_func_80275AA4_de Header_func_80275AA4_de;

struct ObjectLinks1C;
typedef struct ObjectLinks1C ObjectLinks1C;

union ObjectLinks4_2;
typedef union ObjectLinks4_2 ObjectLinks4_2;

struct Packed;
typedef struct Packed Packed;

struct Polygon_func_80275410_de;
typedef struct Polygon_func_80275410_de Polygon_func_80275410_de;

struct func_80274BEC_S1;
typedef struct func_80274BEC_S1 func_80274BEC_S1;

struct func_80274BEC_S2;
typedef struct func_80274BEC_S2 func_80274BEC_S2;

struct func_80274C64_S1;
typedef struct func_80274C64_S1 func_80274C64_S1;

struct func_80274DFC_S1;
typedef struct func_80274DFC_S1 func_80274DFC_S1;

struct func_802760C4_S1;
typedef struct func_802760C4_S1 func_802760C4_S1;

struct func_802760F8_S1;
typedef struct func_802760F8_S1 func_802760F8_S1;

struct func_80276284_S1;
typedef struct func_80276284_S1 func_80276284_S1;

struct Header_func_80275AA4_de;
struct Header_func_80275AA4_de {
    short unk0;
    short unk2;
    void *first[3];
    void *second[3];
    int unk1C;
};
union ObjectLinks4_2;
union ObjectLinks4_2 {
    void * v0;
    u16 * v1;
};
struct ObjectLinks1C;
struct ObjectLinks1C {
    char pad0[0x4];
    char * unk_4;
    char pad4[0x8 - 0x4 - sizeof(char*)];
    char * unk_8;
    char pad8[0xC - 0x8 - sizeof(char*)];
    char * unk_C;
    char padC[0x10 - 0xC - sizeof(char*)];
    ObjectLinks4_2 unk_10;
    char pad10[0x14 - 0x10 - sizeof(ObjectLinks4_2)];
    ObjectLinks4_2 unk_14;
    char pad14[0x18 - 0x14 - sizeof(ObjectLinks4_2)];
    ObjectLinks4_2 unk_18;
};
struct Packed;
struct Packed {
    unsigned short unk0;
    unsigned short unk2;
    unsigned short first[3];
    unsigned short second[3];
    int unk10;
};
struct Polygon_func_80275410_de;
struct Polygon_func_80275410_de {
    char pad0[2];
    u16 flags;
    Vec3 *v0;
    Vec3 *v1;
    Vec3 *v2;
};
struct func_80274BEC_S1;
struct func_80274BEC_S1 {
    func_8022E280_S1_U744 unk0;
    char pad0[0x4 - 0x0 - sizeof(func_8022E280_S1_U744)];
    func_8022E280_S1_U744 unk4;
    char pad4[0x8 - 0x4 - sizeof(func_8022E280_S1_U744)];
    func_8022E280_S1_U744 unk8;
};
struct func_80274BEC_S2;
struct func_80274BEC_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x30 - 0x20 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    f32 unk38;
};
struct func_80274C64_S1;
struct func_80274C64_S1 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    f32 unk2C;
};
struct func_80274DFC_S1;
struct func_80274DFC_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
    char pad8[0x30 - 0x8 - sizeof(f32)];
    Vec3 unk30;
};
struct func_802760C4_S1;
struct func_802760C4_S1 {
    char pad0[0x58];
    u8 unk58;
};
struct func_802760F8_S1;
struct func_802760F8_S1 {
    char pad0[0x59];
    u8 unk59;
};
struct func_80276284_S1;
struct func_80276284_S1 {
    u16 unk0;
    char pad0[0x2 - 0x0 - sizeof(u16)];
    u16 unk2;
    char pad2[0x10 - 0x2 - sizeof(u16)];
    void * unk10;
    char pad10[0x14 - 0x10 - sizeof(void*)];
    void * unk14;
    char pad14[0x18 - 0x14 - sizeof(void*)];
    void * unk18;
};
extern f32 func_802749B4_de(f32 arg0, f32 arg1);
extern void func_80274B7C_de(void *arg0, void *arg1, void *arg2);
extern void func_80274BF4_de(void *arg0);
extern void func_80274C7C_de(void *arg0);
extern s32 func_80274D8C_de(void *arg0, void *arg1);
extern void func_80275A58_de(void *arg0);
extern void func_80275AA4_de(Header_func_80275AA4_de *dst, Packed *src, char *base, int unused, char *extra);
extern void func_80276184_de(void *arg0);
extern void func_802761B8_de(void *arg0);
extern void func_80276214_de(void *arg0, u16 arg1);
extern void func_80276298_de(void *arg0, u16 arg1);
extern void func_8027640C_de(f32 *arg0, s32 arg1, Vec3 *arg2);
#endif
