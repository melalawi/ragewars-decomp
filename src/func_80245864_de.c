#include "span_1000/code_80245804.h"
#include "span_1000/types.h"
/* Calls func_80401980_de when the globally selected record's word at 0x38 is non-zero. */
extern void *D_800DE7E0;
extern void func_80401980_de(void);




void func_80245864_de(void) {
    void *record = D_800DE7E0;
    if (((func_8020D1FC_S1 *)(record))->unk38 != 0) {
        func_80401980_de();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD418_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E26C8_24[] = {0x00443080U, 0x004430B4U, 0x004430B4U, 0x0044308CU, 0x004430A0U, 0x004430B4U, 0x004430C4U, 0x004430D8U, 0x004430ECU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED458_3C[] = {0x0040ACC8U, 0x0040ACC8U, 0x0040AD28U, 0x0040AD08U, 0x0040ACC8U, 0x0040ACE8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040ACC8U, 0x0040AD48U};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E85BC_4[] = {0x25, 0x31, 0x64, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDBB0_20[] = {0x0042FCF8U, 0x0042FDF0U, 0x0042FE84U, 0x0042FD70U, 0x0042FC04U, 0x0042FF24U, 0x0042FB98U, 0x0042FF24U};
#endif
