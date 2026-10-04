#ifndef UNBAKE_SPAN_1000_CODE_8024F944_H
#define UNBAKE_SPAN_1000_CODE_8024F944_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Descriptor_func_80250274_de;
typedef struct Descriptor_func_80250274_de Descriptor_func_80250274_de;

struct HashNode_func_80251F6C_de;
typedef struct HashNode_func_80251F6C_de HashNode_func_80251F6C_de;

struct Manager;
typedef struct Manager Manager;

struct Manager_func_802524B0_de;
typedef struct Manager_func_802524B0_de Manager_func_802524B0_de;

struct Node_func_80251328_de;
typedef struct Node_func_80251328_de Node_func_80251328_de;

struct Node_func_80251F6C_de;
typedef struct Node_func_80251F6C_de Node_func_80251F6C_de;

struct Node_func_802524B0_de;
typedef struct Node_func_802524B0_de Node_func_802524B0_de;

struct ObjectLinksDC;
typedef struct ObjectLinksDC ObjectLinksDC;

struct ObjectState13;
typedef struct ObjectState13 ObjectState13;

struct Owner_func_80250274_de;
typedef struct Owner_func_80250274_de Owner_func_80250274_de;

struct Owner_func_802504B0_de;
typedef struct Owner_func_802504B0_de Owner_func_802504B0_de;

struct Owner_func_80250C84_de;
typedef struct Owner_func_80250C84_de Owner_func_80250C84_de;

struct PlacedPropRecord;
typedef struct PlacedPropRecord PlacedPropRecord;

struct Request_func_80251F6C_de;
typedef struct Request_func_80251F6C_de Request_func_80251F6C_de;

struct Request_func_802524B0_de;
typedef struct Request_func_802524B0_de Request_func_802524B0_de;

struct func_802500A4_S1;
typedef struct func_802500A4_S1 func_802500A4_S1;

union func_802500A4_S1_UE0;
typedef union func_802500A4_S1_UE0 func_802500A4_S1_UE0;

struct func_802500A4_S2;
typedef struct func_802500A4_S2 func_802500A4_S2;

struct func_80250950_S1;
typedef struct func_80250950_S1 func_80250950_S1;

struct func_80250A7C_S1;
typedef struct func_80250A7C_S1 func_80250A7C_S1;

struct func_80250ACC_S1;
typedef struct func_80250ACC_S1 func_80250ACC_S1;

struct func_80250D88_S1;
typedef struct func_80250D88_S1 func_80250D88_S1;

struct func_80250D88_S2;
typedef struct func_80250D88_S2 func_80250D88_S2;

