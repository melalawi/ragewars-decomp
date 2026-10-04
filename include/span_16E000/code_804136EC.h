#ifndef UNBAKE_SPAN_16E000_CODE_804136EC_H
#define UNBAKE_SPAN_16E000_CODE_804136EC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Format;
typedef struct Format Format;

struct Config;
struct Config {
    unsigned char type;
    unsigned char flags;
    short last;
    short x;
    short y;
    short a;
    short b;
    int d;
    int e;
    int f;
    int g;
};
struct Format;
struct Format {
    s32 word[13];
};
extern s16 func_8041366C_de(s16 *record);
extern s16 func_80413678_de(s16 *record);
extern s16 func_80413684_de(s16 *record);
extern s16 func_80413690_de(s16 *record);
extern s32 func_804136B4_de(s32 *record);
extern s32 func_804136C0_de(s32 *record);
extern int func_804136CC_de(void *object);
extern u8 func_80413704_de(u8 *record);
extern u8 func_80413714_de(u8 *record);
extern void func_8041379C_de(s32 index, struct Format *out);
extern u32 func_804137F8_de(s32 x, s32 y);
extern void func_80413B54_de(s32 x, s32 y, u32 color);
extern void func_80413C94_de(s32 x, s32 y, s32 value);
extern u32 func_80413E08_de(u32 color, s32 format);
extern u32 func_80413EE0_de(u32 value, s32 format);
extern void func_80413FCC_de(void);
extern void func_80413FF8_de(void);
extern void func_80414024_de(void);
extern void func_8041406C_de(void);
extern void func_80414094_de(void);
extern void func_804140BC_de(void);
extern void func_80414138_de(void);
extern void func_80414168_de(void);
extern void func_804141C0_de(void);
extern void func_804141E0_de(void);
#endif
