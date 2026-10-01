#include "basetypes.h"

/* Sets flag 0x100 on the second object and triggers event 0xF on the first when the first is not in states 0x13 to 0x15 or 0x26, is not flagged 0x8000, and the second object's descriptor bit 1 and flag 0x80 are set, returning whether it fired. Adapted from func_8022C6D4 with the flag tests, the excluded state and the event number changed. */
extern void func_802227D0(void *, void *, s32);

typedef struct func_8022C750_S1 func_8022C750_S1;
typedef struct func_8022C750_S2 func_8022C750_S2;
struct func_8022C750_S1 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x664 - 0x650 - sizeof(s16)];
    s32 unk664;
};
struct func_8022C750_S2 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x38 - 0x18 - sizeof(char*)];
    s32 unk38;
};

s32 func_8022C750(void *arg0, void *arg1) {
    s16 state = ((func_8022C750_S1 *)(arg0))->unk650;
    s32 blocked;
    s32 flags;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if (*(s32 *)(((func_8022C750_S2 *)(arg1))->unk18 + 0x14) & 1) {
            if (((func_8022C750_S1 *)(arg0))->unk650 == 0x26) {
                return 0;
            }
            if (((func_8022C750_S1 *)(arg0))->unk664 & 0x8000) {
                return 0;
            }
            flags = ((func_8022C750_S2 *)(arg1))->unk38;
            if (flags & 0x80) {
                goto fire;
            }
        }
        return 0;
    }
    return 0;
fire:
    ((func_8022C750_S2 *)(arg1))->unk38 = flags | 0x100;
    func_802227D0(arg0, arg1, 0xF);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C76B8_20[] = {0x002B5B10U, 0x002B5B34U, 0x002B5B74U, 0x002B5B58U, 0x002B5B90U, 0x002B5BACU, 0x002B5BF4U, 0x002B5C58U};
const float unbake_rodata_800C76D8_4 = 0.00100000005f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC9E8_20[] = {0x002BACB0U, 0x002BACD4U, 0x002BAD14U, 0x002BACF8U, 0x002BAD30U, 0x002BAD4CU, 0x002BAD94U, 0x002BADF8U};
const float unbake_rodata_800CCA08_4 = 0.00100000005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6460_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C63C8_1C[] = {0x002A8F24U, 0x002A8F34U, 0x002A8F64U, 0x002A8F44U, 0x002A8F54U, 0x002A8F54U, 0x002A8F64U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C75A0_18[] = {0x002B3F9CU, 0x002B3FACU, 0x002B3FCCU, 0x002B3FDCU, 0x002B3FBCU, 0x002B3FECU};
const double unbake_rodata_800C75B8_8 = 16384.0;
const float unbake_rodata_800C75C0_4 = 0.00100000005f;
#endif
