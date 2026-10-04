#ifndef UNBAKE_SPAN_1000_CODE_80233C78_H
#define UNBAKE_SPAN_1000_CODE_80233C78_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Entity_func_80233C88_de;
typedef struct Entity_func_80233C88_de Entity_func_80233C88_de;

struct Race;
typedef struct Race Race;

struct Racer;
typedef struct Racer Racer;

struct State44;
typedef struct State44 State44;

struct ThreeChannels;
typedef struct ThreeChannels ThreeChannels;

struct UnitVp;
typedef struct UnitVp UnitVp;

struct World_func_80236F1C_de;
typedef struct World_func_80236F1C_de World_func_80236F1C_de;

struct func_80234DD0_S1;
typedef struct func_80234DD0_S1 func_80234DD0_S1;

struct func_80234DD0_S2;
typedef struct func_80234DD0_S2 func_80234DD0_S2;

struct func_80238F14_S1;
typedef struct func_80238F14_S1 func_80238F14_S1;

struct func_802390C0_S1;
typedef struct func_802390C0_S1 func_802390C0_S1;

struct func_802390E4_S1;
typedef struct func_802390E4_S1 func_802390E4_S1;

struct func_8023912C_S2;
typedef struct func_8023912C_S2 func_8023912C_S2;

struct func_80239184_S1;
typedef struct func_80239184_S1 func_80239184_S1;

struct func_8023919C_S1;
typedef struct func_8023919C_S1 func_8023919C_S1;

struct func_802392DC_S1;
typedef struct func_802392DC_S1 func_802392DC_S1;

struct func_80239314_S1;
typedef struct func_80239314_S1 func_80239314_S1;

struct func_802393C8_S1;
typedef struct func_802393C8_S1 func_802393C8_S1;

