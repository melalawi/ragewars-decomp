#ifndef UNBAKE_SPAN_1000_CODE_8022C36C_H
#define UNBAKE_SPAN_1000_CODE_8022C36C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct FloatState6C8;
typedef struct FloatState6C8 FloatState6C8;

struct ObjectState668;
typedef struct ObjectState668 ObjectState668;

struct ObjectState90;
typedef struct ObjectState90 ObjectState90;

struct func_8022C444_S2;
typedef struct func_8022C444_S2 func_8022C444_S2;

struct func_8022C54C_S3;
typedef struct func_8022C54C_S3 func_8022C54C_S3;

struct func_8022C640_S2;
typedef struct func_8022C640_S2 func_8022C640_S2;

struct func_8022C7E8_S1;
typedef struct func_8022C7E8_S1 func_8022C7E8_S1;

struct func_8022C884_S1;
typedef struct func_8022C884_S1 func_8022C884_S1;

struct func_8022C894_S1;
typedef struct func_8022C894_S1 func_8022C894_S1;

struct func_8022C8EC_S1;
typedef struct func_8022C8EC_S1 func_8022C8EC_S1;

struct func_8022CA04_S2;
typedef struct func_8022CA04_S2 func_8022CA04_S2;

struct func_8022CA04_S5;
typedef struct func_8022CA04_S5 func_8022CA04_S5;

struct func_8022CC24_S1;
typedef struct func_8022CC24_S1 func_8022CC24_S1;

struct func_8022CDAC_S1;
typedef struct func_8022CDAC_S1 func_8022CDAC_S1;

struct func_8022CF28_S1;
typedef struct func_8022CF28_S1 func_8022CF28_S1;

struct func_8022CF28_S2;
typedef struct func_8022CF28_S2 func_8022CF28_S2;

struct func_8022D030_S1;
typedef struct func_8022D030_S1 func_8022D030_S1;

struct func_8022D154_S1;
typedef struct func_8022D154_S1 func_8022D154_S1;

struct func_8022D154_S2;
typedef struct func_8022D154_S2 func_8022D154_S2;

struct func_8022D198_S1;
typedef struct func_8022D198_S1 func_8022D198_S1;

