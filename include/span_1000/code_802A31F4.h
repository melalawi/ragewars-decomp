#ifndef UNBAKE_SPAN_1000_CODE_802A31F4_H
#define UNBAKE_SPAN_1000_CODE_802A31F4_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_802A274C_de;
typedef struct Actor_func_802A274C_de Actor_func_802A274C_de;

struct Blend;
typedef struct Blend Blend;

struct ChildB4;
typedef struct ChildB4 ChildB4;

struct DefC;
typedef struct DefC DefC;

struct Entity1DC;
typedef struct Entity1DC Entity1DC;

struct Morph;
typedef struct Morph Morph;

struct Morph_func_802A2B58_de;
typedef struct Morph_func_802A2B58_de Morph_func_802A2B58_de;

struct Node438C;
typedef struct Node438C Node438C;

struct Node44;
typedef struct Node44 Node44;

struct Node_func_802A2FA4_de;
typedef struct Node_func_802A2FA4_de Node_func_802A2FA4_de;

struct ObjectLinks54;
typedef struct ObjectLinks54 ObjectLinks54;

struct ObjectLinksB4;
typedef struct ObjectLinksB4 ObjectLinksB4;

struct ObjectState20;
typedef struct ObjectState20 ObjectState20;

struct ObjectState68;
typedef struct ObjectState68 ObjectState68;

struct ObjectStateB0;
typedef struct ObjectStateB0 ObjectStateB0;

struct Particle;
typedef struct Particle Particle;

struct ParticleList;
typedef struct ParticleList ParticleList;

struct Root752C;
typedef struct Root752C Root752C;

struct Scene_func_802A5180_de;
typedef struct Scene_func_802A5180_de Scene_func_802A5180_de;

struct Shade;
typedef struct Shade Shade;

struct State_func_802A2FA4_de;
typedef struct State_func_802A2FA4_de State_func_802A2FA4_de;

struct Transform;
typedef struct Transform Transform;

struct Vtx;
typedef struct Vtx Vtx;

struct func_802A41D8_S1;
typedef struct func_802A41D8_S1 func_802A41D8_S1;

struct func_802A41D8_S2;
typedef struct func_802A41D8_S2 func_802A41D8_S2;

struct func_802A41D8_S3;
typedef struct func_802A41D8_S3 func_802A41D8_S3;

struct func_802A41D8_S5;
typedef struct func_802A41D8_S5 func_802A41D8_S5;

struct func_802A438C_S1;
typedef struct func_802A438C_S1 func_802A438C_S1;

