#ifndef UNBAKE_SPAN_1000_CODE_802AE2C8_H
#define UNBAKE_SPAN_1000_CODE_802AE2C8_H
#include "span_1000/types.h"
#include "../types.h"
struct CommandState;
typedef struct CommandState CommandState;

struct ReadHalfword;
typedef struct ReadHalfword ReadHalfword;

struct ReadWord_func_802AEF84_us_rev1;
typedef struct ReadWord_func_802AEF84_us_rev1 ReadWord_func_802AEF84_us_rev1;

struct WriteWord;
typedef struct WriteWord WriteWord;

struct ReadWord_func_802AEF84_us_rev1;
struct ReadWord_func_802AEF84_us_rev1 {
    u32 word;
    u8 byte;
};
struct WriteWord;
struct WriteWord {
    u32 word;
    u8 byte;
    u8 value;
};
struct CommandState;
struct CommandState {
    u8 command;
    u8 pad01[3];
    ReadWord_func_802AEF84_us_rev1 address;
    ReadWord_func_802AEF84_us_rev1 callback;
    WriteWord output;
};
struct ReadHalfword;
struct ReadHalfword {
    s32 word;
    u8 byte;
    u16 value;
    u8 next_byte;
};
extern s32 func_802AF544_us_rev1(void);
extern s32 func_802AF6A0_us_rev1(void);
extern void func_802AF990_us_rev1(void);
extern u32 func_802AFCE4_us_rev1(u8 *arg0, u8 *arg1);
#endif
