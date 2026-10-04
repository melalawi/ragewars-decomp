#ifndef UNBAKE_SPAN_1000_CODE_8026565C_H
#define UNBAKE_SPAN_1000_CODE_8026565C_H
#include "common/types.h"
#include "../types.h"
struct LightData;
struct LightData;
typedef struct LightData LightData;

/* unbake evidence input: c3RydWN0IExpZ2h0RGF0YTsKdHlwZWRlZiBzdHJ1Y3QgTGlnaHREYXRhIExpZ2h0RGF0YTsK */

struct LightNode;
struct LightNode;
typedef struct LightNode LightNode;

/* unbake evidence input: c3RydWN0IExpZ2h0Tm9kZTsKdHlwZWRlZiBzdHJ1Y3QgTGlnaHROb2RlIExpZ2h0Tm9kZTsK */

struct Object_func_8026730C_de;
struct Object_func_8026730C_de;
typedef struct Object_func_8026730C_de Object_func_8026730C_de;

/* unbake evidence input: c3RydWN0IE9iamVjdF9mdW5jXzgwMjY3MzBDX2RlOwp0eXBlZGVmIHN0cnVjdCBPYmplY3RfZnVuY184MDI2NzMwQ19kZSBPYmplY3RfZnVuY184MDI2NzMwQ19kZTsK */

struct UnitLight;
struct UnitLight;
typedef struct UnitLight UnitLight;

/* unbake evidence input: c3RydWN0IFVuaXRMaWdodDsKdHlwZWRlZiBzdHJ1Y3QgVW5pdExpZ2h0IFVuaXRMaWdodDsK */

struct func_8026745C_S1;
struct func_8026745C_S1;
typedef struct func_8026745C_S1 func_8026745C_S1;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc0NUNfUzE7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyNjc0NUNfUzEgZnVuY184MDI2NzQ1Q19TMTsK */

struct func_8026745C_S2;
struct func_8026745C_S2;
typedef struct func_8026745C_S2 func_8026745C_S2;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc0NUNfUzI7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyNjc0NUNfUzIgZnVuY184MDI2NzQ1Q19TMjsK */

struct func_80267540_S2;
struct func_80267540_S2;
typedef struct func_80267540_S2 func_80267540_S2;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc1NDBfUzI7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyNjc1NDBfUzIgZnVuY184MDI2NzU0MF9TMjsK */

struct ResourceManagerState;
struct Triple;
typedef void ( *func_80267198_de_Callback)(void *, void *, signed int, struct Triple, struct ResourceManagerState);
struct CallbackEntry_func_80267198_de;
struct CallbackEntry_func_80267198_de {
    func_80267198_de_Callback callback;
    s32 unused;
};
/* unbake evidence input: c3RydWN0IENhbGxiYWNrRW50cnlfZnVuY184MDI2NzE5OF9kZSB7CiAgICBmdW5jXzgwMjY3MTk4X2RlX0NhbGxiYWNrIGNhbGxiYWNrOwogICAgczMyIHVudXNlZDsKfTs= */

struct ResourceManagerState;
struct Triple;
typedef void ( *func_802671FC_de_Callback)(void *, void *, signed int, struct Triple, struct ResourceManagerState);
struct CallbackEntry_func_802671FC_de;
struct CallbackEntry_func_802671FC_de {
    func_802671FC_de_Callback callback;
    s32 unused;
};
/* unbake evidence input: c3RydWN0IENhbGxiYWNrRW50cnlfZnVuY184MDI2NzFGQ19kZSB7CiAgICBmdW5jXzgwMjY3MUZDX2RlX0NhbGxiYWNrIGNhbGxiYWNrOwogICAgczMyIHVudXNlZDsKfTs= */

struct LightData;
struct LightData;
struct LightData {
    u16 falloff;
    u16 near;
    u8 color[4];
};

/* unbake evidence input: c3RydWN0IExpZ2h0RGF0YTsKc3RydWN0IExpZ2h0RGF0YSB7CiAgICB1MTYgZmFsbG9mZjsKICAgIHUxNiBuZWFyOwogICAgdTggY29sb3JbNF07Cn07Cg== */

struct LightNode;
struct LightNode;
struct LightNode {
    char pad0[8];
    LightData *data;
    f32 intensity;
    s16 position[3];
    s16 active;
};

