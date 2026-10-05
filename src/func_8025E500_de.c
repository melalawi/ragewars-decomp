#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025E280.h"
#include "common/types_8a8189af7b05.h"

short func_8025E500_de(void *arg0) {
    return ((Request *)(arg0))->type;
}

short func_8025E50C_de(void *arg0) {
    return ((func_8025E52C_S1 *)(arg0))->unk2;
}

/** Return the signed byte at offset four in the supplied object. */
int func_8025E518_de(void *object) {
    return ((func_80242278_S1 *)(object))->unk4;
}

/** Return the signed byte at offset five. */
int func_8025E524_de(void *arg0) {
    return ((func_8025E544_S1 *)(arg0))->unk5;
}

/** Return the signed halfword at offset eight. */
int func_8025E530_de(char *object) {
    return ((func_8022BECC_S2 *)(object))->unk8;
}

short func_8025E53C_de(void *arg0) {
    return ((func_8025E55C_S1 *)(arg0))->unkA;
}

/** Return the upper two bits of the halfword at object offset 6. */
unsigned int func_8025E548_de(void *arg0) {
    return ((func_8020676C_S1 *)(arg0))->unk6 >> 14;
}

signed char func_8025E554_de(void *arg0) {
    return ((func_80250DBC_S2 *)(arg0))->unkE;
}

/** Read the signed object byte at offset 0xF. */
signed char func_8025E560_de(void *object) {
    return ((signed char *)object)[0xF];
}

/** Return the signed halfword stored at offset 0x10. */
int func_8025E56C_de(void *object) {
    return ((func_8025E58C_S1 *)(object))->unk10;
}

unsigned short func_8025E578_de(void *arg0) {
    return ((func_8020676C_S1 *)(arg0))->unk6 & 0x3FFF;
}

short func_8025E584_de(void *arg0) {
    return ((func_8025E5A4_S1 *)(arg0))->unk12;
}
