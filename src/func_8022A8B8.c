#include "basetypes.h"

typedef struct func_8022A8B8_S1 func_8022A8B8_S1;
typedef struct func_8022A8B8_S2 func_8022A8B8_S2;
struct func_8022A8B8_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A8B8_S2 {
    char pad0[0x670];
    f32 unk670;
    char pad670[0x16E0 - 0x670 - sizeof(f32)];
    char* unk16E0;
};

void func_8022A8B8(char *object, f32 arg1) {
    char *record = ((func_8022A8B8_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((func_8022A8B8_S2 *)(record))->unk670 = arg1;
            record = ((func_8022A8B8_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C55B0_8 = 1000.0;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA868_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800CA870_8 = 0.0;
const double unbake_rodata_800CA878_8 = 0.70710676908493042;
const double unbake_rodata_800CA880_8 = 0.5;
const double unbake_rodata_800CA888_8 = 0.5;
const double unbake_rodata_800CA890_8 = (-0.78956115245819092);
const double unbake_rodata_800CA898_8 = 16.383943557739258;
const double unbake_rodata_800CA8A0_8 = 35.667976379394531;
const double unbake_rodata_800CA8A8_8 = 312.0322265625;
const double unbake_rodata_800CA8B0_8 = 64.124946594238281;
const double unbake_rodata_800CA8B8_8 = 769.49932861328125;
const double unbake_rodata_800CA8C0_8 = (-0.00021219444170128557);
const double unbake_rodata_800CA8C8_8 = 0.693359375;
#elif defined(VERSION_EU)
const float unbake_rodata_800C56A0_4 = 1.0f;
const float unbake_rodata_800C56A4_4 = 0.5f;
const float unbake_rodata_800C56A8_4 = 0.045045048f;
const float unbake_rodata_800C56AC_4 = 67.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C56B0_4 = 255.0f;
const float unbake_rodata_800C56B4_4 = 0.17453295f;
const float unbake_rodata_800C56B8_4 = 0.400000006f;
const float unbake_rodata_800C56BC_4 = 0.699999988f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C55A0_40[] = {0x00297588U, 0x002975C0U, 0x00297614U, 0x00297614U, 0x00297568U, 0x00297568U, 0x00297568U, 0x00297568U, 0x00297614U, 0x00297614U, 0x00297614U, 0x00297614U, 0x00297614U, 0x00297614U, 0x002975E4U, 0x002975FCU};
#endif
