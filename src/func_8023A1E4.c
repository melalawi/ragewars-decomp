#include "basetypes.h"

extern void func_8025E410(s32 arg0);
extern void func_802538A8(s32 a);
extern void func_802537D8(void *, void *);

typedef struct func_8023A1E4_S1 func_8023A1E4_S1;
struct func_8023A1E4_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x1200 - 0x8 - sizeof(s32)];
    s32 unk1200;
};

void func_8023A1E4(void *arg0) {
    s32 temp_a1;

    ((func_8023A1E4_S1 *)(arg0))->unk1200 = 1;
    func_8025E410((s32)((char *)arg0 + 0x40));
    func_802538A8(0);
    temp_a1 = ((func_8023A1E4_S1 *)(arg0))->unk0;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
        ((func_8023A1E4_S1 *)(arg0))->unk0 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk4 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk8 = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800DBD98_8 = 0.0;
const double unbake_rodata_800DBDA0_8 = 1000000.0;
const double unbake_rodata_800DBDA8_8 = 10.0;
const double unbake_rodata_800DBDB0_8 = 1.0;
const double unbake_rodata_800DBDB8_8 = 0.10000000000000001;
const double unbake_rodata_800DBDC0_8 = 1.0;
const double unbake_rodata_800DBDC8_8 = 0.5;
const double unbake_rodata_800DBDD0_8 = 0.0;
const double unbake_rodata_800DBDD8_8 = 9.9999997473787516e-05;
const double unbake_rodata_800DBDE0_8 = 1.0;
const double unbake_rodata_800DBDE8_8 = 10.0;
const double unbake_rodata_800DBDF0_8 = 0.0;
const double unbake_rodata_800DBDF8_8 = 2147483647.0;
const double unbake_rodata_800DBE00_8 = 0.5;
const double unbake_rodata_800DBE08_8 = 0.10000000000000001;
const double unbake_rodata_800DBE10_8 = 0.050000000745058053;
const double unbake_rodata_800DBE18_8 = 10.0;
const double unbake_rodata_800DBE20_8 = 10.0;
const double unbake_rodata_800DBE28_8 = 0.10000000149011612;
const double unbake_rodata_800DBE30_8 = 0.0;
const double unbake_rodata_800DBE38_8 = 1.0;
const double unbake_rodata_800DBE40_8 = 10.0;
const double unbake_rodata_800DBE48_8 = 0.10000000000000001;
const double unbake_rodata_800DBE50_8 = 0.5;
const double unbake_rodata_800DBE58_8 = 1.0;
const double unbake_rodata_800DBE60_8 = 10.0;
const double unbake_rodata_800DBE68_8 = 0.10000000000000001;
const double unbake_rodata_800DBE70_8 = 10.0;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0E08_3C[] = {0x0040A988U, 0x0040A988U, 0x0040A9B8U, 0x0040A9A8U, 0x0040A988U, 0x0040A998U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A988U, 0x0040A9C8U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E1DB4_10[] = {0x80, 0x0D, 0x01, 0xEC, 0x80, 0x0D, 0x4A, 0x48, 0x80, 0x0D, 0xA3, 0x2C, 0x80, 0x0D, 0xE1, 0x08};
const unsigned char unbake_rodata_800E1DC4_10[] = {0x80, 0x0D, 0x01, 0xF8, 0x80, 0x0D, 0x4A, 0x5C, 0x80, 0x0D, 0xA3, 0x3C, 0x80, 0x0D, 0xE1, 0x18};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DD7F0_C[] = {0x80, 0x0D, 0x0B, 0x44, 0x80, 0x0D, 0x53, 0xD8, 0x80, 0x0D, 0x9F, 0xF0};
const unsigned char unbake_rodata_800DD7FC_C[] = {0x80, 0x0D, 0x0B, 0x48, 0x80, 0x0D, 0x53, 0xDC, 0x80, 0x0D, 0x9F, 0xF4};
const unsigned char unbake_rodata_800DD808_C[] = {0x80, 0x0D, 0x0B, 0x4C, 0x80, 0x0D, 0x53, 0xE0, 0x80, 0x0D, 0x9F, 0xF8};
const unsigned char unbake_rodata_800DD814_C[] = {0x80, 0x0D, 0x0B, 0x54, 0x80, 0x0D, 0x53, 0xE8, 0x80, 0x0D, 0xA0, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3DE4_4[] = {0x80, 0x0D, 0x2A, 0xB8};
#endif
