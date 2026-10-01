/* Detaches an entity from linked effects while preserving their transforms and lifetimes; the unsigned offset-to-pointer cast preserves matrix-address scheduling and addition operand order. */
#include "basetypes.h"
#define NULL 0
typedef struct Config { char pad[0x14]; int unk14; } Config;
typedef struct Entity { char pad[0x118]; Config *unk118; char p11c[0x1f]; u8 unk13B; char p13c[0x9d]; u8 unk1D9; } Entity;
typedef struct Def { int unk0; f32 unk4,unk8; } Def;
typedef struct Child { int unk0; struct Child *unk4; f32 unk8; int pc; f32 pos[3],rot[3],mat[32]; char pa8[8]; Entity *unkB0; } Child;
typedef struct Node { int unk0; struct Node *unk4; Def *unk8; char pc[0x10]; Entity *unk1C; int p20; f32 unk24; char p28[0x14]; int unk3C; Child *unk40; } Node;
typedef struct Root { char pad[0x7528]; Node *unk7528; } Root;
typedef struct Quad { int unk0,unk4,unk8,unkC; } Quad;
typedef struct Mat { int v[16]; } Mat;
extern int D_800D297C;
extern f32 D_800CAFB8,D_800CAFBC,D_800CAFC0,D_800CAFC4;
extern char D_8013BA80;
extern void func_802702EC(void *,void *),func_80270980(void *,void *),func_80272898(void *),func_80273340(void *,void *),func_8027335C(void *,void *),func_802734EC(void *,f32,f32,f32),func_802A35C0(void *,Node *,void *);
void func_802A52E4(Root *arg0, Entity *arg1) {
    f32 sp10[16];
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    char *temp_v1_2;
    Entity *temp_v1_3;
    Entity *temp_v1_4;
    Quad *var_a0;
    Child *var_s0;
    Node *var_s1;
    Quad *var_v0;

    var_s1 = arg0->unk7528;
    if (var_s1 != NULL) {
        do {
            temp_v1 = var_s1->unk3C;
            if (temp_v1 & 8) {
                var_s0 = var_s1->unk40;
                if (var_s0 != NULL) {
loop_4:
                    if (var_s0->unkB0 == arg1) {
                        if (arg1 != NULL) {
                            if (arg1 == (void *)-1) {
                                *(Mat *)((char *)var_s0+(D_800D297C<<6)+0x28)=*(Mat *)((char *)var_s0+((D_800D297C^1)<<6)+0x28);
                                var_s0->unkB0 = 0;
                            } else {
                                func_80270980(&sp10, (char *)arg1 + ((D_800D297C << 6) + 0x60));
                                var_f0 = D_800CAFB8;
                                if (arg1->unk118->unk14 != 0) {
                                    var_f0 = D_800CAFBC;
                                }
                                func_802734EC(&sp10, var_f0, var_f0, var_f0);
                                func_80272898(&sp10);
                                func_80273340(&sp10, var_s0->pos);
                                if (var_s1->unk3C & 4) {
                                    func_8027335C(&sp10, var_s0->rot);
                                } else {
                                    func_802702EC(&sp10, (char *)var_s0 + ((D_800D297C << 6) + 0x28));
                                }
                            }
                            var_s0->unk8 = (f32) var_s1->unk8->unk8;
                        }
                        var_s0->unkB0 = (Entity *)-1;
                    }
                    var_s0 = var_s0->unk4;
                    if (var_s0 != NULL) {
                        goto loop_4;
                    }
                }
            } else if (var_s1->unk1C == arg1) {
                if (temp_v1 & 2) {
                    unsigned int offset = D_800D297C << 6;
                    char *matrix = (char *)offset;
                    matrix += (unsigned int)arg1;
                    matrix += 0x60;
                    if (var_s1->unk24 > 0.0f) {
                    func_80270980(&sp10, matrix);
                    var_f0_2 = D_800CAFC0;
                    if (arg1->unk118->unk14 != 0) {
                        var_f0_2 = D_800CAFC4;
                    }
                    func_802734EC(&sp10, var_f0_2, var_f0_2, var_f0_2);
                    func_80272898(&sp10);
                    func_802A35C0(&D_8013BA80, var_s1, &sp10);
                }
                }
                temp_v1_3 = var_s1->unk1C;
                if (temp_v1_3 != NULL) {
                    if (var_s1->unk3C & 1) {
                        temp_v0 = temp_v1_3->unk13B;
                        if (temp_v0 != 0) {
                            temp_v1_3->unk13B = (u8) (temp_v0 - 1);
                        }
                    }
                    if (var_s1->unk3C & 2) {
                        temp_v1_4 = var_s1->unk1C;
                        temp_v0_2 = temp_v1_4->unk1D9;
                        if (temp_v0_2 != 0) {
                            temp_v1_4->unk1D9 = (u8) (temp_v0_2 - 1);
                        }
                    }
                }
                var_s1->unk1C = NULL;
                temp_f1 = var_s1->unk8->unk4;
                if (var_s1->unk24 < temp_f1) {
                    var_s1->unk24 = temp_f1;
                }
            }
            var_s1 = var_s1->unk4;
        } while (var_s1 != NULL);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D58_4 = 0.00999999978f;
const float unbake_rodata_800C5D5C_4 = 0.292571425f;
const float unbake_rodata_800C5D60_4 = 0.00999999978f;
const float unbake_rodata_800C5D64_4 = 0.292571425f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAFB8_4 = 0.00999999978f;
const float unbake_rodata_800CAFBC_4 = 0.292571425f;
const float unbake_rodata_800CAFC0_4 = 0.00999999978f;
const float unbake_rodata_800CAFC4_4 = 0.292571425f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C60C8_4 = 0.00999999978f;
const float unbake_rodata_800C60CC_4 = 0.292571425f;
const float unbake_rodata_800C60D0_4 = 0.00999999978f;
const float unbake_rodata_800C60D4_4 = 0.292571425f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6108_4 = 0.00999999978f;
const float unbake_rodata_800C610C_4 = 0.292571425f;
const float unbake_rodata_800C6110_4 = 0.00999999978f;
const float unbake_rodata_800C6114_4 = 0.292571425f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E28_4 = 0.00999999978f;
const float unbake_rodata_800C5E2C_4 = 0.292571425f;
const float unbake_rodata_800C5E30_4 = 0.00999999978f;
const float unbake_rodata_800C5E34_4 = 0.292571425f;
#endif
