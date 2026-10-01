#include "basetypes.h"

/* Registers a memory region: rounds its size to whole pages, places it after the last region of the chain at D_80103F88 on an even page at or above 0x800, marks every page of its map as free, and maps it through func_802C0510. */

typedef struct Region {
    struct Region *next;
    u16 start;
    u16 pages;
    s32 pad8;
    s32 padC;
    u8 *map;
    s32 pad14;
    u8 data[1];
} Region;

typedef struct RegionDesc {
    s32 pad0;
    s32 size;
    Region *region;
    void *mapping;
} RegionDesc;

extern Region D_80103F88;
extern void func_802C0510(void *mapping, s32 address, s32 mode);

void func_8023CDC4(RegionDesc *desc)
{
    Region *p;
    Region *prev;
    Region *r;
    unsigned int start;
    s32 pages;
    s32 count;
    u8 *map;
    s32 i;
    s32 fill;

    start = 0;
    pages = (desc->size + 0xFFF) / 0x1000;
    p = &D_80103F88;
    prev = 0;
    r = desc->region;
    r->map = r->data;
    count = (pages + 1) & ~1;
    for (; p != 0; p = p->next) {
        prev = p;
        start = p->start + p->pages;
    }
    if (start & 1) {
        start++;
    }
    if (start < 0x800) {
        start = 0x800;
    }
    i = count;
    r->start = start;
    r->pages = pages;
    r->next = 0;
    prev->next = r;
    map = r->map;
    fill = 0xFF;
    while (i-- != 0) {
        *map++ = fill;
    }
    func_802C0510(desc->mapping, start << 12, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC6E0_38[] = {0x00429988U, 0x004299C8U, 0x00429974U, 0x004299C8U, 0x00429960U, 0x004299C8U, 0x0042999CU, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299B0U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E16B0_4 = 0.0666666701f;
const float unbake_rodata_800E16B4_4 = 0.0166666675f;
const float unbake_rodata_800E16B8_4 = 5.0f;
const float unbake_rodata_800E16BC_4 = 0.0666666701f;
const float unbake_rodata_800E16C0_4 = 0.0166666675f;
const float unbake_rodata_800E16C4_4 = 10.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E2804_10[] = {0x80, 0x0D, 0x0C, 0xDC, 0x80, 0x0D, 0x63, 0x44, 0x80, 0x0D, 0xB0, 0x64, 0x80, 0x0D, 0xEE, 0x20};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDEBC_C[] = {0x80, 0x0D, 0x16, 0x08, 0x80, 0x0D, 0x68, 0xF4, 0x80, 0x0D, 0xAD, 0x2C};
#elif defined(VERSION_DE)
const double unbake_rodata_800DCC30_8 = 4294967296.0;
const float unbake_rodata_800DCC38_4 = 2.14748365e+09f;
#endif
