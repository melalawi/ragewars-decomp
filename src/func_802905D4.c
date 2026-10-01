#include "basetypes.h"

extern f32 D_800CA498;
typedef struct { f32 first; f32 second; } D_800CA498_Pair;
typedef struct { s32 unk0; } func_802905D4_G2;
extern s32 D_800D15E0;
typedef struct { f32 unk0; } func_802905D4_G3;
extern f32 D_800D15F0;

extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_80297B74(void *arg0, void *arg1);
extern void func_8024EB80(void *arg0);

typedef struct func_802905D4_S1 func_802905D4_S1;
typedef struct func_802905D4_S2 func_802905D4_S2;
typedef struct func_802905D4_S3 func_802905D4_S3;
struct func_802905D4_S1 {
    char pad0[0x3C04];
    char* unk3C04;
};
struct func_802905D4_S2 {
    char pad0[0x350];
    f32 unk350;
    char pad350[0x354 - 0x350 - sizeof(f32)];
    f32 unk354;
    char pad354[0x358 - 0x354 - sizeof(f32)];
    f32 unk358;
    char pad358[0x35C - 0x358 - sizeof(f32)];
    f32 unk35C;
    char pad35C[0x360 - 0x35C - sizeof(f32)];
    f32 unk360;
    char pad360[0x364 - 0x360 - sizeof(f32)];
    f32 unk364;
};
struct func_802905D4_S3 {
    char pad0[0x17C];
    f32 unk17C;
    char pad17C[0x180 - 0x17C - sizeof(f32)];
    f32 unk180;
    char pad180[0x184 - 0x180 - sizeof(f32)];
    f32 unk184;
    char pad184[0x188 - 0x184 - sizeof(f32)];
    f32 unk188;
    char pad188[0x18C - 0x188 - sizeof(f32)];
    f32 unk18C;
    char pad18C[0x190 - 0x18C - sizeof(f32)];
    f32 unk190;
    char pad190[0x1C8 - 0x190 - sizeof(f32)];
    f32 unk1C8;
    char pad1C8[0x1DC - 0x1C8 - sizeof(f32)];
    char* unk1DC;
};

void func_802905D4(char *arg0, char *arg1) {
    char *entry;
    f32 value;
    f32 upper;
    f32 scale;
    f32 zero;

    func_8026D980();
    entry = ((func_802905D4_S1 *)(arg0))->unk3C04;
    if (entry != 0) {
        zero = 0.0f;
        upper = D_800CA498;
        scale = ((D_800CA498_Pair *)&D_800CA498)->second;
        do {
            if ((((func_802905D4_S2 *)(arg1))->unk35C > ((func_802905D4_S3 *)(entry))->unk17C) &&
                (((func_802905D4_S2 *)(arg1))->unk350 < ((func_802905D4_S3 *)(entry))->unk188) &&
                (((func_802905D4_S2 *)(arg1))->unk364 > ((func_802905D4_S3 *)(entry))->unk184) &&
                (((func_802905D4_S2 *)(arg1))->unk358 < ((func_802905D4_S3 *)(entry))->unk190) &&
                (((func_802905D4_S2 *)(arg1))->unk360 > ((func_802905D4_S3 *)(entry))->unk180) &&
                (((func_802905D4_S2 *)(arg1))->unk354 < ((func_802905D4_S3 *)(entry))->unk18C) &&
                (func_80297B74(arg1 + 0x2F0, &((func_802905D4_S3 *)entry)->unk17C) != 0)) {
                value = ((func_802905D4_S3 *)(entry))->unk1C8;
                D_800D15E0 = 0;
                if ((value > zero) && (value <= upper)) {
                    D_800D15E0 = 1;
                    D_800D15F0 = value * scale;
                }
                func_8024EB80(entry);
                D_800D15E0 = 0;
            }
            entry = ((func_802905D4_S3 *)(entry))->unk1DC;
        } while (entry != 0);
    }
    func_8026D9D0();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C52D8_4 = 7.5f;
const float unbake_rodata_800C52DC_4 = 34.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA498_4 = 7.5f;
const float unbake_rodata_800CA49C_4 = 34.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5658_4 = 7.5f;
const float unbake_rodata_800C565C_4 = 34.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5698_4 = 7.5f;
const float unbake_rodata_800C569C_4 = 34.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C53A8_4 = 7.5f;
const float unbake_rodata_800C53AC_4 = 34.0f;
#endif
