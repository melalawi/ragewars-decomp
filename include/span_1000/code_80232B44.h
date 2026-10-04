#ifndef UNBAKE_SPAN_1000_CODE_80232B44_H
#define UNBAKE_SPAN_1000_CODE_80232B44_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct AxisWave;
typedef struct AxisWave AxisWave;

struct Effect33920;
typedef struct Effect33920 Effect33920;

struct Event;
typedef struct Event Event;

struct ObjectLinks11DC;
typedef struct ObjectLinks11DC ObjectLinks11DC;

struct ObjectState134;
typedef struct ObjectState134 ObjectState134;

struct ObjectState140;
typedef struct ObjectState140 ObjectState140;

struct Overlay;
typedef struct Overlay Overlay;

struct State_func_802337D0_de;
typedef struct State_func_802337D0_de State_func_802337D0_de;

struct func_80232B54_S2;
typedef struct func_80232B54_S2 func_80232B54_S2;

struct func_80232B54_S3;
typedef struct func_80232B54_S3 func_80232B54_S3;

struct func_80232BC0_S1;
typedef struct func_80232BC0_S1 func_80232BC0_S1;

struct func_80232C78_S2;
typedef struct func_80232C78_S2 func_80232C78_S2;

struct func_80232CDC_S2;
typedef struct func_80232CDC_S2 func_80232CDC_S2;

struct func_80232CDC_S3;
typedef struct func_80232CDC_S3 func_80232CDC_S3;

struct func_80232FE8_S2;
typedef struct func_80232FE8_S2 func_80232FE8_S2;

struct func_80232FE8_S3;
typedef struct func_80232FE8_S3 func_80232FE8_S3;

struct func_8023330C_S1;
typedef struct func_8023330C_S1 func_8023330C_S1;

struct func_8023333C_S1;
typedef struct func_8023333C_S1 func_8023333C_S1;

struct func_80233588_S2;
typedef struct func_80233588_S2 func_80233588_S2;

struct func_8023370C_S1;
typedef struct func_8023370C_S1 func_8023370C_S1;

struct AxisWave;
struct AxisWave {
    s32 kind;
    s32 unk04;
    s32 unk08;
    f32 scale;
    f32 rate;
};
struct Effect33920;
struct Effect33920 {
    s32 unk00;
    s32 unk04;
    Vec3 origin;
    f32 radius;
    AxisWave x;
    AxisWave y;
    AxisWave z;
};
struct Source_func_80232F8C_de;
struct Source_func_80232F8C_de {
    char pad[0x294];
    float speed;
};
struct Event;
struct Source_func_80232F8C_de;
struct Event {
    int unk0;
    int side;
    struct Source_func_80232F8C_de *source;
};
struct ObjectLinks11DC;
struct ObjectLinks11DC {
    char pad0[0x5D8];
    char * unk_5D8;
    char pad5D8[0x62E - 0x5D8 - sizeof(char*)];
    s16 unk_62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk_650;
    char pad650[0x6AC - 0x650 - sizeof(s16)];
    s32 unk_6AC;
    char pad6AC[0x770 - 0x6AC - sizeof(s32)];
    s16 unk_770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk_11D8;
};
struct ObjectState134;
struct ObjectState134 {
    char pad0[0x64];
    s32 unk_64;
    char pad64[0x130 - 0x64 - sizeof(s32)];
    f32 unk_130;
};
struct ObjectState140;
struct ObjectState140 {
    char pad0[0x64];
    f32 unk_64;
    char pad64[0x130 - 0x64 - sizeof(f32)];
    f32 unk_130;
    char pad130[0x13C - 0x130 - sizeof(f32)];
    s32 unk_13C;
};
struct Overlay;
struct Overlay {
    char pad0[0x538];
    f32 timer;
    char pad53C[8];
    u32 state;
    char pad548[2];
    u8 alphaMax;
    u8 fadeIn;
    u8 hold;
    u8 fadeOut;
    char pad54E[3];
    u8 alpha;
};
struct State_func_802337D0_de;
struct State_func_802337D0_de {
    s32 mode;
    f32 value;
    f32 limit;
    f32 rate;
    f32 accumulator;
};
struct func_80232B54_S2;
struct func_80232B54_S2 {
    char pad0[0x788];
    s32 unk788;
    char pad788[0x78C - 0x788 - sizeof(s32)];
    s32 unk78C;
    char pad78C[0x794 - 0x78C - sizeof(s32)];
    s32 unk794;
};
struct func_80232B54_S3;
struct func_80232B54_S3 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x124 - 0xCB - sizeof(s8)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};
struct func_80232BC0_S1;
struct func_80232BC0_S1 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x11B4 - 0x6AC - sizeof(s32)];
    s32 unk11B4;
    char pad11B4[0x11D8 - 0x11B4 - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    void * unk1454;
};
struct func_80232C78_S2;
struct func_80232C78_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x11C0 - 0x62E - sizeof(s16)];
    s32 unk11C0;
};
struct func_80232CDC_S2;
struct func_80232CDC_S2 {
    char pad0[0x35];
    s8 unk35;
    char pad35[0xCB - 0x35 - sizeof(s8)];
    s8 unkCB;
};
struct func_80232CDC_S3;
struct func_80232CDC_S3 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x62E - 0x8 - sizeof(Vec3)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x788 - 0x6AC - sizeof(s32)];
    s32 unk788;
    char pad788[0x78C - 0x788 - sizeof(s32)];
    s32 unk78C;
};
struct func_80232FE8_S2;
struct func_80232FE8_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x770 - 0x650 - sizeof(s16)];
    s16 unk770;
};
struct func_80232FE8_S3;
struct func_80232FE8_S3 {
    char pad0[0x13C];
    s32 unk13C;
};
struct func_8023330C_S1;
struct func_8023330C_S1 {
    char pad0[0x148];
    float unk148;
};
struct func_8023333C_S1;
struct func_8023333C_S1 {
    char pad0[0x104];
    f32 unk104;
    char pad104[0x1D8 - 0x104 - sizeof(f32)];
    void * unk1D8;
};
struct func_80233588_S2;
struct func_80233588_S2 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x13C - 0xCB - sizeof(s8)];
    s32 unk13C;
};
struct func_8023370C_S1;
struct func_8023370C_S1 {
    char pad0[0x124];
    f32 unk124;
};
extern void func_80232C68_de(void *arg0);
extern void func_80232C88_de(void *arg0, void *arg1);
extern void func_80232DF4_de(void *arg0);
extern void func_80232E38_de(void *arg0);
extern void func_80232F8C_de(void *obj, Event *event);
extern void func_802330AC_de(void *arg0, void *arg1);
extern void func_80233188_de(void *object, Event *event);
extern void func_80233314_de(void);
extern void func_80233344_de(void);
extern void func_8023356C_de(void *arg0);
extern void func_802335EC_de(void *arg0, void *arg1);
extern void func_8023378C_de(void *arg0, void *arg1);
extern void func_80233930_de(Effect33920 *arg0, u32 x, u32 y, u32 z, Vec3 *out);
extern void func_80233B14_de(Overlay *overlay);
#endif
