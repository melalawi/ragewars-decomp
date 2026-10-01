#include "unbake_gbi.h"
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

extern s32 D_8011FE88;
extern f32 D_800C7470;
typedef struct { f32 first; f32 second; } D_800C7470_Pair;
typedef struct { s32 unk0; } func_8021C9B4_G2;
extern s32 D_800D297C;
typedef struct { u8 unk0; } func_8021C9B4_G3;
extern u8 D_801462E5;
typedef struct { s32 unk0; } func_8021C9B4_G4;
extern s32 D_801468F4;
typedef struct { s32 unk0; } func_8021C9B4_G5;
extern s32 D_800CE47C;
extern s32 D_800CE430[];
typedef struct { Gfx * unk0; } func_8021C9B4_G6;
extern Gfx * D_80110634;

extern f32 func_8024D274(void *arg0);
extern void func_8028C6B0(void *arg0, void *arg1, void *arg2);
extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void func_80249E18(void *arg0, void *arg1);
extern void func_8021C674(void *arg0, void *arg1);

typedef struct { char bytes[0x18]; } func_8021C9B4_Record;
typedef struct { char pad[0x140]; func_8021C9B4_Record records[16]; } func_8021C9B4_Records;
typedef struct func_8021C9B4_S1 func_8021C9B4_S1;
typedef struct func_8021C9B4_S2 func_8021C9B4_S2;
typedef struct func_8021C9B4_S3 func_8021C9B4_S3;
struct func_8021C9B4_S1 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x8 - 0x3 - sizeof(u8)];
    Vec3i unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3i)];
    void* unk18;
    char pad18[0x70 - 0x18 - sizeof(void*)];
    f32 unk70;
    char pad70[0x5D8 - 0x70 - sizeof(f32)];
    void* unk5D8;
    char pad5D8[0x86C - 0x5D8 - sizeof(void*)];
    s32 unk86C;
    char pad86C[0x1210 - 0x86C - sizeof(s32)];
    s32 unk1210;
};
struct func_8021C9B4_S2 {
    char pad0[0x81];
    u8 unk81;
    char pad81[0x8F - 0x81 - sizeof(u8)];
    u8 unk8F;
};
struct func_8021C9B4_S3 {
    char pad0[0xC];
    s16 unkC;
};

void func_8021C9B4(void *arg0, void *arg1) {
    Vec3i pos;
    s32 value;
    Gfx *cmd;

    pos = ((func_8021C9B4_S1 *)arg0)->unk8;
    *(f32 *)&pos.y += ((func_8021C9B4_S1 *)(arg0))->unk70;
    *(f32 *)&pos.y += func_8024D274(arg0) * ((D_800C7470_Pair *)&D_800C7470)->second;
    func_8028C6B0(&D_8011FE88, &pos,
                  &((func_8021C9B4_Records *)arg0)->records[D_800D297C]);

    value = 0x66;
    if (D_801462E5 != 0) {
        if ((D_801468F4 != 0) &&
            (((func_8021C9B4_S2 *)(((func_8021C9B4_S1 *)(arg0))->unk5D8))->unk8F != 0)) {
            value = D_800CE47C;
        } else {
            value = D_800CE430[((func_8021C9B4_S3 *)(((func_8021C9B4_S1 *)(arg0))->unk18))->unkC];
            ((func_8021C9B4_S1 *)(arg0))->unk3 =
                ((func_8021C9B4_S2 *)(((func_8021C9B4_S1 *)(arg0))->unk5D8))->unk81;
        }
    }
    func_8028B250(&D_8011FE88, arg0, value,
                  ((func_8021C9B4_S1 *)(arg0))->unk86C);

    cmd = D_80110634++;
    gDPPipeSync(cmd);
    cmd = D_80110634++;
    gDPSetCycleType(cmd, G_CYC_2CYCLE);
    cmd = D_80110634++;
    gSPGeometryMode(cmd, 0, G_FOG);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 4, 2);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 12, 2);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 20, 0xFFFE);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 28, 0xFFFE);

    func_80249E18(arg0, arg1);
    if (((func_8021C9B4_S1 *)(arg0))->unk1210 != 0) {
        func_8021C674(arg0, arg1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C22B4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7474_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2624_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2664_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2384_4 = 0.5f;
#endif