struct Descriptor_func_80250274_de;
struct Descriptor_func_80250274_de {
    char pad0[0xE];
    s8 key;
    s8 key2;
    char pad10[2];
    s8 argument;
    char pad13[0x24 - 0x13];
    s32 period;
};
struct Descriptor_func_802504B0_de;
struct Descriptor_func_802504B0_de {
    char pad0[0xE];
    s8 key;
    char padF[3];
    s8 argument;
};
struct Node_func_80251F6C_de;
struct Node_func_80251F6C_de {
    void *data;
    s32 unk04;
    s32 count;
    s32 flags;
    s32 stamp;
};
struct Node_func_80251F6C_de;
struct Request_func_80251F6C_de;
struct Request_func_80251F6C_de {
    struct Node_func_80251F6C_de *node;
    struct Node_func_80251F6C_de *extra;
    s32 key;
    s32 priority;
    s32 flags;
    void *unk14;
    void *owner;
    s32 mode;
    void *unk20;
    struct Request_func_80251F6C_de *next;
};
struct HashNode_func_80251F6C_de;
struct Request_func_80251F6C_de;
struct HashNode_func_80251F6C_de {
    s32 key;
    struct Request_func_80251F6C_de *value;
    s32 unk08;
    struct HashNode_func_80251F6C_de *next;
};
struct Manager;
struct Manager {
    char queue[0x92C];
    char pending[0x14];
    char active[0x20];
    char lock[0x18];
    char unk978[0x24];
    s32 mask;
};
struct Manager_func_802524B0_de;
struct Manager_func_802524B0_de {
    char queue[0x92C];
    char pending[0x14];
    char active[0x20];
    char lock[0x18];
};
struct Node_func_80251328_de;
struct Node_func_80251328_de {
    s32 resource;
    char pad4[8];
    s32 flags;
    s32 lastUsed;
    char pad14[4];
    struct Node_func_80251328_de *next;
};
struct Node_func_802524B0_de;
struct Node_func_802524B0_de {
    void *data;
    s32 pad4;
    s32 count;
    s32 flags;
};
struct ObjectLinksDC;
struct ObjectLinksDC {
    char pad0[0x18];
    char * unk_18;
    char pad18[0xD8 - 0x18 - sizeof(char*)];
    unsigned short unk_D8;
};
struct ObjectState13;
struct ObjectState13 {
    unsigned char padding_0[18];
    signed char unk_12;
};
struct Descriptor_func_80250274_de;
struct Owner_func_80250274_de;
struct Owner_func_80250274_de {
    char pad0[0x18];
    struct Descriptor_func_80250274_de *descriptor;
    char pad1C[4];
    s32 field20;
    char pad24[4];
    char transform[0xA8];
    s32 flagsD0;
    char padD4[4];
    u16 flagsD8;
    u8 colorFrame;
    char padDB;
    u32 timer;
    s8 fade;
};
struct Descriptor_func_802504B0_de;
struct Owner_func_802504B0_de;
struct Owner_func_802504B0_de {
    char pad0[0x18];
    struct Descriptor_func_802504B0_de *descriptor;
    char pad1C[4];
    s32 field20;
    char pad24[4];
    char transform[0xA8];
    s32 flagsD0;
    char padD4[4];
    u16 flagsD8;
    u8 colorFrame;
};
struct Owner_func_80250C84_de;
struct Owner_func_80250C84_de {
    char pad0[0x20];
    s32 field20;
    char pad24[4];
    char transform[0xA8];
    s32 flagsD0;
    char padD4[6];
    u8 colorFrame;
};
struct PlacedPropRecord;
struct PlacedPropRecord {
    s32 value;
    Vec3 position;
    Vec3 scale;
    char pad1C[0];
    u16 extents[6];
    u16 id;
    u16 segment;
    u16 model;
    u8 flags;
    s8 rotation[4];
};
struct Node_func_802524B0_de;
struct Request_func_802524B0_de;
struct Request_func_802524B0_de {
    struct Node_func_802524B0_de *node;
    s32 pad4[3];
    s32 flags;
};
union func_802500A4_S1_UE0;
union func_802500A4_S1_UE0 {
    s8 v0;
    u8 v1;
};
struct func_802500A4_S1;
struct func_802500A4_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    void * unk18;
    char pad18[0xD8 - 0x18 - sizeof(void*)];
    u16 unkD8;
    char padD8[0xDC - 0xD8 - sizeof(u16)];
    s32 unkDC;
    char padDC[0xE0 - 0xDC - sizeof(s32)];
    func_802500A4_S1_UE0 unkE0;
};
struct func_802500A4_S2;
struct func_802500A4_S2 {
    char pad0[0xE];
    s8 unkE;
    char padE[0xF - 0xE - sizeof(s8)];
    s8 unkF;
    char padF[0x24 - 0xF - sizeof(s8)];
    s32 unk24;
};
struct func_80250950_S1;
struct func_80250950_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0x20 - 0x1 - sizeof(s8)];
    s32 unk20;
    char pad20[0xD0 - 0x20 - sizeof(s32)];
    s32 unkD0;
    char padD0[0xD8 - 0xD0 - sizeof(s32)];
    u16 unkD8;
};
struct func_80250A7C_S1;
struct func_80250A7C_S1 {
    char pad0[0xD0];
    s32 unkD0;
    char padD0[0xD8 - 0xD0 - sizeof(s32)];
    u16 unkD8;
    char padD8[0xDA - 0xD8 - sizeof(u16)];
    u8 unkDA;
};
struct func_80250ACC_S1;
struct func_80250ACC_S1 {
    char pad0[0x20];
    s32 unk20;
    char pad20[0xB4 - 0x20 - sizeof(s32)];
    void * unkB4;
    char padB4[0xD0 - 0xB4 - sizeof(void*)];
    s32 unkD0;
};
struct func_80250D88_S1;
struct func_80250D88_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0xDC - 0x18 - sizeof(void*)];
    unsigned int unkDC;
};
struct func_80250D88_S2;
struct func_80250D88_S2 {
    char pad0[0xE];
    signed char unkE;
    char padE[0xF - 0xE - sizeof(signed char)];
    signed char unkF;
    char padF[0x24 - 0xF - sizeof(signed char)];
    unsigned int unk24;
};
extern void func_80250A9C_de(void);
extern void func_80250AD4_de(void *arg0);
extern int func_80250BF0_de(void);
extern int func_80250DE0_de(void *object);
extern s8 func_80250E14_de(void *arg0);
extern void *func_802517B4_de(s32 arg0, s32 arg1);
extern void func_802524B0_de(void *arg);
#endif
