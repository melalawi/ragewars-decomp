#ifndef UNBAKE_SPAN_1000_CODE_8022D7A0_H
#define UNBAKE_SPAN_1000_CODE_8022D7A0_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor126;
typedef struct Actor126 Actor126;

struct Object126;
typedef struct Object126 Object126;

struct ObjectLinks87C;
typedef struct ObjectLinks87C ObjectLinks87C;

struct func_8022D960_S1;
typedef struct func_8022D960_S1 func_8022D960_S1;

struct func_8022D960_S2;
typedef struct func_8022D960_S2 func_8022D960_S2;

struct func_8022D960_S3;
typedef struct func_8022D960_S3 func_8022D960_S3;

struct func_8022D9F4_S1;
typedef struct func_8022D9F4_S1 func_8022D9F4_S1;

struct func_8022DA20_S1;
typedef struct func_8022DA20_S1 func_8022DA20_S1;

struct func_8022DBD4_S1;
typedef struct func_8022DBD4_S1 func_8022DBD4_S1;

struct func_8022DBF0_S1;
typedef struct func_8022DBF0_S1 func_8022DBF0_S1;

struct func_8022DC0C_S1;
typedef struct func_8022DC0C_S1 func_8022DC0C_S1;

struct func_8022DC34_S2;
typedef struct func_8022DC34_S2 func_8022DC34_S2;

struct func_8022DD84_S1;
typedef struct func_8022DD84_S1 func_8022DD84_S1;

struct func_8022DE48_S1;
typedef struct func_8022DE48_S1 func_8022DE48_S1;

struct func_8022DE48_S4;
typedef struct func_8022DE48_S4 func_8022DE48_S4;

struct func_8022E0A0_S1;
typedef struct func_8022E0A0_S1 func_8022E0A0_S1;

struct func_8022E0A0_S2;
typedef struct func_8022E0A0_S2 func_8022E0A0_S2;

struct func_8022E0A0_S4;
typedef struct func_8022E0A0_S4 func_8022E0A0_S4;

