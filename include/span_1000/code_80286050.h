#ifndef UNBAKE_SPAN_1000_CODE_80286050_H
#define UNBAKE_SPAN_1000_CODE_80286050_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Bank_func_8028B274_de;
typedef struct Bank_func_8028B274_de Bank_func_8028B274_de;

struct Descriptor_func_80286950_de;
typedef struct Descriptor_func_80286950_de Descriptor_func_80286950_de;

struct Entity;
typedef struct Entity Entity;

struct GlobalMode;
typedef struct GlobalMode GlobalMode;

struct ObjectLinks74;
typedef struct ObjectLinks74 ObjectLinks74;

struct Object_func_80286950_de;
typedef struct Object_func_80286950_de Object_func_80286950_de;

struct Object_func_80288EA8_de;
typedef struct Object_func_80288EA8_de Object_func_80288EA8_de;

struct Object_func_8028B274_de;
typedef struct Object_func_8028B274_de Object_func_8028B274_de;

struct Scene_func_80288EA8_de;
typedef struct Scene_func_80288EA8_de Scene_func_80288EA8_de;

struct Scene_func_8028B028_de;
typedef struct Scene_func_8028B028_de Scene_func_8028B028_de;

struct Table_func_8028B274_de;
typedef struct Table_func_8028B274_de Table_func_8028B274_de;

struct World_func_80286950_de;
typedef struct World_func_80286950_de World_func_80286950_de;

struct func_80286254_S1;
typedef struct func_80286254_S1 func_80286254_S1;

struct func_8028AFE8_S1;
typedef struct func_8028AFE8_S1 func_8028AFE8_S1;

struct func_8028B1F8_S1;
typedef struct func_8028B1F8_S1 func_8028B1F8_S1;

struct func_8028B1F8_S2;
typedef struct func_8028B1F8_S2 func_8028B1F8_S2;

struct func_8028B238_S1;
typedef struct func_8028B238_S1 func_8028B238_S1;

struct func_8028B370_S0;
typedef struct func_8028B370_S0 func_8028B370_S0;

struct func_8028B4AC_S1;
typedef struct func_8028B4AC_S1 func_8028B4AC_S1;

struct Table_func_8028B274_de;
struct Table_func_8028B274_de {
    s32 unused;
    s32 count;
    u16 entries[1];
};
struct Bank_func_8028B274_de;
struct Table_func_8028B274_de;
struct Bank_func_8028B274_de {
    char pad0[0x24];
    s32 field24;
    char pad28[0x2C];
    s32 field54;
    char pad58[0x3C];
    struct Table_func_8028B274_de *table;
};
struct Descriptor_func_80286950_de;
struct Descriptor_func_80286950_de {
    s32 type;
    s32 flags;
    char pad8[4];
    s16 model;
    char padE[0x20 - 0xE];
    s32 kind;
};
struct Entity;
struct Entity {
    char pad0[0xF];
    unsigned char flag;
    char pad10[3];
    unsigned char index;
};
struct GlobalMode;
struct GlobalMode {
    char pad[0x1295];
    u8 mode;
};
struct ObjectLinks74;
struct ObjectLinks74 {
    unsigned char padding_0[112];
    void *unk_70;
};
struct Descriptor_func_80286950_de;
struct Object_func_80286950_de;
struct Object_func_80286950_de {
    char pad0[0x18];
    struct Descriptor_func_80286950_de *descriptor;
    char pad1C[0x2E8 - 0x1C];
};
struct Object_func_80288EA8_de;
struct Object_func_80288EA8_de {
    char pad0[0xD8];
    u16 flags;
};
struct Object_func_8028B274_de;
struct Object_func_8028B274_de {
    char pad0[4];
    s16 index;
    char pad6[0xDE];
    u16 id;
};
struct Scene_func_80288EA8_de;
struct Scene_func_80288EA8_de {
    char pad0[0x88];
    void *model;
    char pad8C[0xF8 - 0x8C];
    s32 loaded;
    char padFC[0x120 - 0xFC];
    Gfx *lists[2];
};
struct Scene_func_8028B028_de;
struct Scene_func_8028B028_de {
    char pad0[0xC50];
    func_80203C40_S1 *objects[128];
    s32 count;
    char padE54[0x10BC - 0xE54];
    s32 lateCount;
    func_80203C40_S1 *late[64];
};
struct Object_func_80286950_de;
struct World_func_80286950_de;
struct World_func_80286950_de {
    char pad0[0x138];
    struct Object_func_80286950_de *objects;
    s32 pad13C;
    s32 count;
    char pad144[0x1B620 - 0x144];
    Object_func_80286950_de *switches[16];
    s32 switchCount;
};
struct func_80286254_S1;
struct func_80286254_S1 {
    char pad0[0xC50];
    s32 unkC50;
    char padC54[0xE50-0xC54];
    s32 unkE50;
};
struct func_8028AFE8_S1;
struct func_8028AFE8_S1 {
    char pad0[0xA0];
    char * unkA0;
};
struct func_8028B1F8_S1;
struct func_8028B1F8_S1 {
    char pad0[0x94];
    void * unk94;
};
struct func_8028B1F8_S2;
struct func_8028B1F8_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    u16 unk8;
};
struct func_8028B238_S1;
struct func_8028B238_S1 {
    char pad0[0x94];
    char * unk94;
};
struct func_8028B370_S0;
struct func_8028B370_S0 {
    char pad0[0x6C];
    void *unk6C;
};
struct func_8028B4AC_S1;
struct func_8028B4AC_S1 {
    char pad0[0x84];
    void * unk84;
    char pad84[0x1B40C - 0x84 - sizeof(void*)];
    s32 unk1B40C;
};
extern void func_8028B4C8_de(void);
extern void func_8028B4D0_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8028B5C0_de(void *arg0, s32 arg1);
#endif