struct Track_func_802A274C_de;
struct Track_func_802A274C_de {
    char pad0[4];
    f32 span;
    f32 total;
};
struct Actor_func_802A274C_de;
struct Track_func_802A274C_de;
struct Actor_func_802A274C_de {
    char pad0[8];
    struct Track_func_802A274C_de *track;
    char pad12[0x18];
    f32 time;
};
struct Shade;
struct Shade {
    u8 a;
    u8 b;
    u8 g;
    u8 r;
};
struct Blend;
struct Blend {
    Shade from;
    Shade to;
    u16 first;
    u16 second;
};
struct Entity1DC;
struct Entity1DC {
    char pad[0x118];
    func_80204468_S3 *unk_118;
    char p11c[0x1f];
    u8 unk_13B;
    char p13c[0x9d];
    u8 unk_1D9;
};
struct ChildB4;
struct ChildB4 {
    int unk_0;
    struct ChildB4 *unk_4;
    f32 unk_8;
    int pc;
    f32 pos[3];
    f32 rot[3];
    f32 mat[32];
    char pa8[8];
    Entity1DC *unk_B0;
};
struct DefC;
struct DefC {
    int unk_0;
    f32 unk_4;
    f32 unk_8;
};
struct Blend;
struct Key;
struct Morph;
struct Morph {
    s32 count;
    struct Blend *blends;
    struct Key *first;
    struct Key *second;
    void *firstFrame;
    void *secondFrame;
};
struct Morph_func_802A2B58_de;
struct Morph_func_802A2B58_de {
    s32 count;
    Blend *blends;
    Key *first;
    Key *second;
    void *firstFrame;
    void *secondFrame;
    f32 scaleS;
    f32 scaleT;
    f32 step;
};
struct Node438C;
struct Node438C {
    u8 pad0[4];
    struct Node438C *next;
    u8 pad8[8];
    f32 x;
    f32 y;
    f32 z;
    s32 a;
    s32 b;
    s32 c;
};
struct Node44;
struct Node44 {
    int unk_0;
    struct Node44 *unk_4;
    DefC *unk_8;
    char pc[0x10];
    Entity1DC *unk_1C;
    int p20;
    f32 unk_24;
    char p28[0x14];
    int unk_3C;
    ChildB4 *unk_40;
};
struct Node_func_802A2FA4_de;
struct Node_func_802A2FA4_de {
    s32 unk0;
    struct Node_func_802A2FA4_de *next;
    f32 value;
};
struct ObjectLinks54;
struct ObjectLinks54 {
    char pad0[0x8];
    char * unk_8;
    char pad8[0x28 - 0x8 - sizeof(char*)];
    f32 unk_28;
    char pad28[0x3C - 0x28 - sizeof(f32)];
    s32 unk_3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    char * unk_40;
    char pad40[0x4C - 0x40 - sizeof(char*)];
    f32 unk_4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    s32 unk_50;
};
struct ObjectLinksB4;
struct ObjectLinksB4 {
    char pad0[0x4];
    char * unk_4;
    char pad4[0x8 - 0x4 - sizeof(char*)];
    f32 unk_8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    func_8020E674_S1_U8 unk_10;
    char pad10[0x1C - 0x10 - sizeof(func_8020E674_S1_U8)];
    f32 unk_1C;
    char pad1C[0x28 - 0x1C - sizeof(f32)];
    f32 unk_28;
    char pad28[0x68 - 0x28 - sizeof(f32)];
    f32 unk_68;
    char pad68[0xA8 - 0x68 - sizeof(f32)];
    f32 unk_A8;
    char padA8[0xAC - 0xA8 - sizeof(f32)];
    func_8022E280_S1_U744 unk_AC;
    char padAC[0xB0 - 0xAC - sizeof(func_8022E280_S1_U744)];
    s32 unk_B0;
};
struct ObjectState20;
struct ObjectState20 {
    unsigned char padding_0[8];
    f32 unk_8;
    unsigned char padding_C[16];
    u8 unk_1C;
};
struct ObjectState68;
struct ObjectState68 {
    unsigned char padding_0[40];
    UnitMtx unk_28;
};
struct ObjectStateB0;
struct ObjectStateB0 {
    char pad0[0x10];
    Vec3 unk_10;
    char pad10[0xAC - 0x10 - sizeof(Vec3)];
    f32 unk_AC;
};
struct Transform;
struct Transform {
    char pad0[0x18];
    s16 position[3];
};
struct Particle;
struct Particle {
    char pad0[4];
    struct Particle *next;
    Transform transform;
};
struct Particle;
struct ParticleList;
struct ParticleList {
    struct Particle *active;
    char pad4[0x10];
};
struct Root752C;
struct Root752C {
    char pad[0x7528];
    Node44 *unk_7528;
};
struct Particle;
struct Scene_func_802A5180_de;
struct Scene_func_802A5180_de {
    char pad0[0x94E0];
    ParticleList lists[10];
    char pad95A8[0x95A8 - 0x94E0 - 10 * 0x14];
    struct Particle *free;
    char pad95AC[0x95B8 - 0x95AC];
    s32 state;
};
struct Node_func_802A2FA4_de;
struct State_func_802A2FA4_de;
struct State_func_802A2FA4_de {
    u8 pad0[0x1C];
    void *object;
    u8 pad20[4];
    f32 timer;
    u8 pad28[4];
    f32 count_up;
    f32 total;
    u8 pad34[8];
    u32 flags;
    struct Node_func_802A2FA4_de *nodes;
    u8 pad44[4];
    s32 active;
    f32 amount;
    s32 retries;
};
struct Vtx;
struct Vtx {
    s16 x;
    s16 y;
    s16 z;
    s16 flag;
    s16 s;
    s16 t;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
};
struct func_802A41D8_S1;
struct func_802A41D8_S1 {
    char pad0[0x10];
    func_80234DD0_S1_U260 unk10;
    char pad10[0x1C - 0x10 - sizeof(func_80234DD0_S1_U260)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
};
struct func_802A41D8_S2;
struct func_802A41D8_S2 {
    char pad0[0x10];
    Vec3 unk10;
};
struct func_802A41D8_S3;
struct func_802A41D8_S3 {
    char pad0[0x1A0];
    char unk1A0;
};
struct func_802A41D8_S5;
struct func_802A41D8_S5 {
    char pad0[0x14];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
};
struct Node438C;
struct func_802A438C_S1;
struct func_802A438C_S1 {
    char pad0[0x40];
    struct Node438C * unk40;
    char pad40[0x48 - 0x40 - sizeof(Node438C*)];
    s32 unk48;
};
extern void func_802A21F4_de(void);
extern void func_802A2320_de(void);
extern void func_802A2434_de(void);
extern Vector4f *func_802A5020_de(Vector4f *out, u32 bx, u32 by, u32 bz);
#endif