struct FloatState6C8;
struct FloatState6C8 {
    unsigned char padding_0[1700];
    f32 unk_6A4;
    unsigned char padding_6A8[28];
    f32 unk_6C4;
};
struct ObjectState668;
struct ObjectState668 {
    char pad0[0x650];
    s16 unk_650;
    char pad650[0x664 - 0x650 - sizeof(s16)];
    s32 unk_664;
};
struct ObjectState90;
struct ObjectState90 {
    unsigned char padding_0[143];
    s8 unk_8F;
};
struct func_8022C444_S2;
struct func_8022C444_S2 {
    char pad0[0x90];
    char unk90;
};
struct func_8022C54C_S3;
struct func_8022C54C_S3 {
    char pad0[0x90];
    u8 unk90;
};
struct func_8022C640_S2;
struct func_8022C640_S2 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x16E0 - 0x5D0 - sizeof(s32)];
    char * unk16E0;
};
struct func_8022C7E8_S1;
struct func_8022C7E8_S1 {
    char pad0[0x6B0];
    s32 unk6B0;
    char pad6B0[0x6E4 - 0x6B0 - sizeof(s32)];
    f32 unk6E4;
    char pad6E4[0x7E8 - 0x6E4 - sizeof(f32)];
    s32 unk7E8;
    char pad7E8[0x11D8 - 0x7E8 - sizeof(s32)];
    f32 unk11D8;
};
struct func_8022C884_S1;
struct func_8022C884_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
};
struct func_8022C894_S1;
struct func_8022C894_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
};
struct func_8022C8EC_S1;
struct func_8022C8EC_S1 {
    char pad0[0x6AC];
    s32 unk6AC;
    char pad6AC[0x6C0 - 0x6AC - sizeof(s32)];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
    char pad6C4[0x72C - 0x6C4 - sizeof(f32)];
    f32 unk72C;
    char pad72C[0x86C - 0x72C - sizeof(f32)];
    s32 unk86C;
    char pad86C[0x13B4 - 0x86C - sizeof(s32)];
    s32 * unk13B4;
};
struct func_8022CA04_S2;
struct func_8022CA04_S2 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x20 - 0x18 - sizeof(void*)];
    f32 unk20;
};
struct func_8022CA04_S5;
struct func_8022CA04_S5 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5D8 - 0x10 - sizeof(s32)];
    void * unk5D8;
};
struct func_8022CC24_S1;
struct func_8022CC24_S1 {
    char pad0[0x660];
    s32 unk660;
    char pad660[0x86C - 0x660 - sizeof(s32)];
    s32 unk86C;
    char pad86C[0x13B4 - 0x86C - sizeof(s32)];
    void * unk13B4;
};
struct func_8022CDAC_S1;
struct func_8022CDAC_S1 {
    char pad0[0x658];
    f32 unk658;
    char pad658[0x6A4 - 0x658 - sizeof(f32)];
    f32 unk6A4;
    char pad6A4[0x6C4 - 0x6A4 - sizeof(f32)];
    f32 unk6C4;
};
struct func_8022CF28_S1;
struct func_8022CF28_S1 {
    char pad0[0x5DC];
    void * unk5DC;
    char pad5DC[0x6C0 - 0x5DC - sizeof(void*)];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
    char pad6C4[0x848 - 0x6C4 - sizeof(f32)];
    s32 unk848;
    char pad84C[0x938 - 0x84C];
    char unk938;
};
struct func_8022CF28_S2;
struct func_8022CF28_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x20 - 0x8 - sizeof(Vec3)];
    f32 unk20;
    char pad20[0x38 - 0x20 - sizeof(f32)];
    s32 unk38;
};
struct func_8022D030_S1;
struct func_8022D030_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x10E - 0xE4 - sizeof(u16)];
    s8 unk10E;
    char pad10E[0x650 - 0x10E - sizeof(s8)];
    s16 unk650;
    char pad650[0x658 - 0x650 - sizeof(s16)];
    f32 unk658;
    char pad658[0x6C0 - 0x658 - sizeof(f32)];
    f32 unk6C0;
    char pad6C0[0x6C8 - 0x6C0 - sizeof(f32)];
    f32 unk6C8;
    char pad6C8[0x86C - 0x6C8 - sizeof(f32)];
    s32 unk86C;
};
struct func_8022D154_S1;
struct func_8022D154_S1 {
    char pad0[0x6C0];
    s32 unk6C0;
};
struct func_8022D154_S2;
struct func_8022D154_S2 {
    char pad0[0x6C4];
    s32 unk6C4;
    char pad6C4[0x6E0 - 0x6C4 - sizeof(s32)];
    f32 unk6E0;
};
struct func_8022D198_S1;
struct func_8022D198_S1 {
    char pad0[0x4A0];
    Vec3 unk4A0;
    char pad4A0[0x6E8 - 0x4A0 - sizeof(Vec3)];
    Vec3 unk6E8;
    char pad6E8[0x16C4 - 0x6E8 - sizeof(Vec3)];
    Vec3 unk16C4;
};
extern void *func_8022C454_de(void *arg0);
extern void *func_8022C55C_de(void *arg0, u32 arg1);
extern float func_8022C67C_de(void * arg0);
extern void func_8022C894_de(void *arg0, void *arg1);
extern void func_8022C8EC_de(void);
extern void func_8022CD78_de(void *arg0, void *arg1);
extern void func_8022CF18_de(void);
extern void func_8022CF38_de(void *arg0, void *arg1);
extern void func_8022D010_de(void *arg0, void *arg1);
extern void func_8022D164_de(void *arg0, void *arg1);
extern void func_8022D188_de(void *unused, void *object);
extern void func_8022D198_de(void);
extern void func_8022D1A8_de(void *arg0);
#endif
