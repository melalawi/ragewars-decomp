#ifndef UNBAKE_SPAN_1000_CODE_80278C80_H
#define UNBAKE_SPAN_1000_CODE_80278C80_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct FloatState64;
typedef struct FloatState64 FloatState64;

struct ListHeader;
typedef struct ListHeader ListHeader;

struct ObjectState104;
typedef struct ObjectState104 ObjectState104;

struct Record14;
typedef struct Record14 Record14;

struct Trigger;
typedef struct Trigger Trigger;

struct func_80278EEC_S1;
typedef struct func_80278EEC_S1 func_80278EEC_S1;

struct func_802791A8_S1;
typedef struct func_802791A8_S1 func_802791A8_S1;

struct func_80279490_S1;
typedef struct func_80279490_S1 func_80279490_S1;

struct FloatState64;
struct FloatState64 {
    unsigned char padding_0[72];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    unsigned char padding_54[12];
    f32 unk_60;
};
struct ListHeader;
struct ListHeader {
    void *head;
    void *tail;
    s32 count;
};
struct ObjectState104;
struct ObjectState104 {
    unsigned char padding_0[8];
    f32 unk_8;
    f32 unk_C;
    f32 unk_10;
    unsigned char padding_14[88];
    f32 unk_6C;
    unsigned char padding_70[144];
    s32 unk_100;
};
struct Record14;
struct Record14 {
    u32 words[5];
};
struct Trigger;
struct Trigger {
    s32 mask;
    s32 unk4;
    s32 unk8;
    union {
        s32 word;
        struct {
            u16 unkC;
            u8 state;
            u8 id;
        } bytes;
    } flags;
    s32 unk10;
};
struct func_80278EEC_S1;
struct func_80278EEC_S1 {
    char pad0[0xE];
    char unkE;
};
struct func_802791A8_S1;
struct func_802791A8_S1 {
    char pad0[0x6];
    short unk6;
};
struct func_80279490_S1;
struct func_80279490_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0xA - 0x4 - sizeof(u16)];
    u16 unkA;
    char padA[0x11 - 0xA - sizeof(u16)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
};
extern void func_80278F68_de(struct func_80203C40_S1 *object);
extern void func_80279048_de(void *arg0, void *arg1);
extern void func_8027907C_de(s32 arg0, s32 arg1, void *arg2);
extern void func_80279138_de(int arg0, int arg1, void *arg2);
extern void func_80279158_de(void *arg0);
extern void func_80279178_de(void *arg0);
extern void func_80279198_de(int arg0, int arg1, void *arg2);
extern void func_802791B8_de(void *arg0);
extern void func_802791D8_de(void *arg0);
extern void func_802791F0_de(void *object);
extern void func_802794A4_de(void * arg0);
extern void func_802794B0_de(ListHeader *list);
extern void func_802795B0_de(ListHeader *lists, void *pool, s32 stride, s32 count);
#endif
