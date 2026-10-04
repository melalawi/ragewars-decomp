#ifndef UNBAKE_SPAN_1000_CODE_80214DD4_H
#define UNBAKE_SPAN_1000_CODE_80214DD4_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_80214DD4_de;
typedef struct Actor_func_80214DD4_de Actor_func_80214DD4_de;

struct AudioStateA4;
typedef struct AudioStateA4 AudioStateA4;

struct CActor_t;
typedef struct CActor_t CActor_t;

struct Cursor802171C8;
typedef struct Cursor802171C8 Cursor802171C8;

struct Dest_func_802164A8_de;
typedef struct Dest_func_802164A8_de Dest_func_802164A8_de;

struct Field_Vec_0;
typedef struct Field_Vec_0 Field_Vec_0;

struct Field_Vec_28;
typedef struct Field_Vec_28 Field_Vec_28;

struct Field_Vec_34;
typedef struct Field_Vec_34 Field_Vec_34;

struct Field_Vec_B0;
typedef struct Field_Vec_B0 Field_Vec_B0;

struct Field_Vec_C;
typedef struct Field_Vec_C Field_Vec_C;

struct Field_f32_24;
typedef struct Field_f32_24 Field_f32_24;

struct Field_f32_9C;
typedef struct Field_f32_9C Field_f32_9C;

struct Field_s32_788;
typedef struct Field_s32_788 Field_s32_788;

struct Field_s8_94;
typedef struct Field_s8_94 Field_s8_94;

struct Field_s8_CE;
typedef struct Field_s8_CE Field_s8_CE;

struct Field_void_68;
typedef struct Field_void_68 Field_void_68;

struct Field_void_794;
typedef struct Field_void_794 Field_void_794;

struct Field_void_88;
typedef struct Field_void_88 Field_void_88;

struct Func802172C4Value;
typedef struct Func802172C4Value Func802172C4Value;

struct Location;
typedef struct Location Location;

struct ObjectLinks1230;
typedef struct ObjectLinks1230 ObjectLinks1230;

struct Output80216D3C;
typedef struct Output80216D3C Output80216D3C;

struct Picker;
typedef struct Picker Picker;

struct Result_func_802165F8_de;
typedef struct Result_func_802165F8_de Result_func_802165F8_de;

struct Source_func_802164A8_de;
typedef struct Source_func_802164A8_de Source_func_802164A8_de;

struct TrackResult;
typedef struct TrackResult TrackResult;

struct Tracker;
typedef struct Tracker Tracker;

struct Vec3_func_802168B8_de;
typedef struct Vec3_func_802168B8_de Vec3_func_802168B8_de;

struct func_802165F8_S2;
typedef struct func_802165F8_S2 func_802165F8_S2;

struct func_802169AC_S1;
typedef struct func_802169AC_S1 func_802169AC_S1;

struct func_802169AC_S2;
typedef struct func_802169AC_S2 func_802169AC_S2;

struct func_802169AC_S3;
typedef struct func_802169AC_S3 func_802169AC_S3;

struct func_802169AC_S4;
typedef struct func_802169AC_S4 func_802169AC_S4;

struct func_80216A6C_S1;
typedef struct func_80216A6C_S1 func_80216A6C_S1;

struct func_80216D30_S1;
typedef struct func_80216D30_S1 func_80216D30_S1;

struct func_80216D3C_S1;
typedef struct func_80216D3C_S1 func_80216D3C_S1;

struct func_80216D3C_S2;
typedef struct func_80216D3C_S2 func_80216D3C_S2;

struct func_80216F44_S1;
typedef struct func_80216F44_S1 func_80216F44_S1;

struct func_802172D0_S1;
typedef struct func_802172D0_S1 func_802172D0_S1;

struct func_802172D0_S3;
typedef struct func_802172D0_S3 func_802172D0_S3;

struct func_80217388_S1;
typedef struct func_80217388_S1 func_80217388_S1;

struct func_80217388_S2;
typedef struct func_80217388_S2 func_80217388_S2;

