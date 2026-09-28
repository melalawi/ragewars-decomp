/* Forwards arg1's word at 0x1C to func_8044A37C and always reports success. */
#include "basetypes.h"

extern s32 func_8044A37C(s32 arg0);

typedef struct {
    char pad[0x1C];
    s32 unk1C;
} Handle8043DCC0;

s32 func_8043DCC0(void *arg0, Handle8043DCC0 *arg1) {
    func_8044A37C(arg1->unk1C);
    return 1;
}
