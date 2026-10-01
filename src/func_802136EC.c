#include "basetypes.h"

extern s32 D_8013B364;
extern s32 D_8013B368;

extern void func_80213340(void *arg0);
extern s32 func_80274544(void);
extern void *func_8020C994(void *, s32);
extern void func_80209988(void *arg0);

typedef struct func_802136EC_S1 func_802136EC_S1;
typedef struct func_802136EC_S2 func_802136EC_S2;
typedef struct func_802136EC_S3 func_802136EC_S3;
typedef struct func_802136EC_S4 func_802136EC_S4;
typedef struct func_802136EC_S5 func_802136EC_S5;
typedef struct func_802136EC_S6 func_802136EC_S6;
struct func_802136EC_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_802136EC_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_802136EC_S3 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x220 - 0xC - sizeof(s32)];
    s32 unk220;
    char pad220[0x22C - 0x220 - sizeof(s32)];
    s32 unk22C;
    char pad22C[0x320 - 0x22C - sizeof(s32)];
    s32 unk320;
};
struct func_802136EC_S4 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_802136EC_S5 {
    char pad0[0x80];
    s8 unk80;
    char pad80[0x94 - 0x80 - sizeof(s8)];
    u8 unk94;
};
struct func_802136EC_S6 {
    char pad0[0xC];
    u16 unkC;
};

void func_802136EC(void *arg0)
{
    void *actor = ((func_802136EC_S2 *)(((func_802136EC_S1 *)(arg0))->unk1D8))->unk1454;

    ((func_802136EC_S3 *)(actor))->unk220 = 0;
    {
        void *data = ((func_802136EC_S4 *)(*(void **)actor))->unk5D8;
        if (((func_802136EC_S5 *)(data))->unk94 && ((func_802136EC_S5 *)(data))->unk80 == 12) {
            func_80213340(actor);
        } else {
            s32 global_count = D_8013B368;
            s32 *table = &D_8013B364;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = ((func_802136EC_S3 *)(actor))->unk22C;
loop:
                if (tries < 10) {
                    candidate = func_80274544() % table[1];
                    if (((func_802136EC_S6 *)(func_8020C994(table, candidate)))->unkC & 0x400) {
                        candidate = ((func_802136EC_S3 *)(actor))->unk22C;
                    }
                    tries++;
                    if (candidate != ((func_802136EC_S3 *)(actor))->unk22C) {
                        goto store_both;
                    }
                    goto loop;
                } else {
                    ((func_802136EC_S3 *)(actor))->unk22C = candidate;
                    goto store_c;
                }
            } else {
                candidate = 1;
            }
store_both:
            ((func_802136EC_S3 *)(actor))->unk22C = candidate;
store_c:
            ((func_802136EC_S3 *)(actor))->unkC = candidate;
        }
    }
    func_80209988(actor);
    ((func_802136EC_S3 *)(actor))->unk320 = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C42E0_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C94A0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C43E0_4 = 0.333333343f;
const float unbake_rodata_800C43E4_4 = 0.5f;
const double unbake_rodata_800C43E8_8 = 4294967296.0;
const float unbake_rodata_800C43F0_4 = 1.0f;
const float unbake_rodata_800C43F4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C43F8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C42F4_4 = (-128.0f);
const float unbake_rodata_800C42F8_4 = (-127.0f);
const float unbake_rodata_800C42FC_4 = (-127.0f);
const float unbake_rodata_800C4300_4 = (-80.0f);
const float unbake_rodata_800C4304_4 = 80.0f;
#endif
