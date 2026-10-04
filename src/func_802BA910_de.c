#include "span_1000/code_802BF740.h"
#include "span_C76B0/data.h"
#include "types.h"
/* __osViSwapContext, drafted from ultralib src/io/viswapcontext.c (2.0I: vStart straight from the
   field registers). The unsigned-to-float and float-to-unsigned conversions of the y scale use the
   cartridge's 2^32 and 2^31 constants, so both are written out. */











extern __OSViContext_func_802BA910_de *D_800D4410;
extern __OSViContext_func_802BA910_de *D_800D4414;
 /* 2^32 */
 /* 2^31 */
extern u32 func_802BBBC0_de(void *addr);

#define IO_READ(addr) (*(volatile u32 *)(addr))
#define IO_WRITE(addr, value) (*(volatile u32 *)(addr) = (value))

void func_802BA910_de(void)
{
    register OSViMode_func_802BA910_de *vm;
    register __OSViContext_func_802BA910_de *vc;
    u32 origin;
    u32 hStart;
    u32 nomValue;
    u32 field;
    f64 nom;
    f32 scale;
    u32 yscale;
    u32 *yscalep;
    __OSViContext_func_802BA910_de **curr;

    field = 0;
    vc = D_800D4414;
    vm = vc->modep;

    field = IO_READ(0xA4400010) & 1;

    origin = func_802BBBC0_de(vc->framep) + (vm->fldRegs[field].origin);
    if (vc->state & 2) {
        vc->x.scale |= (vm->comRegs.xScale & ~0xFFF);
    } else {
        vc->x.scale = vm->comRegs.xScale;
    }

    if (vc->state & 4) {
        nomValue = vm->fldRegs[field].yScale & 0xFFF;
        yscalep = &vc->y.scale;
        nom = (s32)nomValue;
        if ((s32)nomValue < 0) {
            nom += D_800C79D0_de;
        }
        scale = vc->y.factor * (f32)nom;
        /* The unsigned conversion in GCC's own order: large values take the offset path. */
        if (scale >= D_800C79D8_de) {
            goto large;
        }
        yscale = (s32)scale;
        goto converted;
    large:
        yscale = (s32)(scale - D_800C79D8_de) | 0x80000000;
    converted:
        *yscalep = yscale;
        vc->y.scale |= vm->fldRegs[field].yScale & ~0xFFF;
    } else {
        vc->y.scale = vm->fldRegs[field].yScale;
    }

    hStart = vm->comRegs.hStart;

    if (vc->state & 0x20) {
        hStart = 0;
    }

    if (vc->state & 0x40) {
        vc->y.scale = 0;
        origin = func_802BBBC0_de(vc->framep);
    }

    if (vc->state & 0x80) {
        vc->y.scale = (vc->y.offset << 16) & (0x3FF << 16);
        origin = func_802BBBC0_de(vc->framep);
    }

    IO_WRITE(0xA4400004, origin);
    IO_WRITE(0xA4400008, vm->comRegs.width);
    IO_WRITE(0xA4400014, vm->comRegs.burst);
    IO_WRITE(0xA4400018, vm->comRegs.vSync);
    IO_WRITE(0xA440001C, vm->comRegs.hSync);
    IO_WRITE(0xA4400020, vm->comRegs.leap);
    IO_WRITE(0xA4400024, hStart);
    IO_WRITE(0xA4400028, vm->fldRegs[field].vStart);
    IO_WRITE(0xA440002C, vm->fldRegs[field].vBurst);
    IO_WRITE(0xA440000C, vm->fldRegs[field].vIntr);
    IO_WRITE(0xA4400030, vc->x.scale);
    IO_WRITE(0xA4400034, vc->y.scale);
    IO_WRITE(0xA4400000, vc->control);

    curr = &D_800D4410;
    D_800D4414 = *curr;
    *curr = vc;
    *D_800D4414 = **curr;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C78F0_8 = 4294967296.0;
const float unbake_rodata_800C78F8_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CCC20_8 = 4294967296.0;
const float unbake_rodata_800CCC28_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C85C0_8 = 4294967296.0;
const float unbake_rodata_800C85C8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C8F90_8 = 4294967296.0;
const float unbake_rodata_800C8F98_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C79D0_8 = 4294967296.0;
const float unbake_rodata_800C79D8_4 = 2.14748365e+09f;
#endif
