#ifndef UNBAKE_SPAN_1000_CODE_802AE2C8_H
#define UNBAKE_SPAN_1000_CODE_802AE2C8_H
#include "../types.h"
struct CommandState;
struct CommandState;
typedef struct CommandState CommandState;

/* unbake evidence input: c3RydWN0IENvbW1hbmRTdGF0ZTsKdHlwZWRlZiBzdHJ1Y3QgQ29tbWFuZFN0YXRlIENvbW1hbmRTdGF0ZTsK */

struct ReadHalfword;
struct ReadHalfword;
typedef struct ReadHalfword ReadHalfword;

/* unbake evidence input: c3RydWN0IFJlYWRIYWxmd29yZDsKdHlwZWRlZiBzdHJ1Y3QgUmVhZEhhbGZ3b3JkIFJlYWRIYWxmd29yZDsK */

struct ReadWord_func_802AEF84_us_rev1;
struct ReadWord_func_802AEF84_us_rev1;
typedef struct ReadWord_func_802AEF84_us_rev1 ReadWord_func_802AEF84_us_rev1;

/* unbake evidence input: c3RydWN0IFJlYWRXb3JkX2Z1bmNfODAyQUVGODRfdXNfcmV2MTsKdHlwZWRlZiBzdHJ1Y3QgUmVhZFdvcmRfZnVuY184MDJBRUY4NF91c19yZXYxIFJlYWRXb3JkX2Z1bmNfODAyQUVGODRfdXNfcmV2MTsK */

struct WriteWord;
struct WriteWord;
typedef struct WriteWord WriteWord;

/* unbake evidence input: c3RydWN0IFdyaXRlV29yZDsKdHlwZWRlZiBzdHJ1Y3QgV3JpdGVXb3JkIFdyaXRlV29yZDsK */

struct ReadWord_func_802AEF84_us_rev1;
struct ReadWord_func_802AEF84_us_rev1;
struct ReadWord_func_802AEF84_us_rev1 {
    u32 word;
    u8 byte;
};

/* unbake evidence input: c3RydWN0IFJlYWRXb3JkX2Z1bmNfODAyQUVGODRfdXNfcmV2MTsKc3RydWN0IFJlYWRXb3JkX2Z1bmNfODAyQUVGODRfdXNfcmV2MSB7CiAgICB1MzIgd29yZDsKICAgIHU4IGJ5dGU7Cn07Cg== */

struct WriteWord;
struct WriteWord;
struct WriteWord {
    u32 word;
    u8 byte;
    u8 value;
};

/* unbake evidence input: c3RydWN0IFdyaXRlV29yZDsKc3RydWN0IFdyaXRlV29yZCB7CiAgICB1MzIgd29yZDsKICAgIHU4IGJ5dGU7CiAgICB1OCB2YWx1ZTsKfTsK */

struct CommandState;
struct CommandState;
struct CommandState {
    u8 command;
    u8 pad01[3];
    ReadWord_func_802AEF84_us_rev1 address;
    ReadWord_func_802AEF84_us_rev1 callback;
    WriteWord output;
};

/* unbake evidence input: c3RydWN0IENvbW1hbmRTdGF0ZTsKc3RydWN0IENvbW1hbmRTdGF0ZSB7CiAgICB1OCBjb21tYW5kOwogICAgdTggcGFkMDFbM107CiAgICBSZWFkV29yZF9mdW5jXzgwMkFFRjg0X3VzX3JldjEgYWRkcmVzczsKICAgIFJlYWRXb3JkX2Z1bmNfODAyQUVGODRfdXNfcmV2MSBjYWxsYmFjazsKICAgIFdyaXRlV29yZCBvdXRwdXQ7Cn07Cg== */

struct ReadHalfword;
struct ReadHalfword;
struct ReadHalfword {
    s32 word;
    u8 byte;
    u16 value;
    u8 next_byte;
};

/* unbake evidence input: c3RydWN0IFJlYWRIYWxmd29yZDsKc3RydWN0IFJlYWRIYWxmd29yZCB7CiAgICBzMzIgd29yZDsKICAgIHU4IGJ5dGU7CiAgICB1MTYgdmFsdWU7CiAgICB1OCBuZXh0X2J5dGU7Cn07Cg== */

extern s32 func_802AF544_us_rev1(void);
extern s32 func_802AF6A0_us_rev1(void);
extern void func_802AF990_us_rev1(void);
extern u32 func_802AFCE4_us_rev1(u8 *arg0, u8 *arg1);
#endif
