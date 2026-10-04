#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

/* Sets flag 0x100 on the second object and triggers event 0xF on the first when the first is not in states 0x13 to 0x15 or 0x26, is not flagged 0x8000, and the second object's descriptor bit 1 and flag 0x80 are set, returning whether it fired. Adapted from func_8022C6E4_de with the flag tests, the excluded state and the event number changed. */
extern void func_802227F4_de(void *, void *, s32);






s32 func_8022C760_de(void *arg0, void *arg1) {
    s16 state = ((ObjectState668 *)(arg0))->unk_650;
    s32 blocked;
    s32 flags;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if (((struct func_80204468_S3 *) ((ObjectLinks3C *) arg1)->unk_18)->unk14 & 1) {
            if (((ObjectState668 *)(arg0))->unk_650 == 0x26) {
                return 0;
            }
            if (((ObjectState668 *)(arg0))->unk_664 & 0x8000) {
                return 0;
            }
            flags = ((ObjectLinks3C *)(arg1))->unk_38;
            if (flags & 0x80) {
                goto fire;
            }
        }
        return 0;
    }
    return 0;
fire:
    ((ObjectLinks3C *)(arg1))->unk_38 = flags | 0x100;
    func_802227F4_de(arg0, arg1, 0xF);
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
