#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153788: the second string through the jump table
   jtbl_800E0E48 for states 0 to 15, and D_800D781C for any other state. Returns zero. An earlier attempt misjudged this switch as a dispatch head whose
   cases lay outside the interval; its case bodies are inside it. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153788;
extern void *jtbl_800E0E48[];
extern char D_800D781C[];
extern char D_800D7820[];

s32 func_8040ACD4(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800E0E48[state];
state_other:
    field->text = D_800D781C;
    goto done;
case_1:
    field->text = D_800D7820;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBAC8_40[] = {0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU, 0x0040AD0CU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU, 0x0040AD0CU, 0x0040ACFCU, 0x0040AD0CU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0E48_40[] = {0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU, 0x0040AD0CU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU, 0x0040AD0CU, 0x0040ACFCU, 0x0040AD0CU, 0x0040ACFCU, 0x0040ACFCU, 0x0040AD0CU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED498_40[] = {0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8658_40[] = {0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0ACU, 0x0040B0ACU, 0x0040B0BCU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCE18_40[] = {0x0040AC7CU, 0x0040AC7CU, 0x0040AC7CU, 0x0040AC7CU, 0x0040AC7CU, 0x0040AC8CU, 0x0040AC8CU, 0x0040AC7CU, 0x0040AC7CU, 0x0040AC8CU, 0x0040AC8CU, 0x0040AC7CU, 0x0040AC8CU, 0x0040AC7CU, 0x0040AC7CU, 0x0040AC8CU};
#endif
