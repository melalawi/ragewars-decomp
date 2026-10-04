#ifndef UNBAKE_SPAN_16E000_CODE_80408E1C_H
#define UNBAKE_SPAN_16E000_CODE_80408E1C_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct IntegerState610;
typedef struct IntegerState610 IntegerState610;

struct Menu_func_80408DF0_de;
typedef struct Menu_func_80408DF0_de Menu_func_80408DF0_de;

struct Player_func_80408DF0_de;
typedef struct Player_func_80408DF0_de Player_func_80408DF0_de;

struct func_80408E1C_S1;
typedef struct func_80408E1C_S1 func_80408E1C_S1;

struct IntegerState610;
struct IntegerState610 {
    unsigned char padding_0[1548];
    s32 unk_60C;
};
struct Messages;
struct Messages {
    char pad0[0x554];
};
struct Messages;
struct Player_func_80408DF0_de;
struct Player_func_80408DF0_de {
    char pad0[0x5DC];
    struct Messages *messages;
    char pad5E0[0xC];
    s32 menu;
};
struct Menu_func_80408DF0_de;
struct Player_func_80408DF0_de;
struct Menu_func_80408DF0_de {
    char pad0[0x1C];
    struct Player_func_80408DF0_de *player;
    func_80242278_S1 *slot;
    char *prompt;
};
struct Owner_func_804099EC_de;
struct Profile_func_80408C4C_de;
struct Owner_func_804099EC_de {
    char pad[0x5D8];
    struct Profile_func_80408C4C_de *settings;
};
struct Record_func_80409EF4_de;
struct func_80242278_S1;
struct Record_func_80409EF4_de {
    char pad[0x1C];
    s32 result;
    struct func_80242278_S1 *inner;
};
struct Saved;
struct Saved {
    u16 values[4];
    u8 flag;
    u8 pad[3];
    u8 bytes[8];
};
struct func_80408E1C_S1;
struct func_80408E1C_S1 {
    char pad0[0x554];
    char unk554;
};
extern s32 func_80408DF0_de(void *owner, Menu_func_80408DF0_de *menu);
extern void func_80409744_de(void);
extern s32 func_804097D4_de(void);
extern char *func_80409884_de(s32 block);
extern void func_804098A4_de(s32 offset, s32 value);
extern s32 func_804098B8_de(s32 *block);
extern void func_804098CC_de(void ***handle, void **data, s32 units);
extern void func_80409964_de(void);
extern void func_804099EC_de(struct Owner_func_804099EC_de *owner);
extern void func_80409A5C_de(struct Owner_func_804099EC_de *owner);
extern s32 func_80409EF4_de(struct Record_func_80409EF4_de *record, s32 *out);
extern void func_80409F2C_de(struct Record_func_80409BDC_de *record);
extern char *func_8040A038_de(int unused, int kind);
extern char *func_8040A09C_de(struct Record_func_80409BDC_de *menu);
extern s32 func_8040A1B0_de(s32 arg0);
extern void func_8040A47C_de(void);
#endif
