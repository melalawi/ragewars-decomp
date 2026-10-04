#include "span_1000/code_8020A95C.h"
#include "types.h"








void func_8020D114_de(char *owner, s32 *output, s32 count) {
    s32 i;
    s32 done;
    s32 value;
    Node8020D114 *node;

    for (i = 0; i < count; i++) {
        output[i] = -1;
    }

    node = ((func_8020D114_S1 *)(owner))->unk24;
    value = ((func_8020D114_S1 *)(owner))->unk18;
    done = 0;
    if (node == 0) {
        goto not_found;
    }
    do {
        if (node->value == value) {
            owner = (char *)node;
            goto found;
        }
        node = node->next;
    } while (node != 0);
not_found:
    owner = 0;
found:
    if (((Node8020D114 *)owner)->parent == 0) {
        output[0] = ((Node8020D114 *)owner)->value;
        return;
    }

    while (done == 0) {
        for (i = count - 1; i > 0; i--) {
            output[i] = output[i - 1];
        }
        output[0] = ((Node8020D114 *)owner)->value;
        owner = (char *)((Node8020D114 *)owner)->parent;
        if (((Node8020D114 *)owner)->parent == 0) {
            done = 1;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C3638_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
const float unbake_rodata_800C364C_4 = 1.5f;
const float unbake_rodata_800C3650_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C8740_20[] = {0x0023D724U, 0x0023D818U, 0x0023D764U, 0x0023D8ACU, 0x0023D920U, 0x0023DA64U, 0x0023D680U, 0x0023D724U};
const float unbake_rodata_800C8760_4 = 1.0f;
const float unbake_rodata_800C8764_4 = 1.0f;
const float unbake_rodata_800C8768_4 = 1.0f;
const float unbake_rodata_800C876C_4 = 1.0f;
const float unbake_rodata_800C8770_4 = 1.0f;
const float unbake_rodata_800C8774_4 = 1.0f;
const float unbake_rodata_800C8778_4 = 1.0f;
const float unbake_rodata_800C877C_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C36A8_4 = 9.0f;
const float unbake_rodata_800C36AC_4 = 0.810000002f;
const float unbake_rodata_800C36B0_4 = 1.0f;
const float unbake_rodata_800C36B4_4 = 1.57079637f;
const float unbake_rodata_800C36B8_4 = 255.0f;
const float unbake_rodata_800C36BC_4 = 1.0f;
const float unbake_rodata_800C36C0_4 = 0.0666666701f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C36E0_4 = 1.0f;
const float unbake_rodata_800C36E4_4 = 15.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C3650_20[] = {0x0023D734U, 0x0023D828U, 0x0023D774U, 0x0023D8BCU, 0x0023D930U, 0x0023DA74U, 0x0023D690U, 0x0023D734U};
const float unbake_rodata_800C3670_4 = 1.0f;
const float unbake_rodata_800C3674_4 = 1.0f;
const float unbake_rodata_800C3678_4 = 1.0f;
const float unbake_rodata_800C367C_4 = 1.0f;
const float unbake_rodata_800C3680_4 = 1.0f;
const float unbake_rodata_800C3684_4 = 1.0f;
const float unbake_rodata_800C3688_4 = 1.0f;
const float unbake_rodata_800C368C_4 = 10.2399998f;
#endif
