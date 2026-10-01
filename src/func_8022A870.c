#include "basetypes.h"

extern void func_80285D00(s32 *);

typedef struct func_8022A870_S1 func_8022A870_S1;
typedef struct func_8022A870_S2 func_8022A870_S2;
struct func_8022A870_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A870_S2 {
    char pad0[0x698];
    char* unk698;
    char pad698[0x16E0 - 0x698 - sizeof(char*)];
    char* unk16E0;
};

void func_8022A870(void *object) {
    char *record = ((func_8022A870_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            func_80285D00(((func_8022A870_S2 *)(record))->unk698 + 0x140);
            *(s32 *)(((func_8022A870_S2 *)(record))->unk698 + 0xD0) = 0;
            record = ((func_8022A870_S2 *)(record))->unk16E0;
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
