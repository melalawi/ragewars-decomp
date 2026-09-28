/* Volatile format-flag rereads and primary-buffer stores preserve ordering; configures paired image buffers and selects transfer routines and dimensions for their pixel formats. */
#include "basetypes.h"
typedef int M2C_UNK;
typedef int M2C_UNK32;
#define NULL 0
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((char *)(expr) + (offset)))
extern M2C_UNK D_41404C;
extern M2C_UNK D_414078;
extern M2C_UNK D_4140A4;
extern M2C_UNK D_4140EC;
extern M2C_UNK D_414114;
extern M2C_UNK D_41413C;
extern M2C_UNK D_4141B8;
extern M2C_UNK D_4141E8;
extern M2C_UNK D_414240;
extern M2C_UNK D_414260;
extern M2C_UNK D_414280;
extern M2C_UNK D_4142A0;
extern M2C_UNK D_4142C4;
typedef struct Format { s32 word[13]; } Format;
extern Format D_800E2B20[];
extern s32 D_80153C60;
extern volatile s32 D_80153C64;
extern s32 D_80153C6C;
extern volatile s32 D_80153C70;
extern s32 D_80153C78;
extern s32 D_80153C7C;
extern s32 D_80153C84;
extern s32 D_80153C88;
extern s32 D_80153C90;
extern s32 D_80153C94;
extern s32 D_80153C98;
extern s32 D_80153C9C;
extern s32 D_80153CA0;
extern s32 D_80153CA4;
extern s32 D_80153CA8;
extern s32 D_80153CAC;
extern s32 D_80153CB0;
extern s32 D_80153CB4;
extern s32 D_80153CB8;
extern s32 D_80153CBC;
extern s32 D_80153CC0;
extern s32 D_80153CC4;
extern s32 D_80153CC8;
extern s32 D_80153CCC;
extern M2C_UNK *D_80153CD0;
extern M2C_UNK *D_80153CD4;
extern M2C_UNK *D_80153CD8;
extern M2C_UNK *D_80153CDC;
extern Format D_80153CE0;
extern Format D_80153D20;
extern void *D_80153D54;
extern void *D_80153D58;

void func_80412FD4(void *arg0, void *arg1) {
    Format first;
    Format second;
    M2C_UNK *var_v0_3;
    M2C_UNK *var_v0_4;
    M2C_UNK *var_v0_7;
    M2C_UNK *var_v0_8;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_v0;
    s32 *var_v0_5;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 var_v0_2;
    s32 var_v0_6;
    void *temp_v0;
    void *temp_v0_2;

    D_80153CDC = NULL;
    D_80153CD8 = NULL;
    D_80153CD4 = NULL;
    D_80153CD0 = NULL;
    D_80153C88 = 0;
    D_80153C7C = 0;
    D_80153C70 = 0;
    D_80153C64 = 0;
    D_80153C84 = 0;
    D_80153C78 = 0;
    D_80153C6C = 0;
    D_80153C60 = 0;
    D_80153D58 = NULL;
    D_80153D54 = NULL;
    if (arg0 != NULL) {
        D_80153D58 = arg0;
        first = D_800E2B20[M2C_FIELD(arg0,u8 *,0)];
        D_80153D20 = first;
        if (first.word[1] != 0) {
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x14);
        } else {
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
        }
        D_80153C70 = var_v0_2;
        if (*(volatile s32 *)&first.word[1] != 0) {
            D_80153C88 = M2C_FIELD(arg0, s32 *, 0x18);
        } else {
            D_80153C88 = 0;
        }
        if (first.word[3] == 0x10) {
            var_v0_3 = &D_4140EC;
            goto block_17;
        }
        if (first.word[3] == 0x18) {
            var_v0_3 = &D_41413C;
            goto block_17;
        }
        if (first.word[3] == 0x20) {
            var_v0_3 = &D_414114;
block_17:
            D_80153CD4 = var_v0_3;
        }
        if (first.word[2] == 4) {
            var_v0_4 = &D_4142C4;
            goto block_22;
        }
        if (first.word[2] == 8) {
            var_v0_4 = &D_4142A0;
block_22:
            D_80153CDC = var_v0_4;
        }
        D_80153CA0 = first.word[5];
        D_80153CA4 = first.word[6];
        D_80153CA8 = first.word[7];
        D_80153CAC = first.word[8];
        D_80153CC0 = first.word[9];
        D_80153CC4 = first.word[10];
        D_80153CC8 = first.word[11];
        D_80153CCC = first.word[12];
    }
    if (arg1 != NULL) {
        D_80153D54 = arg1;
        second = D_800E2B20[M2C_FIELD(arg1,u8 *,0)];
        D_80153CE0 = second;
        if (second.word[1] != 0) {
            var_v0_6 = M2C_FIELD(arg1, s32 *, 0x14);
        } else {
            var_v0_6 = M2C_FIELD(arg1, s32 *, 0x18);
        }
        D_80153C64 = var_v0_6;
        if (*(volatile s32 *)&second.word[1] != 0) {
            D_80153C7C = M2C_FIELD(arg1, s32 *, 0x18);
        } else {
            D_80153C7C = 0;
        }
        if (second.word[3] == 0x10) {
            var_v0_7 = &D_41404C;
            goto block_41;
        }
        if (second.word[3] == 0x18) {
            var_v0_7 = &D_4140A4;
            goto block_41;
        }
        if (second.word[3] == 0x20) {
            var_v0_7 = &D_414078;
block_41:
            D_80153CD0 = var_v0_7;
        }
        if (second.word[2] == 4) {
            var_v0_8 = &D_4141E8;
            goto block_52;
        }
        if (second.word[2] == 8) {
            var_v0_8 = &D_4141B8;
            goto block_52;
        }
        if (second.word[2] == 0x10) {
            var_v0_8 = &D_414240;
            goto block_52;
        }
        if (second.word[2] == 0x18) {
            var_v0_8 = &D_414260;
            goto block_52;
        }
        if (second.word[2] == 0x20) {
            var_v0_8 = &D_414280;
block_52:
            D_80153CD8 = var_v0_8;
        }
        D_80153C90 = second.word[5];
        D_80153C94 = second.word[6];
        D_80153C98 = second.word[7];
        D_80153C9C = second.word[8];
        D_80153CB0 = second.word[9];
        D_80153CB4 = second.word[10];
        D_80153CB8 = second.word[11];
        D_80153CBC = second.word[12];
    }
}
