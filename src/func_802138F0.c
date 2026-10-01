/* Sets up a sound voice from its definition: clears the voice's handle at 0xC and state at 0x100 and
   0x102, takes the definition's three bytes at 0x12, 0xE and 0x10 for the output parameters, and the
   pitch from its word at 0x18 read unsigned for kinds 1 and 4 (with the two level bytes at 0x41 and 0x40
   for kind 1, D_800C71F0 otherwise) or signed short for kind 7; for kinds 1 and 4 the audio mode
   D_801462D0 8 scales the pitch by D_800C7208 with a floor of (&D_800C7208)[1] and no second level,
   and mode 0x20 scales it by D_800C7210 with second level D_800C7214; the pitch is stored shifted up 8
   bits at 0x4 and 0x8 and the levels at 0x10 and 0xCC. */
#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern f32 D_800C71F0;
extern f64 D_800C71F8;
extern f64 D_800C7200;
extern f32 D_800C7208;
extern f32 D_800C7210;
extern f32 D_800C7214;
extern s32 D_801462D0;

typedef struct func_802138F0_S1 func_802138F0_S1;
typedef struct func_802138F0_S2 func_802138F0_S2;
typedef union func_802138F0_S2_U18 { s32 v0; s16 v1; } func_802138F0_S2_U18;
struct func_802138F0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s8 unk10;
    char pad10[0xCC - 0x10 - sizeof(s8)];
    s8 unkCC;
    char padCC[0x100 - 0xCC - sizeof(s8)];
    u8 unk100;
    char pad100[0x102 - 0x100 - sizeof(u8)];
    s16 unk102;
};
struct func_802138F0_S2 {
    char pad0[0xE];
    s8 unkE;
    char padE[0x10 - 0xE - sizeof(s8)];
    s8 unk10;
    char pad10[0x12 - 0x10 - sizeof(s8)];
    s8 unk12;
    char pad12[0x18 - 0x12 - sizeof(s8)];
    func_802138F0_S2_U18 unk18;
    char pad18[0x40 - 0x18 - sizeof(func_802138F0_S2_U18)];
    u8 unk40;
    char pad40[0x41 - 0x40 - sizeof(u8)];
    u8 unk41;
};

void func_802138F0(void *voice, void *def, Pair unused, s32 arg4, u8 *out) {
    s32 send;
    s32 first;
    s32 second;
    f32 pitch;
    f32 level;
    f32 level2;
    f64 wide;
    f32 scaled;
    s32 raw;

    send = 0;
    level = D_800C71F0;
    level2 = (&D_800C71F0)[1];
    first = 0;
    second = 0;
    ((func_802138F0_S1 *)(voice))->unkC = -1;
    ((func_802138F0_S1 *)(voice))->unk100 = 0;
    ((func_802138F0_S1 *)(voice))->unk102 = -1;
    pitch = level;
    if (def != 0) {
        send = ((func_802138F0_S2 *)(def))->unk12;
        first = ((func_802138F0_S2 *)(def))->unkE;
        second = ((func_802138F0_S2 *)(def))->unk10;
        switch (*(s32 *) def) {
        case 1:
            raw = ((func_802138F0_S2 *)(def))->unk18.v0;
            wide = raw;
            if (raw < 0) {
                wide += D_800C71F8;
            }
            level = ((func_802138F0_S2 *)(def))->unk41;
            level2 = ((func_802138F0_S2 *)(def))->unk40;
            pitch = wide;
            break;
        case 4:
            raw = ((func_802138F0_S2 *)(def))->unk18.v0;
            wide = raw;
            if (raw < 0) {
                wide += D_800C7200;
            }
            pitch = wide;
            break;
        case 7:
            pitch = ((func_802138F0_S2 *)(def))->unk18.v1;
            break;
        }
        if (*(s32 *) def == 1 || *(s32 *) def == 4) {
            switch (D_801462D0) {
            case 8:
                scaled = pitch * D_800C7208;
                level2 = 0.0f;
                if (scaled < (&D_800C7208)[1]) {
                    scaled = (&D_800C7208)[1];
                }
                pitch = scaled;
                break;
            case 0x20:
                level2 = D_800C7214;
                pitch *= D_800C7210;
                break;
            }
        }
    }
    out[3] = send;
    out[1] = first;
    out[2] = second;
    ((func_802138F0_S1 *)(voice))->unk4 = pitch;
    ((func_802138F0_S1 *)(voice))->unk10 = (s32) level;
    ((func_802138F0_S1 *)(voice))->unkCC = (s32) level2;
    ((func_802138F0_S1 *)(voice))->unk4 <<= 8;
    ((func_802138F0_S1 *)(voice))->unk8 = ((func_802138F0_S1 *)(voice))->unk4;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2030_4 = 100.0f;
const float unbake_rodata_800C2034_4 = 128.0f;
const double unbake_rodata_800C2038_8 = 4294967296.0;
const double unbake_rodata_800C2040_8 = 4294967296.0;
const float unbake_rodata_800C2048_4 = 0.5f;
const float unbake_rodata_800C204C_4 = 1.0f;
const float unbake_rodata_800C2050_4 = 1.25f;
const float unbake_rodata_800C2054_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C71F0_4 = 100.0f;
const float unbake_rodata_800C71F4_4 = 128.0f;
const double unbake_rodata_800C71F8_8 = 4294967296.0;
const double unbake_rodata_800C7200_8 = 4294967296.0;
const float unbake_rodata_800C7208_4 = 0.5f;
const float unbake_rodata_800C720C_4 = 1.0f;
const float unbake_rodata_800C7210_4 = 1.25f;
const float unbake_rodata_800C7214_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C23A0_4 = 100.0f;
const float unbake_rodata_800C23A4_4 = 128.0f;
const double unbake_rodata_800C23A8_8 = 4294967296.0;
const double unbake_rodata_800C23B0_8 = 4294967296.0;
const float unbake_rodata_800C23B8_4 = 0.5f;
const float unbake_rodata_800C23BC_4 = 1.0f;
const float unbake_rodata_800C23C0_4 = 1.25f;
const float unbake_rodata_800C23C4_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2100_4 = 100.0f;
const float unbake_rodata_800C2104_4 = 128.0f;
const double unbake_rodata_800C2108_8 = 4294967296.0;
const double unbake_rodata_800C2110_8 = 4294967296.0;
const float unbake_rodata_800C2118_4 = 0.5f;
const float unbake_rodata_800C211C_4 = 1.0f;
const float unbake_rodata_800C2120_4 = 1.25f;
const float unbake_rodata_800C2124_4 = 255.0f;
#endif
