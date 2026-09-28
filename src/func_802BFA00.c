/* __osViSwapContext, drafted from ultralib src/io/viswapcontext.c (2.0I: vStart straight from the
   field registers). The unsigned-to-float and float-to-unsigned conversions of the y scale use the
   cartridge's 2^32 and 2^31 constants, so both are written out. */
#include "basetypes.h"

typedef struct {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
} OSViCommonRegs;

typedef struct {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
} OSViFieldRegs;

typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
} OSViMode;

typedef struct {
    f32 factor;
    u16 offset;
    u32 scale;
} __OSViScale;

typedef struct {
    u16 state;
    u16 retraceCount;
    void *framep;
    OSViMode *modep;
    u32 control;
    void *msgq;
    void *msg;
    __OSViScale x;
    __OSViScale y;
} __OSViContext;

extern __OSViContext *D_800D8440;
extern __OSViContext *D_800D8444;
extern f64 D_800CCC20; /* 2^32 */
extern f32 D_800CCC28; /* 2^31 */
extern u32 func_802C0CB0(void *addr);

#define IO_READ(addr) (*(volatile u32 *)(addr))
#define IO_WRITE(addr, value) (*(volatile u32 *)(addr) = (value))

void func_802BFA00(void)
{
    register OSViMode *vm;
    register __OSViContext *vc;
    u32 origin;
    u32 hStart;
    u32 nomValue;
    u32 field;
    f64 nom;
    f32 scale;
    u32 yscale;
    u32 *yscalep;
    __OSViContext **curr;

    field = 0;
    vc = D_800D8444;
    vm = vc->modep;

    field = IO_READ(0xA4400010) & 1;

    origin = func_802C0CB0(vc->framep) + (vm->fldRegs[field].origin);
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
            nom += D_800CCC20;
        }
        scale = vc->y.factor * (f32)nom;
        /* The unsigned conversion in GCC's own order: large values take the offset path. */
        if (scale >= D_800CCC28) {
            goto large;
        }
        yscale = (s32)scale;
        goto converted;
    large:
        yscale = (s32)(scale - D_800CCC28) | 0x80000000;
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
        origin = func_802C0CB0(vc->framep);
    }

    if (vc->state & 0x80) {
        vc->y.scale = (vc->y.offset << 16) & (0x3FF << 16);
        origin = func_802C0CB0(vc->framep);
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

    curr = &D_800D8440;
    D_800D8444 = *curr;
    *curr = vc;
    *D_800D8444 = **curr;
}
