#include "common/types.h"
#include "span_1000/code_8022A8E0.h"
#include "types.h"






s32 func_8022A8F0_de(void *arg0) {
    char *record = ((func_802285C4_S1 *)(arg0))->unk20;
    s32 count = 0;
    if (record != 0) {
        do {
            if (((func_8022A8E0_S2 *)(record))->unk5FE != 0 && ((func_8022A8E0_S2 *)(record))->unk1450 == 0) {
                count += 1;
            }
            record = ((func_8022A8E0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C55C0_28[] = {0x00299F18U, 0x00299F9CU, 0x0029A020U, 0x0029A0A4U, 0x0029A134U, 0x0029A134U, 0x0029A134U, 0x00299E38U, 0x00299EA8U, 0x00400000U};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA8D0_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800CA8D8_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800CA8E0_8 = 0.0;
const double unbake_rodata_800CA8E8_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800CA8F0_8 = 2.7105049465376212e-20;
const double unbake_rodata_800CA8F8_8 = 1.0;
const double unbake_rodata_800CA900_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800CA908_8 = 2.7105049465376212e-20;
const double unbake_rodata_800CA910_8 = 1.0;
const double unbake_rodata_800CA918_8 = 1.0;
const double unbake_rodata_800CA920_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800CA928_8 = 2.7105049465376212e-20;
const double unbake_rodata_800CA930_8 = 1.4426950216293335;
const double unbake_rodata_800CA938_8 = 0.5;
const double unbake_rodata_800CA940_8 = 0.693359375;
const double unbake_rodata_800CA948_8 = 0.00021219444170128557;
const double unbake_rodata_800CA950_8 = 1.652032915444579e-05;
const double unbake_rodata_800CA958_8 = 0.0069435997866094112;
const double unbake_rodata_800CA960_8 = 0.00049586285604164004;
const double unbake_rodata_800CA968_8 = 0.055553868412971497;
const double unbake_rodata_800CA970_8 = 0.25;
const double unbake_rodata_800CA978_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800CA980_8 = 2.7105049465376212e-20;
const double unbake_rodata_800CA988_8 = 1.0;
const double unbake_rodata_800CA990_8 = 1.4426950216293335;
const double unbake_rodata_800CA998_8 = 0.5;
const double unbake_rodata_800CA9A0_8 = 0.693359375;
const double unbake_rodata_800CA9A8_8 = 0.00021219444170128557;
const double unbake_rodata_800CA9B0_8 = 1.652032915444579e-05;
const double unbake_rodata_800CA9B8_8 = 0.0069435997866094112;
const double unbake_rodata_800CA9C0_8 = 0.00049586285604164004;
const double unbake_rodata_800CA9C8_8 = 0.055553868412971497;
const double unbake_rodata_800CA9D0_8 = 0.25;
#elif defined(VERSION_EU)
const float unbake_rodata_800C56D0_4 = 50.0f;
const float unbake_rodata_800C56D4_4 = 60.0f;
const float unbake_rodata_800C56D8_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C56C0_4 = 4.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C55E0_40[] = {0x00297950U, 0x00297988U, 0x002979DCU, 0x002979DCU, 0x00297930U, 0x00297930U, 0x00297930U, 0x00297930U, 0x002979DCU, 0x002979DCU, 0x002979DCU, 0x002979DCU, 0x002979DCU, 0x002979DCU, 0x002979ACU, 0x002979C4U};
#endif
