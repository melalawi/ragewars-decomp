#include "common/types.h"
#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
typedef struct Owner Owner;



/** Return bit two of the nested state word. */
unsigned int func_8024E29C_de(char *object) {
    return (((struct func_8029A9E0_S1 *) ((Owner *) object)->track)->unk4 >> 2) & 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FDB5A_1[] = {0x13};
const unsigned char unbake_rodata_800FDB5B_1[] = {0x2C};
#elif defined(VERSION_EU)
const float unbake_rodata_800EEB78_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9B78_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800E0170_4 = 2.52233724e-44f;
const float unbake_rodata_800E0174_4 = 2.1019477e-44f;
const float unbake_rodata_800E0178_4 = 7.28675201e-44f;
const float unbake_rodata_800E017C_4 = 1.31722056e-43f;
#endif
