typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern f32 D_800CB020;
extern char D_800D14B0;
extern char D_800D2F18;
extern char D_801469A0;
extern void func_8026D8F8(void);
extern void func_80296FF8(void);

void func_802A6488(u32 arg0) {
    struct {
        char pad[144];
        f32 matrix[7];
    } volatile local;
    Gfx *cmd;

    local.matrix[0] = 0.0f;
    local.matrix[1] = 0.0f;
    local.matrix[2] = 0.0f;
    local.matrix[4] = 0.0f;
    local.matrix[6] = 0.0f;
    local.matrix[5] = D_800CB020;

    cmd = D_80110634++;
    cmd->words.w0 = 0xE7000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE3000A01;
    cmd->words.w1 = 0x00100000;
    cmd = D_80110634++;
    cmd->words.w0 = 0xFD900000;
    cmd->words.w1 = (u32)&D_800D14B0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF5900000;
    cmd->words.w1 = 0x07080200;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE6000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF3000000;
    cmd->words.w1 = 0x0707F400;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE7000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF5880400;
    cmd->words.w1 = 0x00080200;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF2000000;
    cmd->words.w1 = 0x0003C03C;
    cmd = D_80110634++;
    cmd->words.w0 = 0xFA00FFFF;
    cmd->words.w1 = 0xC8000096;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDE000000;
    cmd->words.w1 = (u32)&D_800D2F18;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDA380003;
    cmd->words.w1 = arg0;
    cmd = D_80110634++;
    cmd->words.w0 = 0x01004008;
    cmd->words.w1 = (u32)&D_801469A0;
    cmd = D_80110634++;
    cmd->words.w0 = 0x06000204;
    cmd->words.w1 = 0x00040600;

    func_8026D8F8();
    func_80296FF8();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DC0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB020_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6130_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6170_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E90_4 = 1.0f;
#endif
