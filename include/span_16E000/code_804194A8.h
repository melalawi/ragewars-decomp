#ifndef UNBAKE_SPAN_16E000_CODE_804194A8_H
#define UNBAKE_SPAN_16E000_CODE_804194A8_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Animation;
typedef struct Animation Animation;

struct Image_func_80419490_de;
typedef struct Image_func_80419490_de Image_func_80419490_de;

struct Object_func_80419E54_de;
typedef struct Object_func_80419E54_de Object_func_80419E54_de;

struct func_80419D04_S1;
typedef struct func_80419D04_S1 func_80419D04_S1;

struct Animation;
struct Animation {
    char pad0[0xC];
    s16 kindA;
    s16 kindB;
    char pad10[2];
    s16 flags;
    char pad14[0x30];
    s32 widget;
    s32 *frames;
    char pad4C[4];
    s32 count;
    s32 unk54;
    char pad58[4];
    s32 unk5C;
    char pad60[4];
};
struct Command;
struct Command {
    unsigned words[2];
};
struct FrameSequence_func_804199DC_de;
struct FrameSequence_func_804199DC_de {
    char pad0[0x44];
    void *target;
    s32 *frames;
    s32 frame;
    s32 count;
    s32 elapsed;
    s32 duration;
    s32 unk5C;
    s32 loops;
};
struct Image_func_80419490_de;
struct Image_func_80419490_de {
    char pad0[8];
    s16 width;
    s16 height;
    char padC[0xC];
    s32 *pixels;
};
struct Object_func_80419E54_de;
struct Resource_func_80419E54_de;
struct Object_func_80419E54_de {
    char pad0[0xC];
    short a;
    short b;
    short pad1;
    short c;
    char pad2[0x64];
    struct Resource_func_80419E54_de *resource;
    int pad3;
    union
  {
    int value;
    unsigned char bytes[4];
  } owner;
    int pad4;
};
struct Object_func_80419F38_de;
struct Object_func_80419F38_de {
    char pad0[0x44];
    s32 busy;
    char pad48[0x84 - 0x48];
    s32 pending;
};
struct Object_func_80419F58_de;
struct Resource_func_80419E54_de;
struct Object_func_80419F58_de {
    char pad0[0x44];
    s32 busy;
    char pad48[0x4C - 0x48];
    s32 entries[(0x74 - 0x4C) / 4];
    s32 index;
    struct Resource_func_80419E54_de *target;
};
struct Resource_func_80419E54_de;
struct Source_func_80419F24_de;
struct Source_func_80419F24_de {
    char pad[0x78];
    struct Resource_func_80419E54_de *target;
    char pad7C[0x83 - 0x7C];
    u8 value;
    s32 pending;
};
struct func_80419D04_S1;
struct func_80419D04_S1 {
    char pad0[0x4];
    u8 unk4;
    char pad4[0x3F];
    s32 unk44;
    s32 unk48;
    s32 unk4C[5];
    s32 unk60[5];
    s32 unk74;
    char pad78[0x8];
    s32 unk80;
};
extern void func_80419608_de(void);
extern void func_80419868_eu_x(void);
extern void func_8041989C_de(void);
extern s32 func_804199EC_de(struct FrameSequence_func_804199DC_de *sequence);
extern s32 func_804199F8_de(struct FrameSequence_func_804199DC_de *sequence);
extern s32 func_80419A0C_de(struct FrameSequence_func_804199DC_de *sequence);
extern s32 func_80419A4C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80419ADC_de(s32 arg0, struct Triple arg1);
extern void func_80419B18_eu_x(void);
extern void func_80419E24_de(void);
extern void func_80419F24_de(struct Source_func_80419F24_de *source);
extern s32 func_80419F38_de(struct Object_func_80419F38_de *object);
extern s32 func_80419F9C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
