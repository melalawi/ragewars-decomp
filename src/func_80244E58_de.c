#include "common/types.h"
#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "types.h"
/* Starts the round once: unless already started, optionally resets the lead player (func_8022E290_de and its
 * three counters) and the player group, then when a new target id is pending selects it through
 * func_8044D3E8_de and func_80286AA8_de, records the start time from func_8040332C_de, marks the round started with
 * no pending target and copies the viewport rectangle into the active camera as floats. */











extern func_80244E48_S1 *D_800DE7E0;


extern Group D_80140FA0;

extern struct { func_80219490_S2 *unk0; } D_80140FE8_de;
extern char D_8010AC90;
extern char D_8011BDC8;

extern struct Shape_func_8021A2D4_de_2 D_801371D4;

extern struct Shape_func_8021A2D4_de_2 D_801371E4;
extern char D_801371E8;

extern struct Shape_func_8021A2D4_de_2 D_801371FC;
extern void func_8022E290_de(void *);
extern void func_80239B64_de(void *);
extern void func_80285D30_de(void *);
extern s32 func_8044D3E8_de(void *, Vec3Words *, s32, void *);
extern void func_80286AA8_de(void *, s32, s32);
extern s32 func_8040332C_de(void);

void func_80244E58_de(void) {
    Vec3Words origin;
    func_80219490_S2 *camera;
    void *player;
    Group *group;
    s32 target;
    s32 found;
    char *table;

    target = D_800DE7E0->unkD8;
    if (D_800DE7E0->unk40 != 0) {
        return;
    }
    if (D_800DE7E0->unk54 != 0) {
        group = &D_80140FA0;
        player = group->lead;
        if (player != 0) {
            func_8022E290_de(player);
            ((func_80244E48_S2 *)(player))->unk57C = 0;
            ((func_80244E48_S2 *)(player))->unk580 = 0;
            ((func_80244E48_S2 *)(player))->unk590 = 0;
        }
        func_80239B64_de(group->members);
        func_80285D30_de(&D_8010AC90);
    }
    if (target != -1) {
        table = &D_8011BDC8;
        if (D_801371D4.field_0 != target) {
            origin.w[0] = 0;
            origin.w[1] = 0;
            origin.w[2] = 0;
            found = func_8044D3E8_de(table, &origin, target, &D_801371E8);
            D_801371FC.field_0 = found;
            D_801371E4.field_0 = found != 0;
            func_80286AA8_de(table, target, found != 0);
        }
    }
    D_800DE7E0->unk5C = func_8040332C_de();
    D_800DE7E0->unk50 = 1;
    D_800DE7E0->unkD8 = -1;
    D_800DE7E0->unk40 = 1;
    camera = D_80140FE8_de.unk0;
    if (camera != 0) {
        camera->unk29C = D_800DE7E0->unk108;
        camera->unk2A0 = D_800DE7E0->unk10C;
        camera->unk2A4 = D_800DE7E0->unk110;
        camera->unk2A8 = D_800DE7E0->unk114;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD1A8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E24AC_4 = 255.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED3E0_12[] = {0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x20, 0x53, 0x61, 0x76, 0x65, 0x20, 0x42, 0x6C, 0x6F, 0x63, 0x6B, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E844C_4 = 1.0f;
const float unbake_rodata_800E8450_4 = 0.5f;
const float unbake_rodata_800E8454_4 = 0.300000012f;
const float unbake_rodata_800E8458_4 = 1.0f;
const float unbake_rodata_800E845C_4 = 1.0f;
const float unbake_rodata_800E8460_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDA8C_4 = 255.0f;
const float unbake_rodata_800DDA90_4 = 4.0f;
const float unbake_rodata_800DDA94_4 = 210.0f;
const float unbake_rodata_800DDA98_4 = 255.0f;
#endif
