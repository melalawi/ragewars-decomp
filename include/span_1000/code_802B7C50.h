#ifndef UNBAKE_SPAN_1000_CODE_802B7C50_H
#define UNBAKE_SPAN_1000_CODE_802B7C50_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALParam_s_func_802B3000_de;
typedef struct ALParam_s_func_802B3000_de ALParam_s_func_802B3000_de;

struct ALSndPlayer;
typedef struct ALSndPlayer ALSndPlayer;

union ALSndpEvent;
typedef union ALSndpEvent ALSndpEvent;

struct Node_func_802B3130_de;
typedef struct Node_func_802B3130_de Node_func_802B3130_de;

struct Obj_func_802B2F60_de;
typedef struct Obj_func_802B2F60_de Obj_func_802B2F60_de;

struct PVoice_s_func_802B3000_de;
typedef struct PVoice_s_func_802B3000_de PVoice_s_func_802B3000_de;

struct Params_func_802B2DE0_de;
typedef struct Params_func_802B2DE0_de Params_func_802B2DE0_de;

struct Params_func_802B2E80_de;
typedef struct Params_func_802B2E80_de Params_func_802B2E80_de;

struct Params_func_802B2F10_de;
typedef struct Params_func_802B2F10_de Params_func_802B2F10_de;

struct Slot_func_802B2ED0_de;
typedef struct Slot_func_802B2ED0_de Slot_func_802B2ED0_de;

struct func_802B7D18_S2;
typedef struct func_802B7D18_S2 func_802B7D18_S2;

struct func_802B7EB0_S1;
typedef struct func_802B7EB0_S1 func_802B7EB0_S1;

struct func_802B7FA0_S1;
typedef struct func_802B7FA0_S1 func_802B7FA0_S1;

struct func_802B8200_S1;
typedef struct func_802B8200_S1 func_802B8200_S1;

struct ALParam_s_func_802B3000_de;
struct ALParam_s_func_802B3000_de {
    struct ALParam_s_func_802B3000_de *next;
    s32 delta;
    s16 type;
    union {
        f32 f;
        s32 i;
    } data;
    union {
        f32 f;
        s32 i;
    } moredata;
};
struct ALSndPlayer;
struct ALSndPlayer {
    ALPlayer_s node;
    ALEventQueue evtq;
    Message_func_802AF150_de nextEvent;
    void *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    s32 frameTime;
    s32 nextDelta;
    s32 curTime;
};
union ALSndpEvent;
union ALSndpEvent {
    Message_func_802AF150_de msg;
    struct {
        s16 type;
        void *state;
    } common;
};
struct Limit;
struct Node_func_802B3130_de;
struct Node_func_802B3130_de {
    struct Node_func_802B3130_de *next;
    char pad4[4];
    struct Limit *limit;
    char padC[0xCC];
    s32 flags;
};
struct Obj_func_802B2F60_de;
struct Obj_func_802B2F60_de {
    char pad3C[0x3C];
    s32 field3C;
    s32 field40;
};
struct Params_func_802B2DE0_de;
struct Params_func_802B2DE0_de {
    s16 f0;
    s32 f4;
    s8 f8;
};
struct Params_func_802B2E80_de;
struct Params_func_802B2E80_de {
    s16 f0;
    s32 f4;
    s32 f8;
};
struct Params_func_802B2F10_de;
struct Params_func_802B2F10_de {
    s16 f0;
    s32 f4;
    s16 f8;
};
struct Slot_func_802B2ED0_de;
struct Slot_func_802B2ED0_de {
    char pad0[0x20];
    short value;
    char pad22[0xE];
};
struct func_802B7D18_S2;
struct func_802B7D18_S2 {
    char * unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    s32 unk10;
};
struct func_802B7EB0_S1;
struct func_802B7EB0_S1 {
    char pad0[0x14];
    char unk14;
    char pad14[0x3C - 0x14 - sizeof(char)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
};
struct func_802B7FA0_S1;
struct func_802B7FA0_S1 {
    char pad0[0x40];
    void * unk40;
};
struct func_802B8200_S1;
struct func_802B8200_S1 {
    char pad0[4];
    void *unk4;
    char pad4[4];
    void *unkC;
    char padC[4];
    void *unk14;
};
extern s32 func_802B2BBC_de(void *node);
extern double func_802B2CF0_de(int arg0, float arg1);
#endif
