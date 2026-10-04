#ifndef UNBAKE_SPAN_1000_CODE_8026565C_H
#define UNBAKE_SPAN_1000_CODE_8026565C_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct CallbackEntry_func_80267198_de;
typedef struct CallbackEntry_func_80267198_de CallbackEntry_func_80267198_de;

struct CallbackEntry_func_802671FC_de;
typedef struct CallbackEntry_func_802671FC_de CallbackEntry_func_802671FC_de;

struct LightData;
typedef struct LightData LightData;

struct LightNode;
typedef struct LightNode LightNode;

struct Object_func_8026730C_de;
typedef struct Object_func_8026730C_de Object_func_8026730C_de;

struct UnitLight;
typedef struct UnitLight UnitLight;

struct func_8026745C_S1;
typedef struct func_8026745C_S1 func_8026745C_S1;

struct func_8026745C_S2;
typedef struct func_8026745C_S2 func_8026745C_S2;

struct func_80267540_S2;
typedef struct func_80267540_S2 func_80267540_S2;

struct ResourceManagerState;
struct Triple;
typedef void ( *func_80267198_de_Callback)(void *, void *, signed int, struct Triple, struct ResourceManagerState);
struct CallbackEntry_func_80267198_de;
struct CallbackEntry_func_80267198_de {
    func_80267198_de_Callback callback;
    s32 unused;
};
struct ResourceManagerState;
struct Triple;
typedef void ( *func_802671FC_de_Callback)(void *, void *, signed int, struct Triple, struct ResourceManagerState);
struct CallbackEntry_func_802671FC_de;
struct CallbackEntry_func_802671FC_de {
    func_802671FC_de_Callback callback;
    s32 unused;
};
struct LightData;
struct LightData {
    u16 falloff;
    u16 near;
    u8 color[4];
};
struct LightNode;
struct LightNode {
    char pad0[8];
    LightData *data;
    f32 intensity;
    s16 position[3];
    s16 active;
};
struct Object_func_8026730C_de;
struct Object_func_8026730C_de {
    u8 type;
    u8 pad1[0x17];
    s32 *kind;
    u8 pad1C[0xB4];
    s32 value;
};
struct UnitLight;
struct UnitLight {
    s16 dir[3];
    u8 color[4];
    s16 falloff;
    u16 near;
    u16 range;
};
struct func_8026745C_S1;
struct func_8026745C_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char * unk1D8;
};
struct func_8026745C_S2;
struct func_8026745C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x62E - 0x8 - sizeof(Vec3)];
    s16 unk62E;
};
struct func_80267540_S2;
struct func_80267540_S2 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};
extern int func_8026563C_de(int arg0);
extern void func_802656DC_de(s32 arg0, s32 arg1);
extern f32 func_80265714_de(f32 arg0);
extern int func_8026581C_de(u32 address);
extern void func_802658DC_de(void);
extern void func_80265900_de(void);
extern void func_80265DD0_de(void);
extern void func_802671FC_de(void *arg0, void *arg1, s32 arg2, Triple arg3, ResourceManagerState arg6);
#endif
