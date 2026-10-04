#ifndef UNBAKE_SPAN_1000_CODE_80299FC4_H
#define UNBAKE_SPAN_1000_CODE_80299FC4_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Args_func_80298FE8_de;
typedef struct Args_func_80298FE8_de Args_func_80298FE8_de;

struct Element;
typedef struct Element Element;

struct IntegerState530;
typedef struct IntegerState530 IntegerState530;

struct Manager_func_80298FE8_de;
typedef struct Manager_func_80298FE8_de Manager_func_80298FE8_de;

struct Manager_func_80299468_de;
typedef struct Manager_func_80299468_de Manager_func_80299468_de;

struct Manager_func_802995D4_de;
typedef struct Manager_func_802995D4_de Manager_func_802995D4_de;

struct Menu_func_802991D4_de;
typedef struct Menu_func_802991D4_de Menu_func_802991D4_de;

struct func_8029A7E4_S1;
typedef struct func_8029A7E4_S1 func_8029A7E4_S1;

struct func_8029A8E0_S1;
typedef struct func_8029A8E0_S1 func_8029A8E0_S1;

struct func_8029A9F4_S1;
typedef struct func_8029A9F4_S1 func_8029A9F4_S1;

struct func_8029AA48_S1;
typedef struct func_8029AA48_S1 func_8029AA48_S1;

struct func_8029AB74_S1;
typedef struct func_8029AB74_S1 func_8029AB74_S1;

struct Args_func_80298FE8_de;
struct Args_func_80298FE8_de {
    s32 word0;
    s32 word4;
    s32 word8;
    f32 wordC;
    f32 word10;
    u8 byte14;
    u8 pad15[3];
    s32 word18;
    s32 word1C;
    s32 word20;
    s32 word24;
};
struct Element;
struct Element {
    char pad0[0xC];
    s16 id;
    u16 kind;
};
struct Element;
struct Entry_func_802991D4_de;
struct Entry_func_802991D4_de {
    struct Element *primary;
    s32 owner;
    struct Element *focus;
    char padC[0x10];
};
struct IntegerState530;
struct IntegerState530 {
    unsigned char padding_0[1324];
    s32 unk_52C;
};
struct Manager_func_80298FE8_de;
struct Manager_func_80298FE8_de {
    s32 field0;
    s32 index;
    s32 lowIndex;
    Entry_func_80298ECC_de *entries;
    s8 pad10[0x524];
    s32 field534;
    s32 field538;
};
typedef void ( *func_80299468_de_Callback)(signed int, signed int, signed int, signed int);
struct Manager_func_80299468_de;
struct Manager_func_80299468_de {
    func_80299468_de_Callback callback;
    s32 index;
    s32 lowIndex;
    void *entries;
    char pad10[0x520];
    s32 field530;
    char pad534[8];
    void *field53C;
};
typedef signed int ( *func_802995D4_de_Callback)(signed int, signed int, signed int, signed int);
struct Manager_func_802995D4_de;
struct Manager_func_802995D4_de {
    func_802995D4_de_Callback callback;
    s32 index;
    s32 lowIndex;
    Entry_func_80298ECC_de *entries;
    char pad10[0x510];
    s32 dispatching;
    s32 pad524;
    s32 blockedValue;
};
struct Entry_func_802991D4_de;
struct Menu_func_802991D4_de;
struct Menu_func_802991D4_de {
    s32 (*callback)(s32 event, s32, s32, s32);
    s32 current;
    char pad8[4];
    struct Entry_func_802991D4_de *entries;
    char pad10[0x510];
    s32 handled;
    char pad524[4];
    s32 locked;
};
struct func_8029A7E4_S1;
struct func_8029A7E4_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    Rec_func_8024C92C_de unk20;
};
struct func_8029A8E0_S1;
struct func_8029A8E0_S1 {
    char pad0[0xE];
    u16 unkE;
};
struct func_8029A9F4_S1;
struct func_8029A9F4_S1 {
    char pad0[0x528];
    unsigned int unk528;
};
struct func_8029AA48_S1;
struct func_8029AA48_S1 {
    char pad0[0x534];
    int unk534;
    char pad534[0x538 - 0x534 - sizeof(int)];
    int unk538;
};
struct func_8029AB74_S1;
struct func_8029AB74_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
};
extern void func_80298FE8_de(void);
extern void func_80299468_de(void);
extern void func_8029958C_de(s32 arg0);
extern void func_80299778_de(s32 arg0, s32 arg1, s32 arg2);
extern void func_80299874_de(s32 arg0, s32 arg1);
extern s32 func_802998E0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern unsigned int func_802999E0_de(void);
extern void func_80299A5C_de(s32 *arg0, s32 *arg1);
extern void func_80299B60_de(float *arg0, float *arg1);
#endif
