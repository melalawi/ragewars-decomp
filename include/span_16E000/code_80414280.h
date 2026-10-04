#ifndef UNBAKE_SPAN_16E000_CODE_80414280_H
#define UNBAKE_SPAN_16E000_CODE_80414280_H
#include "common/types.h"
#include "gfx.h"
#include "../types.h"
struct Texture;
typedef struct Texture Texture;

struct Texture;
struct Texture {
    char pad0[4];
    s16 width;
    s16 height;
};
extern void func_80414200_de(void);
extern void func_80414220_de(void);
extern void func_80414244_de(void);
extern void func_80414360_de(void);
extern void func_80414384_de(void);
extern void func_80417138_de(s32 flags);
extern void func_80418F8C_de(void);
extern void func_804190C4_de(s32 mode);
extern void func_804191A4_de(void);
extern void func_804191E8_de(void);
extern void func_80419278_de(s32 left, s32 top, s32 right, s32 bottom, f32 u0, f32 v0, f32 u1, f32 v1);
#endif
