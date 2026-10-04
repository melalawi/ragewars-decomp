#ifndef UNBAKE_SPAN_16E000_CODE_80410E9C_H
#define UNBAKE_SPAN_16E000_CODE_80410E9C_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct BufferPool;
typedef struct BufferPool BufferPool;

struct Manager_func_80411D18_de;
typedef struct Manager_func_80411D18_de Manager_func_80411D18_de;

struct ObjectLinks490;
typedef struct ObjectLinks490 ObjectLinks490;

struct ObjectStateA;
typedef struct ObjectStateA ObjectStateA;

struct ObjectStateB;
typedef struct ObjectStateB ObjectStateB;

struct Pool_func_80410E1C_de;
typedef struct Pool_func_80410E1C_de Pool_func_80410E1C_de;

struct Pool_func_80411518_de;
typedef struct Pool_func_80411518_de Pool_func_80411518_de;

struct Slot_func_80411518_de;
typedef struct Slot_func_80411518_de Slot_func_80411518_de;

struct BufferPool;
struct BufferPool {
    s16 count;
    func_80255BEC_S1 *primary;
    func_80255BEC_S1 *secondary;
    u16 *flags;
    s16 *refs;
};
struct Slot_func_80411518_de;
struct Slot_func_80411518_de {
    char pad0[8];
    u16 flags;
    char padA[2];
    char data[0x20];
};
struct Entry_func_80411518_de;
struct Slot_func_80411518_de;
struct Entry_func_80411518_de {
    s32 active;
    char pad4[0x300];
    void *buffers[0x60];
    struct Slot_func_80411518_de **ns;
    char pad488[4];
    func_802B67B0_S2 *def;
    char pad490[0xC];
};
struct Manager_func_80411D18_de;
struct Manager_func_80411D18_de {
    short count;
    char pad2[0x32];
    int mode;
};
struct ObjectLinks490;
struct ObjectLinks490 {
    unsigned char padding_0[1164];
    char *unk_48C;
};
struct ObjectStateA;
struct ObjectStateA {
    unsigned char padding_0[9];
    signed char unk_9;
};
struct ObjectStateB;
struct ObjectStateB {
    unsigned char padding_0[10];
    signed char unk_A;
};
struct Resource_func_80410E1C_de;
struct Resource_func_80410E1C_de {
    void *data;
    s32 flags;
    char pad8[0x14];
};
struct Timer_func_80410E1C_de;
struct Timer_func_80410E1C_de {
    s32 owner;
    s16 delay;
};
struct Pool_func_80410E1C_de;
struct Resource_func_80410E1C_de;
struct Timer_func_80410E1C_de;
struct Pool_func_80410E1C_de {
    s16 count;
    struct Resource_func_80410E1C_de *resources;
    s32 unk8;
    struct Timer_func_80410E1C_de *timers;
};
struct Entry_func_80411518_de;
struct Pool_func_80411518_de;
struct Pool_func_80411518_de {
    s16 count;
    char pad2[6];
    struct Entry_func_80411518_de *entries;
};
struct Record_func_80411A84_de;
struct Record_func_80411A84_de {
    char pad0[0xA];
    s16 a;
    s16 c;
    char padE[28 - 0xE];
};
extern void func_80411518_de(s32 index);
extern void func_80411A3C_de(void);
extern s16 func_80411A44_de(void);
extern s32 func_80411A74_de(void);
extern s16 func_80411A84_de(s32 index);
extern s16 func_80411AA8_de(s32 index);
extern s32 func_80411ACC_de(s32 index);
extern int func_80411AE8_de(void);
extern signed char func_80411BA8_de(int entry, int index);
extern signed char func_80411BE8_de(int entry, int index);
extern short func_80411C28_de(int index);
extern short func_80411C60_de(int index);
extern short func_80411C98_de(int index);
extern short func_80411CD0_de(int index);
extern int func_80411D08_de(void);
extern int func_80411D10_de(void);
extern s16 func_80411D94_de(void);
extern void func_80411DA4_de(void);
extern void func_80411EEC_de(void);
extern void func_80411F28_de(void);
#endif
