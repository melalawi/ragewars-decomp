#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

extern void *D_800D052C[];
extern Gfx *D_80110634;
extern s32 D_8011FAC0;

extern void func_8026D8F8(void);
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern void func_80291BF8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80249E18(void *arg0, void *arg1);

typedef struct func_8021CBAC_S1 func_8021CBAC_S1;
typedef struct func_8021CBAC_S2 func_8021CBAC_S2;
typedef struct func_8021CBAC_S3 func_8021CBAC_S3;
struct func_8021CBAC_S1 {
    char pad0[0x2E8];
    char unk2E8;
    char pad2E8[0x5EA - 0x2E8 - sizeof(char)];
    s16 unk5EA;
    char pad5EA[0x62E - 0x5EA - sizeof(s16)];
    s16 unk62E;
};
struct func_8021CBAC_S2 {
    char pad0[0x120];
    s32 unk120;
    char pad120[0x29C - 0x120 - sizeof(s32)];
    f32 unk29C;
};
struct func_8021CBAC_S3 {
    char pad0[0x44];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
};

void func_8021CBAC(void *arg0, void *arg1) {
    void *entry;
    f32 *rect;
    f32 x;
    f32 y;
    f32 left;
    f32 right;
    f32 top;
    f32 bottom;

    if ((((func_8021CBAC_S1 *)(arg0))->unk62E != -1) &&
        (((func_8021CBAC_S1 *)(arg0))->unk5EA != 0)) {
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE3001201;
            cmd->words.w1 = 0x2000;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE3000C00;
            cmd->words.w1 = 0x80000;
        }
        func_8026D8F8();

        entry = D_800D052C[((func_8021CBAC_S1 *)(arg0))->unk62E];
        rect = &((func_8021CBAC_S2 *)(arg1))->unk29C;
        x = rect[0];
        y = rect[1];
        left = ((func_8021CBAC_S3 *)(entry))->unk44 * x + rect[2];
        right = ((func_8021CBAC_S3 *)(entry))->unk4C * x + rect[2];
        top = ((func_8021CBAC_S3 *)(entry))->unk48 * y + rect[3];
        bottom = ((func_8021CBAC_S3 *)(entry))->unk50 * y + rect[3];
        func_80291BF8(&D_8011FAC0, (s32)left, (s32)right, (s32)top,
                      (s32)bottom, ((func_8021CBAC_S2 *)(arg1))->unk120);

        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xD9FFFFFF;
            cmd->words.w1 = 0x10000;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB040004;
            cmd->words.w1 = 1;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB04000C;
            cmd->words.w1 = 1;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB040014;
            cmd->words.w1 = 0xFFFF;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB04001C;
            cmd->words.w1 = 0xFFFF;
        }
        func_8026D980();
        func_80249E18(&((func_8021CBAC_S1 *)(arg0))->unk2E8, arg1);
        func_8026D9D0();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5040_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA200_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C4E28_4 = 30.0f;
const float unbake_rodata_800C4E2C_4 = (-40.9599991f);
const float unbake_rodata_800C4E30_4 = 51.1999969f;
const float unbake_rodata_800C4E34_4 = 5.0f;
const float unbake_rodata_800C4E38_4 = 0.5f;
const float unbake_rodata_800C4E3C_4 = 10.0f;
const float unbake_rodata_800C4E40_4 = 90.0f;
const float unbake_rodata_800C4E44_4 = 0.100000001f;
const float unbake_rodata_800C4E48_4 = 5.0f;
const float unbake_rodata_800C4E4C_4 = 0.300000012f;
const float unbake_rodata_800C4E50_4 = 1.0f;
const float unbake_rodata_800C4E54_4 = 30.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C4E0C_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E98_4 = 65536.0f;
#endif