struct Actor126;
struct Actor126 {
    u8 pad0[0x100];
    s32 flags;
    u8 pad104[0xD0];
    f32 value1D4;
    u8 pad1D8[0x47A];
    s16 state652;
    u8 pad654[0xD4];
    f32 offset728;
};
struct Object126;
struct Object126 {
    u8 pad0[0x1C];
    f32 x;
    u8 pad20[4];
    f32 y;
    u8 pad28[0x44];
    f32 angle;
};
struct ObjectLinks87C;
struct ObjectLinks87C {
    char pad0[0x5D8];
    char * unk_5D8;
    char pad5D8[0x5E4 - 0x5D8 - sizeof(char*)];
    s32 unk_5E4;
    char pad5E4[0x62E - 0x5E4 - sizeof(s32)];
    s16 unk_62E;
    char pad62E[0x7E8 - 0x62E - sizeof(s16)];
    s32 unk_7E8;
    char pad7E8[0x7EC - 0x7E8 - sizeof(s32)];
    f32 unk_7EC;
    char pad7EC[0x7F0 - 0x7EC - sizeof(f32)];
    f32 unk_7F0;
    char pad7F0[0x878 - 0x7F0 - sizeof(f32)];
    char unk_878;
};
struct Shape_typemap_14;
struct Shape_typemap_14 {
    unsigned char padding_0[8];
    short field_8;
};
struct func_8022D960_S1;
struct func_8022D960_S1 {
    char pad0[0x7F4];
    s32 unk7F4;
    char pad7F4[0x7F8 - 0x7F4 - sizeof(s32)];
    f32 unk7F8;
    char pad7F8[0x7FC - 0x7F8 - sizeof(f32)];
    s32 unk7FC;
    char pad7FC[0x800 - 0x7FC - sizeof(s32)];
    func_8020E674_S1_U8 unk800;
};
struct func_8022D960_S2;
struct func_8022D960_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
};
struct func_8022D960_S3;
struct func_8022D960_S3 {
    char pad0[0x34];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
};
struct func_8022D9F4_S1;
struct func_8022D9F4_S1 {
    char pad0[0x11B4];
    s32 unk11B4;
};
struct func_8022DA20_S1;
struct func_8022DA20_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
};
struct func_8022DBD4_S1;
struct func_8022DBD4_S1 {
    char pad0[0x708];
    float unk708;
    char pad708[0x70C - 0x708 - sizeof(float)];
    float unk70C;
    char pad70C[0x710 - 0x70C - sizeof(float)];
    float unk710;
    char pad710[0x714 - 0x710 - sizeof(float)];
    int unk714;
};
struct func_8022DBF0_S1;
struct func_8022DBF0_S1 {
    char pad0[0x708];
    float unk708;
    char pad708[0x70C - 0x708 - sizeof(float)];
    float unk70C;
    char pad70C[0x710 - 0x70C - sizeof(float)];
    int unk710;
    char pad710[0x714 - 0x710 - sizeof(int)];
    int unk714;
};
struct func_8022DC0C_S1;
struct func_8022DC0C_S1 {
    char pad0[0x718];
    f32 unk718;
};
struct func_8022DC34_S2;
struct func_8022DC34_S2 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x718 - 0x650 - sizeof(s16)];
    f32 unk718;
    char pad718[0x71C - 0x718 - sizeof(f32)];
    s32 unk71C;
};
struct func_8022DD84_S1;
struct func_8022DD84_S1 {
    char pad0[0x650];
    u16 unk650;
    char pad650[0x720 - 0x650 - sizeof(u16)];
    f32 unk720;
};
struct func_8022DE48_S1;
struct func_8022DE48_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x6EC - 0x18 - sizeof(void*)];
    f32 unk6EC;
    char pad6EC[0x6F4 - 0x6EC - sizeof(f32)];
    f32 unk6F4;
    char pad6F4[0x718 - 0x6F4 - sizeof(f32)];
    f32 unk718;
    char pad718[0x720 - 0x718 - sizeof(f32)];
    f32 unk720;
    char pad720[0x780 - 0x720 - sizeof(f32)];
    f32 unk780;
};
struct func_8022DE48_S4;
struct func_8022DE48_S4 {
    char pad0[0xE8];
    f32 unkE8;
};
struct func_8022E0A0_S1;
struct func_8022E0A0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    void * unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    void * unk1C;
};
struct func_8022E0A0_S2;
struct func_8022E0A0_S2 {
    char pad0[0x18];
    s8 unk18;
    char pad18[0x19 - 0x18 - sizeof(s8)];
    s8 unk19;
    char pad19[0x1A - 0x19 - sizeof(s8)];
    s8 unk1A;
};
struct func_8022E0A0_S4;
struct func_8022E0A0_S4 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x724 - 0x650 - sizeof(s16)];
    f32 unk724;
};
extern void func_8022D7CC_de(void);
extern void func_8022D804_de(void);
extern void func_8022D83C_de(void);
extern void func_8022D874_de(void);
extern void func_8022D8AC_de(void);
extern void func_8022D8E4_de(void);
extern void func_8022D91C_de(void);
extern void func_8022D954_de(void);
extern void func_8022DA04_de(void *arg0);
extern void func_8022DA84_de(void *arg0);
extern void func_8022DB04_de(Actor126 *actor, Object126 *arg1);
extern f32 func_8022DBC4_de(f32 arg0);
extern void func_8022DBE4_de(void *arg0);
extern void func_8022DC00_de(void *arg0);
extern void func_8022DC14_de(void);
extern s32 func_8022DC1C_de(void *arg0);
extern void func_8022DD94_de(void *arg0);
extern void func_8022DFA8_de(void *arg0);
extern void func_8022E0B0_de(void *arg0, void *arg1);
#endif
