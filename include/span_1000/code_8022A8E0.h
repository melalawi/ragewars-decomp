#ifndef UNBAKE_SPAN_1000_CODE_8022A8E0_H
#define UNBAKE_SPAN_1000_CODE_8022A8E0_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_8022AB20_de;
typedef struct Actor_func_8022AB20_de Actor_func_8022AB20_de;

struct Entry190;
typedef struct Entry190 Entry190;

struct IntegerState11C0;
typedef struct IntegerState11C0 IntegerState11C0;

struct IntegerState16D4;
typedef struct IntegerState16D4 IntegerState16D4;

struct ObjectLinks1454_3;
typedef struct ObjectLinks1454_3 ObjectLinks1454_3;

struct ObjectState16DA;
typedef struct ObjectState16DA ObjectState16DA;

struct Player_func_8022ACB8_de;
typedef struct Player_func_8022ACB8_de Player_func_8022ACB8_de;

struct Shared_func_8022AA34_View;
typedef struct Shared_func_8022AA34_View Shared_func_8022AA34_View;

struct func_8022A8E0_S2;
typedef struct func_8022A8E0_S2 func_8022A8E0_S2;

struct func_8022A918_S1;
typedef struct func_8022A918_S1 func_8022A918_S1;

struct func_8022A94C_S1;
typedef struct func_8022A94C_S1 func_8022A94C_S1;

struct func_8022A94C_S2;
typedef struct func_8022A94C_S2 func_8022A94C_S2;

struct func_8022AA8C_S1;
typedef struct func_8022AA8C_S1 func_8022AA8C_S1;

struct func_8022AA8C_S2;
typedef struct func_8022AA8C_S2 func_8022AA8C_S2;

struct func_8022AAC4_S2;
typedef struct func_8022AAC4_S2 func_8022AAC4_S2;

struct func_8022AB10_S1;
typedef struct func_8022AB10_S1 func_8022AB10_S1;

struct func_8022AB8C_S1;
typedef struct func_8022AB8C_S1 func_8022AB8C_S1;

struct func_8022ADA0_S1;
typedef struct func_8022ADA0_S1 func_8022ADA0_S1;

struct func_8022AE18_S1;
typedef struct func_8022AE18_S1 func_8022AE18_S1;

struct func_8022AE90_S1;
typedef struct func_8022AE90_S1 func_8022AE90_S1;

struct func_8022AF64_S1;
typedef struct func_8022AF64_S1 func_8022AF64_S1;

struct func_8022B054_S1;
typedef struct func_8022B054_S1 func_8022B054_S1;

struct func_8022B08C_S1;
typedef struct func_8022B08C_S1 func_8022B08C_S1;

struct func_8022B08C_S2;
typedef struct func_8022B08C_S2 func_8022B08C_S2;

struct func_8022B174_S1;
typedef struct func_8022B174_S1 func_8022B174_S1;

struct func_8022B2F4_S2;
typedef struct func_8022B2F4_S2 func_8022B2F4_S2;

struct func_8022B3C0_S1;
typedef struct func_8022B3C0_S1 func_8022B3C0_S1;

struct func_8022B450_S1;
typedef struct func_8022B450_S1 func_8022B450_S1;

struct func_8022B474_S1;
typedef struct func_8022B474_S1 func_8022B474_S1;

