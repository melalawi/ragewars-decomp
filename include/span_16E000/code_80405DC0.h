#ifndef UNBAKE_SPAN_16E000_CODE_80405DC0_H
#define UNBAKE_SPAN_16E000_CODE_80405DC0_H
#include "common/types_8a8189af7b05.h"
#include "../types.h"
/* unbake published declaration: published_037bb42f8d2e711c61deee17 */
extern s32 D_80146CD4_de;

/* unbake published declaration: published_16edd1a0df14596bb8a669d5 */
extern void func_80409964_de(void);

struct Menu_func_80408DF0_de;
/* unbake published declaration: published_17649586718f32173b1a989e */
typedef struct Menu_func_80408DF0_de Menu_func_80408DF0_de;

/* unbake published declaration: published_189c99a08fad5ec17d37cf9c */
extern void func_804097E8_de();

/* unbake published declaration: published_1ba69c48057d670f4611bf6c */
extern s32 D_8014D4D0;

/* unbake published declaration: published_1c6a98ff27b676a32db1310f */
extern void func_804098A4_de(s32 offset, s32 value);

struct Messages;
struct Messages {
    char pad0[0x554];
};
struct Messages;
struct Player_func_80408DF0_de;
/* unbake published declaration: published_1f6b8a3d00d60e92a72d8d63 */
struct Player_func_80408DF0_de {
    char pad0[0x5DC];
    struct Messages *messages;
    char pad5E0[0xC];
    s32 menu;
};

/* unbake published declaration: published_26ba6700333832d790d23e6d */
extern s32 D_8014D4F4;

/* unbake published declaration: published_280ab3364157833fd557adfc */
extern s32 D_8014D4C0_de;

/* unbake published declaration: published_2c7559387909a77eca0a4045 */
extern s32 D_80142CA0_de;

struct Menu_func_80408DF0_de;
struct Player_func_80408DF0_de;
/* unbake published declaration: published_2f8f6aef279e8770100a07fa */
struct Menu_func_80408DF0_de {
    char pad0[0x1C];
    struct Player_func_80408DF0_de *player;
    func_80242278_S1 *slot;
    char *prompt;
};

struct Menu_func_804085E0_de;
/* unbake published declaration: published_5108d43cd54d3dfe5563adb1 */
struct Menu_func_804085E0_de {
    char pad0[0x1C];
    SharedPlayer_func_8022A398_de *player;
    func_80242278_S1 *slot;
};

/* unbake published declaration: published_582bc2b60e287658228d096d */
extern s32 D_800D36D8;

/* unbake published declaration: published_5a37279248ca97fe36c4f0ee */
extern void func_804098CC_de(void ***handle, void **data, s32 units);

/* unbake published declaration: published_7ef83003df28d2e7863fcc50 */
extern s32 D_8014D4EC_de;

struct Menu_func_804085E0_de;
/* unbake published declaration: published_8a2819e4468e21701499fdac */
typedef struct Menu_func_804085E0_de Menu_func_804085E0_de;

/* unbake published declaration: published_839c2e23610924561860fd20 */
extern s32 func_804085E0_de(void *unused, Menu_func_804085E0_de *menu);

/* unbake published declaration: published_8537aa0767fe428d4547b508 */
extern int D_8014D4D4;

struct Player_func_80408DF0_de;
/* unbake published declaration: published_8b96e9be3c2a3268c4029126 */
typedef struct Player_func_80408DF0_de Player_func_80408DF0_de;

/* unbake published declaration: published_8df5573275e99e54d0d7b7e8 */
extern s32 D_80146CDC;

/* unbake published declaration: published_94aed7180b2587e661bb2990 */
extern s32 D_8014D4DC;

/* unbake published declaration: published_98730fa99f0d03c06912c9b5 */
extern int D_8014D4FC;

/* unbake published declaration: published_9f6537b92a0e3437ee1779a8 */
extern char *func_80409884_de(s32 block);

/* unbake published declaration: published_a25e61e35a2d70748857c7ea */
extern s32 D_800DE878;

struct IntegerState610;
/* unbake published declaration: published_a4270a4326ba99f53cc05b78 */
typedef struct IntegerState610 IntegerState610;

/* unbake published declaration: published_b6af42a644addc4d06aa09df */
extern s32 func_804097D4_de(void);

struct IntegerState610;
/* unbake published declaration: published_b76e2f3921d2b8710941d2d7 */
struct IntegerState610 {
    unsigned char padding_0[1548];
    s32 unk_60C;
};

/* unbake published declaration: published_ba0af9ff1f48b1d2a80d7c72 */
extern s32 func_804098B8_de(s32 *block);

/* unbake published declaration: published_bf0af58fcf6fe7491b9b6afb */
extern s32 D_800DE874;

/* unbake published declaration: published_cb0c31660520e2e43f659d2e */
extern void func_80409744_de(void);

struct func_80408E1C_S1;
/* unbake published declaration: published_d5fa64dc5d667542387974b5 */
struct func_80408E1C_S1 {
    char pad0[0x554];
    char unk554;
};

/* unbake published declaration: published_e98c824605e3de0102852329 */
extern s32 D_800D36D4;

/* unbake published declaration: published_f344b6f776b2658c2cbc239b */
extern s32 D_80142CAC;

/* unbake published declaration: published_fc1b135d9af026281119aa09 */
extern s32 func_80408DF0_de(void *owner, Menu_func_80408DF0_de *menu);

struct func_80408E1C_S1;
/* unbake published declaration: published_fd161fee9f81073210ee80ab */
typedef struct func_80408E1C_S1 func_80408E1C_S1;

struct Owner_func_804099EC_de;
/* unbake published declaration: published_ff4eff6336184198f4577f63 */
extern void func_804099EC_de(struct Owner_func_804099EC_de *owner);

#endif
