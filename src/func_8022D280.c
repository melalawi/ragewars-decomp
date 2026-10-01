#include "basetypes.h"

#include "actor.h"

extern s32 D_800CED30;

void func_8022D280(Actor *arg0) {
    s32 temp_v0;

    arg0->unk_0x0860 = 0;
    func_8044ACCC((s32) arg0);
    temp_v0 = arg0->flags & 0xFF7FFFFF;
    arg0->flags = temp_v0;
    arg0->unk_0x001C = 0;
    arg0->unk_0x0020 = 0;
    arg0->unk_0x0024 = 0;
    arg0->unk_0x11D8 = 0.0f;
    arg0->flags = temp_v0 | 0x01000000;
    arg0->unk_0x11FC = 0;
    arg0->flags = temp_v0 | 0x01000000;
    if (arg0->unk_0x13B4 == &D_800CED30) {
        arg0->unk_0x086C = 0x5E24;
    } else {
        arg0->unk_0x086C = 1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C8700_4 = 1.22173059f;
const float unbake_rodata_800C8704_4 = 0.87266469f;
const float unbake_rodata_800C8708_4 = 0.52359885f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CD390_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C8190_18[] = {0x002B423CU, 0x002B424CU, 0x002B426CU, 0x002B427CU, 0x002B425CU, 0x002B428CU};
const double unbake_rodata_800C81A8_8 = 16384.0;
const float unbake_rodata_800C81B0_4 = 0.00100000005f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C8930_60[] = {0x002AEF60U, 0x002AF3C8U, 0x002AF16CU, 0x002AF3C8U, 0x002AF3C8U, 0x002AEF90U, 0x002AEFD8U, 0x002AF180U, 0x002AF3E0U, 0x002AEF70U, 0x002AF194U, 0x002AF3E0U, 0x002AF318U, 0x002AF334U, 0x002AF38CU, 0x002AF1ECU, 0x002AF20CU, 0x002AF278U, 0x002AF3E0U, 0x002AF3E0U, 0x002AF3E0U, 0x002AF16CU, 0x002AF034U, 0x002AF0E8U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C7A20_20[] = {0x00, 0x14, 0x18, 0x18, 0x1C, 0x1C, 0x1C, 0x1C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x04, 0x08, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10};
const unsigned int unbake_rodata_800C7A40_24[] = {0x002BC1E4U, 0x002BC1A8U, 0x002BC184U, 0x002BBFC8U, 0x002BBF6CU, 0x002BC11CU, 0x002BBF28U, 0x002BBF38U, 0x002BBF48U};
#endif
