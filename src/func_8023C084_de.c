#include "common/types.h"
#include "span_1000/code_8023A4CC.h"
#include "types.h"
/* Releases one page of a resource's TLB slot: clears the odd (flag 1) or even page of the slot's entry in
 * D_80103F28 and, when the other page is still in use, remaps the slot with only that page through
 * func_802AD370_de; otherwise it unmaps the slot through func_802AD3F0_de and frees its virtual page. The
 * resource then has no slot. */





extern Entry_func_8023B9C0_eu D_800FFF28[];
extern char D_8014E000;
extern void func_802AD370_de(s32, s32, s32, s32, s32, s32);
extern void func_802AD3F0_de(s32);

void func_8023C084_de(Mapping *mapping) {
    s32 slot;

    if (mapping->slot == 0xFF) {
        return;
    }
    if (mapping->flags & 1) {
        D_800FFF28[mapping->slot].slot = 0xFF;
        slot = mapping->slot;
        if (D_800FFF28[slot].team == 0xFF) {
            goto unmap;
        }
        func_802AD370_de(slot, 0, D_800FFF28[slot].id << 12,
                      ((s32)&D_8014E000 & 0x3FFFFFF) + (D_800FFF28[slot].team << 12), -1, 7);
    } else {
        D_800FFF28[mapping->slot].team = 0xFF;
        slot = mapping->slot;
        if (D_800FFF28[slot].slot == 0xFF) {
        unmap:
            func_802AD3F0_de(slot);
            D_800FFF28[mapping->slot].id = 0xFFFF;
        } else {
            func_802AD370_de(slot, 0, D_800FFF28[slot].id << 12, -1,
                          ((s32)&D_8014E000 & 0x3FFFFFF) + (D_800FFF28[slot].slot << 12), 7);
        }
    }
    mapping->slot = 0xFF;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC1D4_4 = 255.0f;
const float unbake_rodata_800DC1D8_4 = 4.0f;
const float unbake_rodata_800DC1DC_4 = 210.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1450_4 = 1.0f;
const float unbake_rodata_800E1454_4 = 0.00999999978f;
const float unbake_rodata_800E1458_4 = 1.20000005f;
const float unbake_rodata_800E145C_4 = 0.0500000007f;
const float unbake_rodata_800E1460_4 = 1.0f;
const float unbake_rodata_800E1464_4 = 0.00999999978f;
const float unbake_rodata_800E1468_4 = 1.0f;
const float unbake_rodata_800E146C_4 = 0.00999999978f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E2234_10[] = {0x80, 0x0D, 0x09, 0x98, 0x80, 0x0D, 0x56, 0x28, 0x80, 0x0D, 0xAD, 0x20, 0x80, 0x0D, 0xEA, 0xDC};
const unsigned char unbake_rodata_800E2244_10[] = {0x80, 0x0D, 0x09, 0xB0, 0x80, 0x0D, 0x56, 0x48, 0x80, 0x0D, 0xAD, 0x38, 0x80, 0x0D, 0xEA, 0xF4};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDA9C_C[] = {0x80, 0x0D, 0x10, 0x8C, 0x80, 0x0D, 0x59, 0x44, 0x80, 0x0D, 0xA7, 0x9C};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D53B6_2[] = {0x01, 0x00};
#endif
