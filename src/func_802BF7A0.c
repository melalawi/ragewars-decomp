/* With interrupts disabled, stores a video mode pointer in the next video context, marks the mode updated and copies the mode's control word (libultra osViSetMode). Adapted from func_802C04C0 with the body changed to the libultra osViSetMode shape. */
#include "basetypes.h"

typedef struct {
    u32 ctrl;
    u32 width;
} OSViCommonRegs;

typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
} OSViMode;

typedef struct {
    u16 state;
    u16 retraceCount;
    void *framep;
    OSViMode *modep;
    u32 control;
} __OSViContext;

extern __OSViContext *D_800D8444;
extern u32 func_802C2020(void);
extern void func_802C2040(u32);

void func_802BF7A0(OSViMode *modep) {
    register u32 saveMask = func_802C2020();

    D_800D8444->modep = modep;
    D_800D8444->state = 1;
    D_800D8444->control = D_800D8444->modep->comRegs.ctrl;
    func_802C2040(saveMask);
}
