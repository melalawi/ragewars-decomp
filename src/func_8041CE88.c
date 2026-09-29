#include "basetypes.h"

typedef struct {
    char pad0[0x274];
    u16 unk274;
} Unk8041CE88;

extern void func_8041C680(Unk8041CE88 *arg0);

/* Sets field 0x274 of arg0 to 0xFFFF and then calls func_8041C680 on it. */
void func_8041CE88(Unk8041CE88 *arg0) {
    arg0->unk274 = 0xFFFF;
    func_8041C680(arg0);
}
