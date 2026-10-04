#include "span_1000/code_8020A95C.h"
#include "types.h"





s32 func_8020CCE8_de(EntryList8020CCE8 *list, s32 value, s32 *partners, s32 *indices) {
    s32 i;
    s32 found;

    i = 0;
    found = 0;
    if (list->count > 0) {
        do {
            s32 product = i * list->table->field_0;
            s32 offset = product + 8;
            u16 *entry;
            u16 *other_entry;

            entry = (u16 *)((char *)list->table + offset);
            other_entry = entry;

            if (entry[0] == value) {
                found++;
                *partners = entry[1];
                *indices = i;
                indices++;
                partners++;
            }
            if (other_entry[1] == value) {
                found++;
                *partners = other_entry[0];
                *indices = i;
                indices++;
                partners++;
            }
            i++;
        } while (i < list->count);
    }
    return found;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C3580_20[] = {0x0023D714U, 0x0023D808U, 0x0023D754U, 0x0023D89CU, 0x0023D910U, 0x0023DA54U, 0x0023D670U, 0x0023D714U};
const float unbake_rodata_800C35A0_4 = 1.0f;
const float unbake_rodata_800C35A4_4 = 1.0f;
const float unbake_rodata_800C35A8_4 = 1.0f;
const float unbake_rodata_800C35AC_4 = 1.0f;
const float unbake_rodata_800C35B0_4 = 1.0f;
const float unbake_rodata_800C35B4_4 = 1.0f;
const float unbake_rodata_800C35B8_4 = 1.0f;
const float unbake_rodata_800C35BC_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C86C4_4 = 0.5f;
const float unbake_rodata_800C86C8_4 = 20.4799995f;
const float unbake_rodata_800C86CC_4 = 1.0f;
const float unbake_rodata_800C86D0_4 = 1.0f;
const float unbake_rodata_800C86D4_4 = 1.53600001f;
const float unbake_rodata_800C86D8_4 = 20480.0f;
const float unbake_rodata_800C86DC_4 = 3.07200003f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C35D0_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C35E0_4 = 16.0f;
const float unbake_rodata_800C35E4_4 = 30.0f;
const float unbake_rodata_800C35E8_4 = 30.0f;
const float unbake_rodata_800C35EC_4 = 16.0f;
const float unbake_rodata_800C35F0_4 = 30.0f;
const float unbake_rodata_800C35F4_4 = 30.0f;
const float unbake_rodata_800C35F8_4 = 16.0f;
const float unbake_rodata_800C35FC_4 = 30.0f;
const float unbake_rodata_800C3600_4 = 30.0f;
const float unbake_rodata_800C3604_4 = 16.0f;
const float unbake_rodata_800C3608_4 = 30.0f;
const float unbake_rodata_800C360C_4 = 30.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C35D4_4 = 0.5f;
const float unbake_rodata_800C35D8_4 = 20.4799995f;
const float unbake_rodata_800C35DC_4 = 1.0f;
const float unbake_rodata_800C35E0_4 = 1.0f;
const float unbake_rodata_800C35E4_4 = 1.53600001f;
const float unbake_rodata_800C35E8_4 = 20480.0f;
const float unbake_rodata_800C35EC_4 = 3.07200003f;
#endif