struct Entity_func_80233C88_de;
struct Entity_func_80233C88_de {
    char pad0[0x29C];
    f32 width;
    f32 height;
    f32 x;
    f32 y;
    char pad2AC[0x520 - 0x2AC];
    u8 color[4];
};
struct UnitVp;
struct UnitVp {
    s16 vscale[4];
    s16 vtrans[4];
};
struct Racer;
struct Racer {
    char pad0[4];
    struct Racer *next;
    char pad8[0x118];
    s32 effect;
    u16 pad124;
    u16 effectArg;
    char pad128[0x188];
    UnitVp viewports[2];
    char pad2D0[0x250];
    u8 hit;
    u8 boost;
    u8 spin;
    char pad523[0x31];
    char sound[0x40];
};
struct Race;
struct Racer;
struct Race {
    s32 music;
    char pad4[0x1C];
    struct Racer *racers;
    char pad24[0xC];
    s32 mode;
    char pad34[0xC];
    Racer self;
};
struct State44;
struct State44 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    union {s32 i; f32 f;} unk_20;
    Vec3 v;
    f32 unk_30;
    s32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    s32 unk_40;
};
struct ThreeChannels;
struct ThreeChannels {
    char pad0[0x520];
    u8 first;
    u8 second;
    u8 third;
};
struct World_func_80236F1C_de;
struct World_func_80236F1C_de {
    char pad0[0x12A5];
    u8 replay;
};
struct func_80234DD0_S1;
struct func_80234DD0_S1 {
    char pad0[0x70];
    f32 unk70;
    char pad70[0x74 - 0x70 - sizeof(f32)];
    f32 unk74;
    char pad74[0x78 - 0x74 - sizeof(f32)];
    f32 unk78;
    char pad78[0x7C - 0x78 - sizeof(f32)];
    s32 unk7C;
    char pad7C[0x260 - 0x7C - sizeof(s32)];
    func_80234DD0_S1_U260 unk260;
    char pad260[0x368 - 0x260 - sizeof(func_80234DD0_S1_U260)];
    f32 unk368;
    char pad368[0x36C - 0x368 - sizeof(f32)];
    f32 unk36C;
    char pad36C[0x370 - 0x36C - sizeof(f32)];
    f32 unk370;
    char pad370[0x374 - 0x370 - sizeof(f32)];
    f32 unk374;
    char pad374[0x378 - 0x374 - sizeof(f32)];
    f32 unk378;
    char pad378[0x37C - 0x378 - sizeof(f32)];
    f32 unk37C;
    char pad37C[0x528 - 0x37C - sizeof(f32)];
    f32 unk528;
    char pad528[0x530 - 0x528 - sizeof(f32)];
    f32 unk530;
};
struct func_80234DD0_S2;
struct func_80234DD0_S2 {
    char pad0[0x264];
    f32 unk264;
    char pad264[0x268 - 0x264 - sizeof(f32)];
    f32 unk268;
};
struct func_80238F14_S1;
struct func_80238F14_S1 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    f32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    Shared_Quad unk48;
    char pad48[0x58 - 0x48 - sizeof(Shared_Quad)];
    s32 unk58;
    char pad58[0x5C - 0x58 - sizeof(s32)];
    f32 unk5C;
    char pad5C[0x60 - 0x5C - sizeof(f32)];
    f32 unk60;
    char pad60[0x64 - 0x60 - sizeof(f32)];
    s32 unk64;
};
struct Triple;
struct func_802390C0_S1;
struct func_802390C0_S1 {
    char pad0[0x260];
    struct Triple unk260;
};
struct func_802390E4_S1;
struct func_802390E4_S1 {
    char pad0[0x14];
    s16 unk14;
    char pad14[0x18 - 0x14 - sizeof(s16)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s16 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s16)];
    s32 unk20;
};
struct func_8023912C_S2;
struct func_8023912C_S2 {
    char pad0[0x88];
    f32 unk88;
    char pad88[0x8C - 0x88 - sizeof(f32)];
    f32 unk8C;
    char pad8C[0x90 - 0x8C - sizeof(f32)];
    s32 unk90;
    char pad90[0x94 - 0x90 - sizeof(s32)];
    s32 unk94;
    char pad94[0x98 - 0x94 - sizeof(s32)];
    f32 unk98;
    char pad98[0x9C - 0x98 - sizeof(f32)];
    f32 unk9C;
};
struct func_80239184_S1;
struct func_80239184_S1 {
    char pad0[0x548];
    signed char unk548;
    char pad548[0x549 - 0x548 - sizeof(signed char)];
    signed char unk549;
};
struct func_8023919C_S1;
struct func_8023919C_S1 {
    char pad0[0x538];
    s32 unk538;
    char pad538[0x544 - 0x538 - sizeof(s32)];
    s32 unk544;
    char pad544[0x54A - 0x544 - sizeof(s32)];
    s8 unk54A;
    char pad54A[0x54B - 0x54A - sizeof(s8)];
    s8 unk54B;
    char pad54B[0x54C - 0x54B - sizeof(s8)];
    s8 unk54C;
    char pad54C[0x54D - 0x54C - sizeof(s8)];
    s8 unk54D;
    char pad54D[0x54E - 0x54D - sizeof(s8)];
    s8 unk54E;
    char pad54E[0x54F - 0x54E - sizeof(s8)];
    s8 unk54F;
    char pad54F[0x550 - 0x54F - sizeof(s8)];
    s8 unk550;
    char pad550[0x551 - 0x550 - sizeof(s8)];
    s8 unk551;
};
struct func_802392DC_S1;
struct func_802392DC_S1 {
    char pad0[0x5DC];
    int unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(int)];
    void * unk16E0;
};
struct func_80239314_S1;
struct func_80239314_S1 {
    char pad0[0xA8];
    Vec3 unkA8;
    char padA8[0xB4 - 0xA8 - sizeof(Vec3)];
    f32 unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(f32)];
    s32 unkB8;
    char padB8[0xBC - 0xB8 - sizeof(s32)];
    f32 unkBC;
    char padBC[0xCC - 0xBC - sizeof(f32)];
    s32 unkCC;
    char padCC[0xD0 - 0xCC - sizeof(s32)];
    f32 unkD0;
    char padD0[0xE0 - 0xD0 - sizeof(f32)];
    s32 unkE0;
    char padE0[0xE4 - 0xE0 - sizeof(s32)];
    f32 unkE4;
};
struct func_802393C8_S1;
struct func_802393C8_S1 {
    char pad0[0xFC];
    int unkFC;
    char padFC[0x100 - 0xFC - sizeof(int)];
    int unk100;
    char pad100[0x104 - 0x100 - sizeof(int)];
    int unk104;
    char pad104[0x108 - 0x104 - sizeof(int)];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    float unk110;
    char pad110[0x114 - 0x110 - sizeof(float)];
    float unk114;
    char pad114[0x118 - 0x114 - sizeof(float)];
    int unk118;
};
extern void func_8023660C_de(char *camera, f32 a, f32 b, f32 c, f32 d);
extern void func_8023913C_de(void *arg0);
extern void func_802391F8_de(void *arg0, s8 *arg1, s8 *arg2, s8 *arg3);
extern void func_80239404_de(void);
extern void func_8023940C_de(char *object);
#endif
