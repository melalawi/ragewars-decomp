#include "basetypes.h"
typedef struct { char pad[7]; u8 field; } Access_u8_7;

typedef struct { s32 field; } Access_s32_0;
typedef struct { char pad[0x3]; u8 field; } Access_u8_3;
typedef struct { char pad[0x4]; u16 field; } Access_u16_4;
typedef struct { char pad[0xC4]; s32 field; } Access_s32_C4;
typedef struct { char pad[0xC8]; s32 field; } Access_s32_C8;
typedef struct { char pad[0xCC]; s32 field; } Access_s32_CC;
typedef struct { char pad[0xD0]; s32 field; } Access_s32_D0;
typedef struct { char pad[0xD4]; s32 field; } Access_s32_D4;
typedef struct { char pad[0xD8]; s32 field; } Access_s32_D8;
typedef struct { char pad[0xDC]; s32 field; } Access_s32_DC;
typedef struct { char pad[0xE0]; s32 field; } Access_s32_E0;
typedef struct { char pad[0xE6]; u8 field; } Access_u8_E6;
typedef struct { char pad[0xE7]; u8 field; } Access_u8_E7;
typedef struct { char pad[0x100]; s32 field; } Access_s32_100;
typedef struct { char pad[0x108]; s16 field; } Access_s16_108;
typedef struct { char pad[0x10A]; s16 field; } Access_s16_10A;
typedef struct { char pad[0x10E]; s8 field; } Access_s8_10E;
typedef struct { char pad[0x10F]; s8 field; } Access_s8_10F;
typedef struct { char pad[0x1A5]; s8 field; } Access_s8_1A5;
typedef struct { char pad[0x23A]; s8 field; } Access_s8_23A;
typedef struct { char pad[0x28C]; void * field; } Access_void_28C;

extern s32 func_8028FE08(s32 *arg0, s32 arg1, s32 arg2);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern void func_802536F4(s32, void *);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void *func_8028FD94(void *, s32);
extern void func_8026EE90(void *, s32, void *);
extern void func_802624A0(void *);
extern s32 func_802469F8(void *, s32, s32);
extern char D_800C898C;
extern char D_800C89A0;
extern char D_800C89B4;

typedef struct func_80246BD8_S1 func_80246BD8_S1;
struct func_80246BD8_S1 {
    char pad0[0x74];
    char unk74;
    char pad74[0xD0 - 0x74 - sizeof(char)];
    s32 unkD0;
};


void func_80246BD8(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp28;
    void **resource1;
    void **resource2;
    s32 *entry;
    void *temp;
    void *node;
    s32 key;
    s32 found;

    ((Access_s32_D8 *)(arg0))->field = -1;
    ((Access_s32_DC *)(arg0))->field = 0;
    ((Access_s32_E0 *)(arg0))->field = 0;
    ((Access_s32_100 *)(arg0))->field &= 0xFFFBFFFF;
    key = func_8028FE08(arg1, arg2, ((Access_u16_4 *)(arg0))->field);
    resource1 = func_802518DC(0, key, key, 0x18, 0, 0, 0, &D_800C898C, 1);
    if (resource1 != 0) {
        entry = *resource1;
        ((Access_s32_CC *)(arg0))->field = func_8028FE08(entry, key, 1);
        found = func_80254094(0, &sp28, ((Access_s32_CC *)(arg0))->field, &D_800C89A0, 1);
        if (found != 0) {
            ((Access_u8_E7 *)(arg0))->field = ((Access_u8_3 *)(sp28))->field;
            ((Access_s32_D4 *)(arg0))->field = ((((Access_s32_0 *)(sp28))->field * 4) + 0xF) & ~7;
            func_802536F4(0, (void *)found);
        }
        ((Access_s32_C4 *)(arg0))->field = func_8028FE1C((s32)entry, key, 0, &((func_80246BD8_S1 *)(arg0))->unkD0);
        ((Access_s32_C8 *)(arg0))->field = func_8028FE08(entry, key, 2);
        resource2 = func_802518DC(0, ((Access_s32_C4 *)(arg0))->field,
                                 ((Access_s32_C4 *)(arg0))->field, ((Access_s32_D0 *)(arg0))->field,
                                 0, 0, 0, &D_800C89B4, 1);
        if (resource2 != 0) {
            node = *resource2;
            temp = func_8028FD94(node, 0);
            ((void (*)(void *, void *))((Access_void_28C *)(arg0))->field)(arg0, (char *)arg0 + 0x170);
            func_8026EE90(&((func_80246BD8_S1 *)(arg0))->unk74, (s32)temp, (char *)arg0 + 0xE8);
            func_802624A0((char *)arg0 + 0x104);
            func_802624A0((char *)arg0 + 0x118);
            ((Access_u8_E6 *)(arg0))->field = ((Access_u8_7 *)func_8028FD94(node, 1))->field;
            ((Access_s32_100 *)(arg0))->field |= 0x40000;
            if (arg3 > 0) {
                arg3 = func_802469F8(arg0, arg3, -1);
            } else {
                arg3 = -arg3;
            }
            if (arg3 == -1) {
                arg3 = 0;
            }
            ((Access_s16_10A *)(arg0))->field = arg3;
            ((Access_s8_10E *)(arg0))->field = 0;
            if (((Access_s16_108 *)(arg0))->field != arg3) {
                ((Access_s8_10F *)(arg0))->field = 1;
            }
            ((Access_s8_1A5 *)(arg0))->field = -1;
            ((Access_s8_23A *)(arg0))->field = arg3;
            func_802536F4(0, resource2);
        }
        func_802536F4(0, resource1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF214_4C[] = {0x00, 0x42, 0x2E, 0x54, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x16, 0x00, 0x42, 0x2C, 0x20, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x42, 0x27, 0x28, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x16, 0x00, 0x42, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x42, 0x3B, 0x68, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x16, 0x00, 0x42, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E41C0_4[] = {0x00, 0x00, 0x00, 0x12};
const unsigned char unbake_rodata_800E41C4_4[] = {0x00, 0x00, 0x00, 0x0F};
const unsigned char unbake_rodata_800E41C8_4[] = {0x00, 0x00, 0x00, 0x34};
const unsigned char unbake_rodata_800E41CC_34[] = {0x00, 0x00, 0x00, 0x5E, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x01, 0x0B, 0x00, 0x00, 0x00, 0x5E, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xCE, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x0B, 0x00, 0x00, 0x00, 0xCE};
#elif defined(VERSION_EU)
const float unbake_rodata_800EDD00_4 = 0.0666666701f;
const float unbake_rodata_800EDD04_4 = 0.0166666675f;
const float unbake_rodata_800EDD08_4 = 5.0f;
const float unbake_rodata_800EDD0C_4 = 0.0666666701f;
const float unbake_rodata_800EDD10_4 = 0.0166666675f;
const float unbake_rodata_800EDD14_4 = 10.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8D70_4 = 0.00333333341f;
const float unbake_rodata_800E8D74_4 = 100.0f;
const float unbake_rodata_800E8D78_4 = 150.0f;
const float unbake_rodata_800E8D7C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DE288_2C[] = {0x0043D128U, 0x0043D138U, 0x0043D148U, 0x0043D158U, 0x0043D168U, 0x0043D178U, 0x0043D188U, 0x0043D198U, 0x0043D1A8U, 0x0043D1B8U, 0x0043D1C8U};
#endif
