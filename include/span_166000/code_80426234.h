#ifndef UNBAKE_SPAN_166000_CODE_80426234_H
#define UNBAKE_SPAN_166000_CODE_80426234_H
#include "common/types.h"
#include "../types.h"
struct CheatCode;
typedef struct CheatCode CheatCode;

struct Entry_func_8043CC10_de;
typedef struct Entry_func_8043CC10_de Entry_func_8043CC10_de;

struct Entry_func_8043CF44_de;
typedef struct Entry_func_8043CF44_de Entry_func_8043CF44_de;

struct Menu_func_8043CB30_de;
typedef struct Menu_func_8043CB30_de Menu_func_8043CB30_de;

struct Shared_Entry;
typedef struct Shared_Entry Shared_Entry;

struct CheatCode;
struct CheatCode {
    u8 *code;
    s32 unk4;
    s32 flags;
    s32 sound;
};
struct Entry_func_8043CC10_de;
struct Entry_func_8043CC10_de {
    s32 value;
    s32 timer;
    s32 count;
    u8 text[1];
};
struct Entry_func_8043CF44_de;
struct Entry_func_8043CF44_de {
    void *ptr;
    s32 pad[3];
};
struct Menu_func_8043CB30_de;
struct Menu_func_8043CB30_de {
    s16 state;
    char pad2[0x1E];
    s32 input;
};
struct Shared_Entry;
struct Shared_Entry {
    s32 value;
    s32 timer;
    s32 count;
    u8 text[24];
};
typedef signed int ( *Handler80437868)(void *, signed int, signed int, signed int, signed int);
extern s32 func_8042913C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80437688_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_804379B8_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8043C998_de(void);
#endif
