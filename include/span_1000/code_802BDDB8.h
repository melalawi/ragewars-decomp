#ifndef UNBAKE_SPAN_1000_CODE_802BDDB8_H
#define UNBAKE_SPAN_1000_CODE_802BDDB8_H
#include "span_1000/types.h"
#include "../types.h"
struct DeviceState;
typedef struct DeviceState DeviceState;

struct OSPiHandle_s_func_802B93B0_de;
typedef struct OSPiHandle_s_func_802B93B0_de OSPiHandle_s_func_802B93B0_de;

struct PiTransfer802BE820;
typedef struct PiTransfer802BE820 PiTransfer802BE820;

struct func_802BDDC0_S1;
typedef struct func_802BDDC0_S1 func_802BDDC0_S1;

struct DeviceState;
struct DeviceState {
    struct DeviceState *previous;
    u8 type;
    u8 latency;
    u8 page_size;
    u8 release;
    u8 pulse;
    u8 domain;
    u8 pad_A[2];
    u32 address;
    u32 queue;
};
struct OSPiHandle_s_func_802B93B0_de;
struct OSPiHandle_s_func_802B93B0_de {
    struct OSPiHandle_s_func_802B93B0_de *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
};
struct PiTransfer802BE820;
struct PiTransfer802BE820 {
    u8 pad0[5];
    u8 field5;
    u8 field6;
    u8 field7;
    u8 field8;
    u8 index;
    u8 padA[2];
    u32 address;
};
struct func_802BDDC0_S1;
struct func_802BDDC0_S1 {
    s16 unk0;
    char pad0[0x2 - 0x0 - sizeof(s16)];
    s8 unk2;
    char pad2[0x4 - 0x2 - sizeof(s8)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
};
extern void func_802B9950_de(void);
extern void func_802B99A4_de(void);
extern void func_802B9A10_de(void);
extern void func_802B9C14_de(void);
extern void func_802B9C80_de(void);
extern unsigned int func_802BDEA0_us_rev1(void);
#endif
