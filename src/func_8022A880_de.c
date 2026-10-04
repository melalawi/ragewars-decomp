#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern void func_80285D30_de(s32 *);






void func_8022A880_de(void *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            func_80285D30_de(((ObjectLinks16E4_4 *)(record))->unk_698 + 0x140);
            ((struct IntegerStateD4 *) ((ObjectLinks16E4_4 *) record)->unk_698)->unk_D0 = 0;
            record = ((ObjectLinks16E4_4 *)(record))->unk_16E0;
        } while (record != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C55A0_8 = 1000.0;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA850_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800CA858_8 = 1.0;
const double unbake_rodata_800CA860_8 = 1.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5684_4 = 16.0f;
const float unbake_rodata_800C5688_4 = 1.0f;
const float unbake_rodata_800C568C_4 = 255.0f;
const float unbake_rodata_800C5690_4 = 256.0f;
const float unbake_rodata_800C5694_4 = 0.00281690131f;
const float unbake_rodata_800C5698_4 = 0.00450450461f;
const float unbake_rodata_800C569C_4 = 0.045045048f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C56A0_4 = (-0.667424023f);
const float unbake_rodata_800C56A4_4 = 0.953462005f;
const float unbake_rodata_800C56A8_4 = (-0.57207799f);
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C5520_40[] = {0x00296FF4U, 0x0029702CU, 0x00296F3CU, 0x00296F3CU, 0x00296FD4U, 0x00296FD4U, 0x00296FD4U, 0x00296FD4U, 0x00296F3CU, 0x00296F3CU, 0x00296F3CU, 0x00296F3CU, 0x00296F3CU, 0x00296F3CU, 0x00297050U, 0x00297064U};
const unsigned int unbake_rodata_800C5560_40[] = {0x00297248U, 0x00297280U, 0x002972D4U, 0x002972D4U, 0x00297228U, 0x00297228U, 0x00297228U, 0x00297228U, 0x002972D4U, 0x002972D4U, 0x002972D4U, 0x002972D4U, 0x002972D4U, 0x002972D4U, 0x002972A4U, 0x002972BCU};
#endif
