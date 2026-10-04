#ifndef UNBAKE_SPAN_1000_CODE_8029193C_H
#define UNBAKE_SPAN_1000_CODE_8029193C_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Display;
typedef struct Display Display;

struct Frame_func_80293054_de;
typedef struct Frame_func_80293054_de Frame_func_80293054_de;

struct Session_func_80293A20_de;
typedef struct Session_func_80293A20_de Session_func_80293A20_de;

struct func_80292FA4_S1;
typedef struct func_80292FA4_S1 func_80292FA4_S1;

struct func_80293318_S1;
typedef struct func_80293318_S1 func_80293318_S1;

struct func_80293378_S1;
typedef struct func_80293378_S1 func_80293378_S1;

struct func_80293574_S1;
typedef struct func_80293574_S1 func_80293574_S1;

struct func_80293774_S1;
typedef struct func_80293774_S1 func_80293774_S1;

struct func_80293808_S1;
typedef struct func_80293808_S1 func_80293808_S1;

struct func_8029382C_S1;
typedef struct func_8029382C_S1 func_8029382C_S1;

struct func_8029397C_S1;
typedef struct func_8029397C_S1 func_8029397C_S1;

struct func_80293B0C_S1;
typedef struct func_80293B0C_S1 func_80293B0C_S1;

struct Frame_func_80293054_de;
struct Frame_func_80293054_de {
    char pad[0x114];
    int color;
    int depth;
    char tail[0x24];
};
struct Display;
struct Display {
    Frame_func_80293054_de frames[3];
    void *current;
};
struct Session_func_80293A20_de;
struct Session_func_80293A20_de {
    char pad0[0x26DB4];
    s32 previousMode;
    s32 mode;
    s32 target;
    char pad26DC0;
    char phase;
    char pad26DC2[2];
    f32 timer;
};
struct func_80292FA4_S1;
struct func_80292FA4_S1 {
    char pad0[0x26DC8];
    s32 unk26DC8;
};
struct func_80293318_S1;
struct func_80293318_S1 {
    char pad0[0x25580];
    char unk25580;
};
struct func_80293378_S1;
struct func_80293378_S1 {
    char pad0[0x26DC4];
    f32 unk26DC4;
};
struct func_80293574_S1;
struct func_80293574_S1 {
    char pad0[0x26DC0];
    unsigned char unk26DC0;
    char pad26DC0[0x26DC1 - 0x26DC0 - sizeof(unsigned char)];
    unsigned char unk26DC1;
    char pad26DC1[0x26DC4 - 0x26DC1 - sizeof(unsigned char)];
    int unk26DC4;
};
struct func_80293774_S1;
struct func_80293774_S1 {
    char pad0[0x26DB4];
    s32 unk26DB4;
    char pad26DB4[0x26DB8 - 0x26DB4 - sizeof(s32)];
    s32 unk26DB8;
    char pad26DB8[0x26DBC - 0x26DB8 - sizeof(s32)];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DC4 - 0x26DC1 - sizeof(s8)];
    func_8022E280_S1_U744 unk26DC4;
};
struct func_80293808_S1;
struct func_80293808_S1 {
    char pad0[0x26DBC];
    int unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(int)];
    char unk26DC1;
};
struct func_8029382C_S1;
struct func_8029382C_S1 {
    char pad0[0x26DB8];
    s32 unk26DB8;
};
struct func_8029397C_S1;
struct func_8029397C_S1 {
    char pad0[0x25580];
    char unk25580;
    char pad25580[0x255C8 - 0x25580 - sizeof(char)];
    char unk255C8;
};
struct func_80293B0C_S1;
struct func_80293B0C_S1 {
    char pad0[0x26DB0];
    func_80203908_S3_U124 unk26DB0;
};
extern void func_80292F24_de(void);
extern void func_80293534_de(void);
extern void func_80293DF0_de(void *arg0);
#endif