struct AudioStateA4;
struct AudioStateA4 {
    char pad0[0x98];
    s32 field98;
    char pad9C[4];
    s32 fieldA0;
};
struct CActor_t;
struct CActor_t {
    u8 type;
    u8 pad001[0x1B];
    Vec3 position;
    u8 pad028[0xBC];
    u16 objectId;
    u8 pad0E6[0x10A];
    s32 eventValue;
    u8 pad1F4[0xA8];
    s32 eventCount;
};
struct Cursor802171C8;
struct Cursor802171C8 {
    void *base;
    u16 *cur;
};
struct Source_func_802164A8_de;
struct Source_func_802164A8_de {
    char pad0[8];
    Triple position;
    char pad14[4];
    s32 *kind;
    char pad1c[0x50];
    f32 height;
    char pad70[0x90];
    s32 flags;
    char pad104[0x98];
    s32 active;
};
struct Dest_func_802164A8_de;
struct Dest_func_802164A8_de {
    char pad0[0x40];
    f32 value;
    char pad44[4];
    Triple old_position;
    Triple position;
    f32 height;
    char pad64[0x69];
    u8 timer;
    char padce[0x2E];
    func_80205628_S3 *aux;
    char pad100[8];
    void (*callback)(Source_func_802164A8_de *, struct Dest_func_802164A8_de *);
};
struct Field_Vec_0;
struct Field_Vec_0 {
    Vec3 value;
};
struct Field_Vec_28;
struct Field_Vec_28 {
    char pad[0x28];
    Vec3 value;
};
struct Field_Vec_34;
struct Field_Vec_34 {
    char pad[0x34];
    Vec3 value;
};
struct Field_Vec_B0;
struct Field_Vec_B0 {
    char pad[0xB0];
    Vec3 value;
};
struct Field_Vec_C;
struct Field_Vec_C {
    char pad[0xC];
    Vec3 value;
};
struct Field_f32_24;
struct Field_f32_24 {
    char pad[0x24];
    f32 value;
};
struct Field_f32_9C;
struct Field_f32_9C {
    char pad[0x9C];
    f32 value;
};
struct Field_s32_788;
struct Field_s32_788 {
    char pad[0x788];
    s32 value;
};
struct Field_s8_94;
struct Field_s8_94 {
    char pad[0x94];
    s8 value;
};
struct Field_s8_CE;
struct Field_s8_CE {
    char pad[0xCE];
    s8 value;
};
struct Field_void_68;
struct Field_void_68 {
    char pad[0x68];
    void * value;
};
struct Field_void_794;
struct Field_void_794 {
    char pad[0x794];
    void * value;
};
struct Field_void_88;
struct Field_void_88 {
    char pad[0x88];
    void * value;
};
struct Func802172C4Value;
struct Func802172C4Value {
    int words[2];
};
struct Location;
struct Location {
    Vec3 pos;
    s32 room;
};
struct ObjectLinks1230;
struct ObjectLinks1230 {
    char pad0[0x100];
    u32 unk_100;
    char pad100[0x5D8 - 0x100 - sizeof(u32)];
    char * unk_5D8;
    char pad5D8[0x122C - 0x5D8 - sizeof(char*)];
    u32 unk_122C;
};
struct Output80216D3C;
struct Output80216D3C {
    s32 type;
    s32 unk4;
    s32 unk8;
    Triple first;
    Triple second;
    s32 unk24;
    Triple third;
    Triple fourth;
    s32 unk40;
};
struct Picker;
struct Picker {
    s16 count;
    char pad[0x66];
};
struct Result_func_802165F8_de;
struct Result_func_802165F8_de {
    Vec3 first;
    Vec3 first_normalized;
    f32 first_length;
    Vec3 flat;
    Vec3 flat_normalized;
    f32 flat_length;
    f32 height;
};
struct Actor_func_80214DD4_de;
struct TrackResult;
struct TrackResult {
    s32 kind;
    struct Actor_func_80214DD4_de *target;
    f32 range;
    Vec3 pos;
    Vec3 delta;
    f32 dist;
    Vec3 flatPos;
    Vec3 flatDelta;
    f32 flatDist;
};
struct Actor_func_80214DD4_de;
struct Tracker;
struct Tracker {
    s32 flags;
    s32 active;
    u8 pad8[0x60];
    struct Actor_func_80214DD4_de *self;
    Vec3 offset;
    s32 unk78;
    u8 pad7C[4];
    struct Actor_func_80214DD4_de *anchor;
    u8 pad84[4];
    struct Actor_func_80214DD4_de *target;
    f32 angle;
    f32 height;
    s8 slot;
    u8 pad95[0x1B];
    Vec3 homePos;
    s32 homeRoom;
    u8 padC0[0xE];
    s8 team;
};
struct Vec3_func_802168B8_de;
struct Vec3_func_802168B8_de {
    s32 unk0;
    s32 unk4;
    f32 x;
    f32 y;
    f32 z;
};
struct func_802165F8_S2;
struct func_802165F8_S2 {
    char pad0[0x48];
    Vec3 unk48;
    char pad48[0x60 - 0x48 - sizeof(Vec3)];
    f32 unk60;
};
struct func_802169AC_S1;
struct func_802169AC_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x68 - 0x4 - sizeof(s32)];
    void * unk68;
    char pad68[0x94 - 0x68 - sizeof(void*)];
    s8 unk94;
};
struct func_802169AC_S2;
struct func_802169AC_S2 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void * unk1D8;
};
struct func_802169AC_S3;
struct func_802169AC_S3 {
    char pad0[0x788];
    s32 unk788;
    char pad788[0x794 - 0x788 - sizeof(s32)];
    void * unk794;
};
struct func_802169AC_S4;
struct func_802169AC_S4 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x2E0 - 0xE4 - sizeof(u16)];
    s32 unk2E0;
};
struct func_80216A6C_S1;
struct func_80216A6C_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x70 - 0xC - sizeof(f32)];
    f32 unk70;
};
struct func_80216D30_S1;
struct func_80216D30_S1 {
    char pad0[0x78];
    int unk78;
    char pad78[0x7C - 0x78 - sizeof(int)];
    int unk7C;
};
struct func_80216D3C_S1;
struct func_80216D3C_S1 {
    char pad0[0x78];
    s32 unk78;
    char pad78[0x7C - 0x78 - sizeof(s32)];
    f32 unk7C;
    char pad7C[0x80 - 0x7C - sizeof(f32)];
    s32 unk80;
    char pad80[0x88 - 0x80 - sizeof(s32)];
    s32 unk88;
};
struct func_80216D3C_S2;
struct func_80216D3C_S2 {
    char pad0[0x44];
    Output80216D3C unk44;
};
struct func_80216F44_S1;
struct func_80216F44_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x6C - 0x10 - sizeof(f32)];
    f32 unk6C;
};
struct func_802172D0_S1;
struct func_802172D0_S1 {
    char pad0[0xFC];
    void * unkFC;
};
struct func_802172D0_S3;
struct func_802172D0_S3 {
    char pad0[0x8];
    char unk8;
    char pad8[0xD0 - 0x8 - sizeof(char)];
    void * unkD0;
};
struct func_80217388_S1;
struct func_80217388_S1 {
    char pad0[0xD0];
    void * unkD0;
};
struct func_80217388_S2;
struct func_80217388_S2 {
    char pad0[0xFC];
    s32 unkFC;
};
extern s32 func_802169AC_de(void *arg0, void *arg1, void *arg2);
extern void func_80216D30_de(void *arg0, void *arg1, int arg2, int arg3);
extern void func_802171BC_de(int *value, int word);
extern s16 func_802171C8_de(Cursor802171C8 *arg0);
extern void func_802172C4_de(void *arg0, void *arg1, Func802172C4Value arg2);
extern void func_802174E4_de(void *arg0, void *unused1, Output80216D3C *arg2);
#endif
