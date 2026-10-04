#ifndef UNBAKE_SPAN_1000_CODE_80245D38_H
#define UNBAKE_SPAN_1000_CODE_80245D38_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Access_s16_108;
typedef struct Access_s16_108 Access_s16_108;

struct Access_s16_10A;
typedef struct Access_s16_10A Access_s16_10A;

struct Access_s32_C4;
typedef struct Access_s32_C4 Access_s32_C4;

struct Access_s32_C8;
typedef struct Access_s32_C8 Access_s32_C8;

struct Access_s32_D0;
typedef struct Access_s32_D0 Access_s32_D0;

struct Access_s32_D4;
typedef struct Access_s32_D4 Access_s32_D4;

struct Access_s32_D8;
typedef struct Access_s32_D8 Access_s32_D8;

struct Access_s8_10E;
typedef struct Access_s8_10E Access_s8_10E;

struct Access_s8_10F;
typedef struct Access_s8_10F Access_s8_10F;

struct Access_s8_1A5;
typedef struct Access_s8_1A5 Access_s8_1A5;

struct Access_s8_23A;
typedef struct Access_s8_23A Access_s8_23A;

struct Access_u8_E6;
typedef struct Access_u8_E6 Access_u8_E6;

struct Access_u8_E7;
typedef struct Access_u8_E7 Access_u8_E7;

struct Access_void_28C;
typedef struct Access_void_28C Access_void_28C;

struct Actor_func_8024A3B0_de;
typedef struct Actor_func_8024A3B0_de Actor_func_8024A3B0_de;

struct Block_func_8024A3B0_de;
typedef struct Block_func_8024A3B0_de Block_func_8024A3B0_de;

struct Box70;
typedef struct Box70 Box70;

struct CallbackState288;
typedef struct CallbackState288 CallbackState288;

struct CollisionInfo_func_80246558_de;
typedef struct CollisionInfo_func_80246558_de CollisionInfo_func_80246558_de;

struct CollisionState;
typedef struct CollisionState CollisionState;

struct Input_func_8024B3A8_de;
typedef struct Input_func_8024B3A8_de Input_func_8024B3A8_de;

struct Lookup;
typedef struct Lookup Lookup;

struct Obj_func_80247004_de;
typedef struct Obj_func_80247004_de Obj_func_80247004_de;

struct ObjectLinks10;
typedef struct ObjectLinks10 ObjectLinks10;

struct ObjectLinks180;
typedef struct ObjectLinks180 ObjectLinks180;

struct ObjectLinks180_2;
typedef struct ObjectLinks180_2 ObjectLinks180_2;

struct ObjectLinks23C;
typedef struct ObjectLinks23C ObjectLinks23C;

struct ObjectStateC;
typedef struct ObjectStateC ObjectStateC;

struct SineTable;
typedef struct SineTable SineTable;

struct TypeEntry;
typedef struct TypeEntry TypeEntry;

struct World_func_802466A0_de;
typedef struct World_func_802466A0_de World_func_802466A0_de;

struct func_80246174_S1;
typedef struct func_80246174_S1 func_80246174_S1;

struct func_80246690_S1;
typedef struct func_80246690_S1 func_80246690_S1;

struct func_80246BD8_S1;
typedef struct func_80246BD8_S1 func_80246BD8_S1;

struct func_80246FF4_S1;
typedef struct func_80246FF4_S1 func_80246FF4_S1;

struct func_802472E0_Entry;
typedef struct func_802472E0_Entry func_802472E0_Entry;

struct func_802472E0_S1;
typedef struct func_802472E0_S1 func_802472E0_S1;

struct func_8024795C_S1;
typedef struct func_8024795C_S1 func_8024795C_S1;

struct func_8024795C_S3;
typedef struct func_8024795C_S3 func_8024795C_S3;

struct func_80247BA4_S1;
typedef struct func_80247BA4_S1 func_80247BA4_S1;

struct func_8024A1C0_S1;
typedef struct func_8024A1C0_S1 func_8024A1C0_S1;

struct func_8024AA08_S1;
typedef struct func_8024AA08_S1 func_8024AA08_S1;

struct func_8024AA08_S2;
typedef struct func_8024AA08_S2 func_8024AA08_S2;

