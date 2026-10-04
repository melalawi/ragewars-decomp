#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"

extern void *func_8022A83C_de(char *);
extern s32 func_80209874_de(void *, s32);
extern void func_80211020_de(void *);
extern void func_80209948_de(s32 *, s32);
extern void func_80208410_de(void *);
extern void func_80208EB0_de(s32 *);
extern char D_80140F80;






void func_80212CC4_de(void *arg0) {
    s32 *rec;
    void *v0;

    rec = ((func_80212C04_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    v0 = func_8022A83C_de(&D_80140F80);
    if (v0 == 0 || v0 != (void *) *rec) {
        func_80209874_de(rec, 2);
        return;
    }
    rec = ((func_80212C04_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    func_80211020_de(rec);
    func_80209948_de(rec, rec[3]);
    func_80208410_de(rec);
    func_80208EB0_de(rec);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C40F8_8 = 4294967296.0;
const double unbake_rodata_800C4100_8 = 4294967296.0;
const double unbake_rodata_800C4108_8 = 4294967296.0;
const double unbake_rodata_800C4110_8 = 4294967296.0;
const double unbake_rodata_800C4118_8 = 4294967296.0;
const float unbake_rodata_800C4120_4 = 9.58767268e-05f;
const float unbake_rodata_800C4124_4 = 9.58767268e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C92AC_4 = 9.58767268e-05f;
const float unbake_rodata_800C92B0_4 = 0.0666666701f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42BC_4 = 32767.0f;
const float unbake_rodata_800C42C0_4 = 0.100000001f;
const float unbake_rodata_800C42C4_4 = 60.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C425C_4 = 1.26999998f;
const float unbake_rodata_800C4260_4 = 2.14748365e+09f;
const float unbake_rodata_800C4264_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4178_4 = 0.5f;
#endif
