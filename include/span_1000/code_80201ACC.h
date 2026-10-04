#ifndef UNBAKE_SPAN_1000_CODE_80201ACC_H
#define UNBAKE_SPAN_1000_CODE_80201ACC_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Obj;
typedef struct Obj Obj;

struct Result;
typedef struct Result Result;

struct Rider;
typedef struct Rider Rider;

struct Rider_func_80203278_de;
typedef struct Rider_func_80203278_de Rider_func_80203278_de;

struct Segment;
typedef struct Segment Segment;

struct Segment_func_80203278_de;
typedef struct Segment_func_80203278_de Segment_func_80203278_de;

struct func_80203908_S3;
typedef struct func_80203908_S3 func_80203908_S3;

struct Hook;
struct Obj;
struct Obj {
    char pad0[0x30];
    struct Hook *hook;
    char pad34[0x12C - 0x34];
    int count;
    char pad130[0x13C - 0x130];
    float timer;
};
struct Record_func_8020388C_de;
struct Record_func_8020388C_de {
    char pad0[0x2C];
    void *table;
    char pad30[0x108 - 0x30];
    void *first;
    s32 pad10C;
    void *second;
    char pad114[0x11C - 0x114];
    void *third;
    void *fourth;
    f32 speed;
    s32 pad128;
    s32 rate;
    s32 a;
    f32 range;
    s32 b;
    s32 c;
};
struct Result;
struct Result {
    char pad0[4];
    SharedPlayer *target;
    char pad8[0x38];
    f32 distance;
};
struct Segment;
struct Segment {
    char pad0[0x5C];
    f32 rise;
    f32 radius;
    f32 angle;
    f32 length;
};
struct Segment_func_80203278_de;
struct Segment_func_80203278_de {
    char pad0[0x54];
    f32 range;
};
struct func_80203908_S3;
struct func_80203908_S3 {
    char pad0[0x37];
    s8 unk37;
    char pad37[0x64 - 0x37 - sizeof(s8)];
    f32 unk64;
    char pad64[0x124 - 0x64 - sizeof(f32)];
    func_80203908_S3_U124 unk124;
    char pad124[0x128 - 0x124 - sizeof(func_80203908_S3_U124)];
    s32 unk128;
};
extern void func_802022E0_de(void);
extern void func_8020238C_de(void);
extern void func_802023A8_de(void);
extern int func_802023C4_de(void);
extern void func_802023D0_de(int arg0);
extern void func_8020388C_de(struct Owner_func_8020388C_de *owner, struct Record_func_8020388C_de *record);
extern int func_80203A94_de(void *arg0);
#endif