/* unbake evidence input: c3RydWN0IExpZ2h0Tm9kZTsKc3RydWN0IExpZ2h0Tm9kZSB7CiAgICBjaGFyIHBhZDBbOF07CiAgICBMaWdodERhdGEgKmRhdGE7CiAgICBmMzIgaW50ZW5zaXR5OwogICAgczE2IHBvc2l0aW9uWzNdOwogICAgczE2IGFjdGl2ZTsKfTsK */

struct Object_func_8026730C_de;
struct Object_func_8026730C_de;
struct Object_func_8026730C_de {
    u8 type;
    u8 pad1[0x17];
    s32 *kind;
    u8 pad1C[0xB4];
    s32 value;
};

/* unbake evidence input: c3RydWN0IE9iamVjdF9mdW5jXzgwMjY3MzBDX2RlOwpzdHJ1Y3QgT2JqZWN0X2Z1bmNfODAyNjczMENfZGUgewogICAgdTggdHlwZTsKICAgIHU4IHBhZDFbMHgxN107CiAgICBzMzIgKmtpbmQ7CiAgICB1OCBwYWQxQ1sweEI0XTsKICAgIHMzMiB2YWx1ZTsKfTsK */

struct UnitLight;
struct UnitLight;
struct UnitLight {
    s16 dir[3];
    u8 color[4];
    s16 falloff;
    u16 near;
    u16 range;
};

/* unbake evidence input: c3RydWN0IFVuaXRMaWdodDsKc3RydWN0IFVuaXRMaWdodCB7CiAgICBzMTYgZGlyWzNdOwogICAgdTggY29sb3JbNF07CiAgICBzMTYgZmFsbG9mZjsKICAgIHUxNiBuZWFyOwogICAgdTE2IHJhbmdlOwp9Owo= */

struct func_8026745C_S1;
struct func_8026745C_S1;
struct func_8026745C_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char * unk1D8;
};

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc0NUNfUzE7CnN0cnVjdCBmdW5jXzgwMjY3NDVDX1MxIHsKICAgIGNoYXIgcGFkMFsweDEwMF07CiAgICBzMzIgdW5rMTAwOwogICAgY2hhciBwYWQxMDBbMHgxRDggLSAweDEwMCAtIHNpemVvZihzMzIpXTsKICAgIGNoYXIgKiB1bmsxRDg7Cn07Cg== */

struct func_8026745C_S2;
struct func_8026745C_S2;
struct func_8026745C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x62E - 0x8 - sizeof(Vec3)];
    s16 unk62E;
};

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc0NUNfUzI7CnN0cnVjdCBmdW5jXzgwMjY3NDVDX1MyIHsKICAgIGNoYXIgcGFkMFsweDhdOwogICAgVmVjMyB1bms4OwogICAgY2hhciBwYWQ4WzB4NjJFIC0gMHg4IC0gc2l6ZW9mKFZlYzMpXTsKICAgIHMxNiB1bms2MkU7Cn07Cg== */

struct func_80267540_S2;
struct func_80267540_S2;
struct func_80267540_S2 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyNjc1NDBfUzI7CnN0cnVjdCBmdW5jXzgwMjY3NTQwX1MyIHsKICAgIGNoYXIgcGFkMFsweDE4XTsKICAgIHMzMiAqIHVuazE4OwogICAgY2hhciBwYWQxOFsweEU0IC0gMHgxOCAtIHNpemVvZihzMzIqKV07CiAgICB1MTYgdW5rRTQ7CiAgICBjaGFyIHBhZEU0WzB4MTAwIC0gMHhFNCAtIHNpemVvZih1MTYpXTsKICAgIHMzMiB1bmsxMDA7Cn07Cg== */

struct CallbackEntry_func_80267198_de;
typedef struct CallbackEntry_func_80267198_de CallbackEntry_func_80267198_de;
struct CallbackEntry_func_802671FC_de;
typedef struct CallbackEntry_func_802671FC_de CallbackEntry_func_802671FC_de;
extern int func_8026563C_de(int arg0);
extern void func_802656DC_de(s32 arg0, s32 arg1);
extern f32 func_80265714_de(f32 arg0);
extern int func_8026581C_de(u32 address);
extern void func_802658DC_de(void);
extern void func_80265900_de(void);
extern void func_80265DD0_de(void);
extern void func_802671FC_de(void *arg0, void *arg1, s32 arg2, Triple arg3, ResourceManagerState arg6);
#endif