struct func_8024B2C0_S1;
typedef struct func_8024B2C0_S1 func_8024B2C0_S1;

struct func_8024B52C_S1;
typedef struct func_8024B52C_S1 func_8024B52C_S1;

struct Access_s16_108;
struct Access_s16_108 {
    char pad[0x108];
    s16 field;
};
struct Access_s16_10A;
struct Access_s16_10A {
    char pad[0x10A];
    s16 field;
};
struct Access_s32_C4;
struct Access_s32_C4 {
    char pad[0xC4];
    s32 field;
};
struct Access_s32_C8;
struct Access_s32_C8 {
    char pad[0xC8];
    s32 field;
};
struct Access_s32_D0;
struct Access_s32_D0 {
    char pad[0xD0];
    s32 field;
};
struct Access_s32_D4;
struct Access_s32_D4 {
    char pad[0xD4];
    s32 field;
};
struct Access_s32_D8;
struct Access_s32_D8 {
    char pad[0xD8];
    s32 field;
};
struct Access_s8_10E;
struct Access_s8_10E {
    char pad[0x10E];
    s8 field;
};
struct Access_s8_10F;
struct Access_s8_10F {
    char pad[0x10F];
    s8 field;
};
struct Access_s8_1A5;
struct Access_s8_1A5 {
    char pad[0x1A5];
    s8 field;
};
struct Access_s8_23A;
struct Access_s8_23A {
    char pad[0x23A];
    s8 field;
};
struct Access_u8_E6;
struct Access_u8_E6 {
    char pad[0xE6];
    u8 field;
};
struct Access_u8_E7;
struct Access_u8_E7 {
    char pad[0xE7];
    u8 field;
};
struct Access_void_28C;
struct Access_void_28C {
    char pad[0x28C];
    void * field;
};
struct Block_func_8024A3B0_de;
struct Block_func_8024A3B0_de {
    u32 words[6];
};
struct Actor_func_8024A3B0_de;
struct Actor_func_8024A3B0_de {
    char pad0[3];
    s8 field3;
    u32 pad4;
    Vec3 position0;
    u32 pad14[2];
    Vec3 position1;
    u32 pad28[13];
    Vector4f rotation;
    char pad6C[0xB4 - 0x6C];
    s32 fieldB4;
    char padB8[0x140 - 0xB8];
    Block_func_8024A3B0_de blocks[4];
};
struct Box70;
struct Box70 {
    Vec3 corners[8];
    char pad60[0xC];
    s32 mask;
};
struct CallbackState288;
struct CollisionInfo;
struct CallbackState288 {
    unsigned char padding_0[644];
    void (*callback)(void *, void *, struct CollisionInfo *);
};
struct CollisionInfo_func_80246558_de;
struct CollisionInfo_func_80246558_de {
    s32 flags;
    u8 ground_behavior;
    u8 instance_behavior;
    u8 pad[2];
    s32 w[5];
};
struct CollisionState;
struct CollisionState {
    s32 active0;
    u8 pad[0x98];
    s32 active9c;
};
struct Input_func_8024B3A8_de;
struct Input_func_8024B3A8_de {
    s32 unk0;
    f32 vec4[3];
    f32 vec10[3];
    u16 unk1C;
    u16 unk1E;
    u16 resource20;
    u16 resource22;
    s16 amount24;
    u8 unk26;
    u8 unk27;
};
struct Lookup;
struct Lookup {
    s32 unk0;
    s32 unk4;
    u32 pad8;
    void **value;
};
struct Obj_func_80247004_de;
struct Obj_func_80247004_de {
    char pad[0x14];
    func_8022EA2C_S1 *unk14;
    char pad18[0xe8];
    u32 unk100;
};
struct CollisionInfo;
struct ObjectLinks10;
struct ObjectLinks10 {
    char pad0[0xC];
    struct CollisionInfo * unk_C;
};
struct ObjectLinks180;
struct ObjectLinks180 {
    unsigned char padding_0[1];
    s8 unk_1;
    unsigned char padding_2[6];
    Vec3 unk_8;
    unsigned char padding_14[164];
    char *unk_B8;
    unsigned char padding_BC[40];
    u16 unk_E4;
    unsigned char padding_E6[26];
    s32 unk_100;
    unsigned char padding_104[120];
    s32 unk_17C;
};
struct ObjectLinks180_2;
struct ObjectLinks180_2 {
    unsigned char padding_0[1];
    s8 unk_1;
    unsigned char padding_2[178];
    char *unk_B4;
    char *unk_B8;
    unsigned char padding_BC[68];
    s32 unk_100;
    unsigned char padding_104[120];
    s32 unk_17C;
};
struct ObjectLinks23C;
struct ObjectLinks23C {
    char pad0[0x8];
    Vec3 unk_8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    u16 * unk_14;
    char pad14[0x18 - 0x14 - sizeof(u16*)];
    s32 * unk_18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    s32 unk_100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void * unk_1A0;
    char pad1A0[0x1F4 - 0x1A0 - sizeof(void*)];
    u16 * unk_1F4;
    char pad1F4[0x238 - 0x1F4 - sizeof(u16*)];
    u16 unk_238;
};
struct ObjectStateC;
struct ObjectStateC {
    char pad0[0x8];
    func_80203908_S3_U124 unk_8;
};
struct SineTable;
struct SineTable {
    f32 count;
    f32 value[120];
};
struct TypeEntry;
struct TypeEntry {
    void *unk0;
    void (*callback)(void *, void *);
};
struct World_func_802466A0_de;
struct World_func_802466A0_de {
    char pad0[0x24];
    s32 radius;
    char pad28[0x2C];
    s32 gravity;
};
struct func_80246174_S1;
struct func_80246174_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
    char pad24[0x28 - 0x24 - sizeof(int)];
    int unk28;
    char pad28[0x2C - 0x28 - sizeof(int)];
    int unk2C;
    char pad2C[0x30 - 0x2C - sizeof(int)];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    int unk34;
    char pad34[0x38 - 0x34 - sizeof(int)];
    int unk38;
    char pad38[0x3C - 0x38 - sizeof(int)];
    int unk3C;
    char pad3C[0x40 - 0x3C - sizeof(int)];
    int unk40;
    char pad40[0x44 - 0x40 - sizeof(int)];
    int unk44;
    char pad44[0x48 - 0x44 - sizeof(int)];
    float unk48;
    char pad48[0x4C - 0x48 - sizeof(float)];
    int unk4C;
};
struct func_80246690_S1;
struct func_80246690_S1 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x8 - 0x4 - sizeof(s16)];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    u32 * unk18;
    char pad18[0x1C - 0x18 - sizeof(u32*)];
    Vec3 unk1C;
    char pad1C[0x50 - 0x1C - sizeof(Vec3)];
    Vec3 unk50;
    char pad50[0x5C - 0x50 - sizeof(Vec3)];
    Vector4f unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Vector4f)];
    f32 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(f32)];
    s32 unk70;
    char pad70[0xB4 - 0x70 - sizeof(s32)];
    s32 unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(s32)];
    s32 unkB8;
    char padB8[0xBC - 0xB8 - sizeof(s32)];
    s32 unkBC;
    char padBC[0xE4 - 0xBC - sizeof(s32)];
    s16 unkE4;
    char padE4[0xE6 - 0xE4 - sizeof(s16)];
    u8 unkE6;
    char padE6[0xE7 - 0xE6 - sizeof(u8)];
    u8 unkE7;
    char padE7[0x100 - 0xE7 - sizeof(u8)];
    s32 unk100;
    char pad100[0x104 - 0x100 - sizeof(s32)];
    f32 unk104;
    char pad104[0x138 - 0x104 - sizeof(f32)];
    u8 unk138;
    char pad138[0x139 - 0x138 - sizeof(u8)];
    u8 unk139;
    char pad139[0x13B - 0x139 - sizeof(u8)];
    u8 unk13B;
    char pad13B[0x140 - 0x13B - sizeof(u8)];
    Block24 unk140;
    char pad140[0x158 - 0x140 - sizeof(Block24)];
    Block24 unk158;
    char pad158[0x1A0 - 0x158 - sizeof(Block24)];
    s32 unk1A0;
    char pad1A0[0x1D8 - 0x1A0 - sizeof(s32)];
    s32 unk1D8;
    char pad1D8[0x23A - 0x1D8 - sizeof(s32)];
    s8 unk23A;
    char pad23A[0x27C - 0x23A - sizeof(s8)];
    void * unk27C;
    char pad27C[0x2E0 - 0x27C - sizeof(void*)];
    s32 unk2E0;
    char pad2E0[0x2E4 - 0x2E0 - sizeof(s32)];
    s32 unk2E4;
};
struct func_80246BD8_S1;
struct func_80246BD8_S1 {
    char pad0[0x74];
    char unk74;
    char pad74[0xD0 - 0x74 - sizeof(char)];
    s32 unkD0;
};
struct func_80246FF4_S1;
struct func_80246FF4_S1 {
    char pad0[0x5C];
    char unk5C;
};
struct func_802472E0_Entry;
struct func_802472E0_Entry {
    u16 unk0;
    char pad2[3];
    u8 unk5;
    char pad6;
    u8 unk7;
};
struct func_802472E0_S1;
struct func_802472E0_S1 {
    char pad0[8];
    f32 unk8;
    char padC[4];
    f32 unk10;
    char pad14[60];
    f32 unk50;
    char pad54[4];
    f32 unk58;
    char pad5C[16];
    f32 unk6C;
    char pad70[88];
    s32 unkC8;
    char padCC[24];
    u16 unkE4;
    s8 unkE6;
    char padE7[25];
    s32 unk100;
    char unk104;
    char pad105[9];
    s8 unk10E;
    s8 unk10F;
    char pad110[8];
    char unk118;
    char pad119[9];
    s8 unk122;
    s8 unk123;
    char pad124[8];
    union { s16 signedValue; u16 unsignedValue; } unk12C;
    char pad12E[2];
    f32 unk130;
    f32 unk134;
    u8 unk138;
    u8 unk139;
};
struct func_8024795C_S1;
struct func_8024795C_S1 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0x5C - 0x18 - sizeof(s32*)];
    Vector4f unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Vector4f)];
    f32 unk6C;
    char pad6C[0x100 - 0x6C - sizeof(f32)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char * unk1D8;
    char pad1D8[0x294 - 0x1D8 - sizeof(char*)];
    f32 unk294;
};
struct func_8024795C_S3;
struct func_8024795C_S3 {
    char pad0[0x140];
    Vector4f unk140;
};
struct func_80247BA4_S1;
struct func_80247BA4_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x70 - 0x8 - sizeof(Vec3)];
    f32 unk70;
    char pad70[0x100 - 0x70 - sizeof(f32)];
    s32 unk100;
    char pad100[0x174 - 0x100 - sizeof(s32)];
    s32 unk174;
};
struct func_8024A1C0_S1;
struct func_8024A1C0_S1 {
    char pad0[0x3];
    s8 unk3;
    char pad3[0xB4 - 0x3 - sizeof(s8)];
    s32 unkB4;
};
struct func_8024AA08_S1;
struct func_8024AA08_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
    char pad14[0xBC - 0x14 - sizeof(s32)];
    void * unkBC;
    char padBC[0x100 - 0xBC - sizeof(void*)];
    s32 unk100;
    char pad100[0x13A - 0x100 - sizeof(s32)];
    u8 unk13A;
};
struct func_8024AA08_S2;
struct func_8024AA08_S2 {
    char pad0[0x8];
    u8 unk8;
    char pad8[0x9 - 0x8 - sizeof(u8)];
    u8 unk9;
    char pad9[0x10 - 0x9 - sizeof(u8)];
    s8 unk10;
    char pad10[0x11 - 0x10 - sizeof(s8)];
    s8 unk11;
    char pad11[0x12 - 0x11 - sizeof(s8)];
    s8 unk12;
};
struct func_8024B2C0_S1;
struct func_8024B2C0_S1 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    u32 unk100;
    char pad100[0x23B - 0x100 - sizeof(u32)];
    u8 unk23B;
};
struct func_8024B52C_S1;
struct func_8024B52C_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x50 - 0x10 - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5C - 0x58 - sizeof(f32)];
    Vector4f unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Vector4f)];
    f32 unk6C;
    char pad6C[0x74 - 0x6C - sizeof(f32)];
    char unk74;
};
#endif