struct Actor_func_8022AB20_de;
struct Actor_func_8022AB20_de {
    char pad[0x5F4];
    s16 table[1];
};
struct Entry190;
struct Entry190 {
    s32 value;
    u8 pad[0x18C];
};
struct IntegerState11C0;
struct IntegerState11C0 {
    unsigned char padding_0[4540];
    s32 unk_11BC;
};
struct IntegerState16D4;
struct IntegerState16D4 {
    unsigned char padding_0[5840];
    s32 unk_16D0;
};
struct Loadout;
struct Loadout {
    char pad0[0x108];
    int capacity[1];
};
struct ObjectLinks1454_3;
struct ObjectLinks1454_3 {
    char pad0[0x18];
    void * unk_18;
    char pad18[0x5D4 - 0x18 - sizeof(void*)];
    s32 unk_5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char * unk_5D8;
    char pad5D8[0x1450 - 0x5D8 - sizeof(char*)];
    s32 unk_1450;
};
struct ObjectState16DA;
struct ObjectState16DA {
    unsigned char padding_0[5848];
    u16 unk_16D8;
};
struct Loadout;
struct Player_func_8022ACB8_de;
struct Player_func_8022ACB8_de {
    char pad0[0x18];
    struct Loadout *loadout;
    char pad1C[0x5D4 - 0x1C];
    int character;
    char pad5D8[0x1450 - 0x5D8];
    int isBot;
};
struct Shared_func_8022AA34_View;
struct Shared_func_8022AA34_View {
    char pad0[0x840];
    f32 value;
    char pad844[4];
    s32 override;
};
struct func_8022A8E0_S2;
struct func_8022A8E0_S2 {
    char pad0[0x5FE];
    s16 unk5FE;
    char pad5FE[0x1450 - 0x5FE - sizeof(s16)];
    s32 unk1450;
    char pad1450[0x16E0 - 0x1450 - sizeof(s32)];
    char * unk16E0;
};
struct func_8022A918_S1;
struct func_8022A918_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xB4 - 0x4 - sizeof(int)];
    int unkB4;
};
struct Shape_typemap_165;
struct func_8022A94C_S1;
struct func_8022A94C_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    s32 unk14;
    char pad14[0x5C - 0x14 - sizeof(s32)];
    struct Shape_typemap_165 unk5C;
    char pad5C[0x6C - 0x5C - sizeof(struct Shape_typemap_165)];
    f32 unk6C;
    char pad6C[0x10E - 0x6C - sizeof(f32)];
    u8 unk10E;
    char pad10E[0x2E8 - 0x10E - sizeof(u8)];
    Block unk2E8;
    char pad2E8[0x86C - 0x2E8 - sizeof(Block)];
    s32 unk86C;
    char pad86C[0x11D8 - 0x86C - sizeof(s32)];
    f32 unk11D8;
};
struct Shape_typemap_165;
struct func_8022A94C_S2;
struct func_8022A94C_S2 {
    char pad0[0x2F0];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    s32 unk2FC;
    char pad2FC[0x344 - 0x2FC - sizeof(s32)];
    struct Shape_typemap_165 unk344;
    char pad344[0x354 - 0x344 - sizeof(struct Shape_typemap_165)];
    f32 unk354;
};
struct func_8022AA8C_S1;
struct func_8022AA8C_S1 {
    char pad0[0x594];
    s32 unk594;
};
struct func_8022AA8C_S2;
struct func_8022AA8C_S2 {
    char pad0[0x20];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
};
struct func_8022AAC4_S2;
struct func_8022AAC4_S2 {
    char pad0[0x20];
    s16 * unk20;
    char pad20[0x24 - 0x20 - sizeof(s16*)];
    s16 * unk24;
};
struct func_8022AB10_S1;
struct func_8022AB10_S1 {
    char pad0[0x594];
    s32 unk594;
    char pad594[0x604 - 0x594 - sizeof(s32)];
    s8 unk604;
};
struct func_8022AB8C_S1;
struct func_8022AB8C_S1 {
    char pad0[0x594];
    s32 unk594;
    char pad594[0x62E - 0x594 - sizeof(s32)];
    s16 unk62E;
};
struct func_8022ADA0_S1;
struct func_8022ADA0_S1 {
    char pad0[0x5E4];
    int unk5E4;
};
struct func_8022AE18_S1;
struct func_8022AE18_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    int unk14;
    char pad14[0x2F0 - 0x14 - sizeof(int)];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    int unk2FC;
};
struct func_8022AE90_S1;
struct func_8022AE90_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5DC - 0x8 - sizeof(char)];
    s32 unk5DC;
    char pad5DC[0x11BC - 0x5DC - sizeof(s32)];
    s32 unk11BC;
};
struct func_8022AF64_S1;
struct func_8022AF64_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5DC - 0x8 - sizeof(char)];
    s32 unk5DC;
    char pad5DC[0x11C0 - 0x5DC - sizeof(s32)];
    s32 unk11C0;
};
struct func_8022B054_S1;
struct func_8022B054_S1 {
    char pad0[0x16C4];
    Triple unk16C4;
};
struct func_8022B08C_S1;
struct func_8022B08C_S1 {
    char pad0[0x5DC];
    Matrix_func_80213CF8_de * unk5DC;
};
struct func_8022B08C_S2;
struct func_8022B08C_S2 {
    char pad0[0x160];
    Matrix_func_80213CF8_de unk160;
};
struct func_8022B174_S1;
struct func_8022B174_S1 {
    char pad0[0x1210];
    int unk1210;
};
struct func_8022B2F4_S2;
struct func_8022B2F4_S2 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x16E0 - 0x11FC - sizeof(f32)];
    void * unk16E0;
};
struct func_8022B3C0_S1;
struct func_8022B3C0_S1 {
    char pad0[0x1200];
    Vec3 unk1200;
};
struct func_8022B450_S1;
struct func_8022B450_S1 {
    char pad0[0x11FC];
    float unk11FC;
};
struct func_8022B474_S1;
struct func_8022B474_S1 {
    char pad0[0x120C];
    s32 unk120C;
};
extern void func_8022A928_de(void *arg0, int arg1);
extern void func_8022A940_de(void *arg0);
extern void func_8022A95C_de(void *arg0);
extern f32 func_8022AA44_de(Shared_func_8022AA34_View *arg0);
extern int func_8022AE28_de(void *arg0, void *arg1);
extern int func_8022B460_de(char *object);
extern void func_8022B484_de(char *arg0);
#endif
