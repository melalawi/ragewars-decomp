#ifndef UNBAKE_SPAN_1000_CODE_802688AC_H
#define UNBAKE_SPAN_1000_CODE_802688AC_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_802688E4_de;
typedef struct Actor_func_802688E4_de Actor_func_802688E4_de;

struct Blast;
typedef struct Blast Blast;

struct Group18;
typedef struct Group18 Group18;

struct Item_func_8026BC60_de;
typedef struct Item_func_8026BC60_de Item_func_8026BC60_de;

struct Limit;
typedef struct Limit Limit;

struct Material;
typedef struct Material Material;

struct Material18;
typedef struct Material18 Material18;

struct Mesh;
typedef struct Mesh Mesh;

struct Node_func_8026BC60_de;
typedef struct Node_func_8026BC60_de Node_func_8026BC60_de;

struct Owner_func_802688E4_de;
typedef struct Owner_func_802688E4_de Owner_func_802688E4_de;

struct RangeNode;
typedef struct RangeNode RangeNode;

struct Source_func_8026BC60_de;
typedef struct Source_func_8026BC60_de Source_func_8026BC60_de;

struct func_802689BC_S1;
typedef struct func_802689BC_S1 func_802689BC_S1;

struct func_802689BC_S2;
typedef struct func_802689BC_S2 func_802689BC_S2;

struct func_802689CC_S1;
typedef struct func_802689CC_S1 func_802689CC_S1;

struct func_80268C1C_S2;
typedef struct func_80268C1C_S2 func_80268C1C_S2;

struct Owner_func_802688E4_de;
struct Owner_func_802688E4_de {
    char pad0[8];
    Vec3 pos;
    char pad14[0x16D4 - 0x14];
    s32 alive;
};
struct Actor_func_802688E4_de;
struct Owner_func_802688E4_de;
struct Actor_func_802688E4_de {
    u8 kind;
    char pad1[0x100 - 1];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    struct Owner_func_802688E4_de *owner;
};
struct Blast;
struct Blast {
    char pad0[0xC];
    s32 radius;
    s32 damage;
};
struct Material18;
struct Material18 {
    u32 flags;
    char pad4[0x13];
    u8 alpha;
};
struct Mesh;
struct Mesh {
    u32 list;
    u32 matrix;
    u32 aux;
    u32 vertices;
    u16 scaleS;
    u16 scaleT;
    s32 segmented;
    s32 unused;
    struct Mesh *next;
};
struct Group18;
struct Group18 {
    char pad0[3];
    s8 mode;
    Material18 *material;
    Mesh *meshes;
    char padc[8];
    struct Group18 *next;
};
struct Item_func_8026BC60_de;
struct Item_func_8026BC60_de {
    s32 *data;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u16 unk10;
    u16 unk12;
    s32 unk14;
    s32 unk18;
    struct Item_func_8026BC60_de *next;
};
struct Material;
struct Material {
    u8 pad[6];
    u8 flags;
};
struct Source_func_8026BC60_de;
struct Source_func_8026BC60_de {
    s32 flags;
    u16 id;
    u8 pad6[0x12];
    u16 unk18;
    u16 unk1A;
};
struct Item_func_8026BC60_de;
struct Node_func_8026BC60_de;
struct Source_func_8026BC60_de;
struct Node_func_8026BC60_de {
    u32 key;
    struct Source_func_8026BC60_de *source;
    struct Item_func_8026BC60_de *head;
    struct Item_func_8026BC60_de *tail;
    struct Node_func_8026BC60_de *prev;
    struct Node_func_8026BC60_de *next;
    struct Node_func_8026BC60_de *left;
    struct Node_func_8026BC60_de *right;
};
struct RangeNode;
struct RangeNode {
    char pad0[4];
    struct RangeNode *next;
    u16 *radius;
    char padC[4];
    s16 x;
    s16 y;
    s16 z;
    s16 active;
};
struct func_802689BC_S1;
struct func_802689BC_S1 {
    char pad0[0xF];
    char unkF;
};
struct func_802689BC_S2;
struct func_802689BC_S2 {
    char pad0[0x270];
    char unk270;
};
struct func_802689CC_S1;
struct func_802689CC_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x170 - 0x100 - sizeof(s32)];
    s32 unk170;
};
struct func_80268C1C_S2;
struct func_80268C1C_S2 {
    char pad0[0x8];
    void * unk8;
    char pad8[0x16 - 0x8 - sizeof(void*)];
    s16 unk16;
};
extern void func_802688E4_de(Actor_func_802688E4_de *arg0, Player *arg1, s32 arg2, Blast blast);
extern void func_802689BC_de(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6);
extern void func_8026BC60_de(void);
extern void func_8026C020_de(void);
#endif
