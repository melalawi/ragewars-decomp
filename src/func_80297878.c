#include "basetypes.h"

extern void func_80271FD8(void *out, void *a, void *b);
extern void func_80272088(void *out, void *a, void *b);
extern void func_802720EC(void *out);

void func_80297878(void *arg0, void *arg1, void *arg2, void *arg3) {
    u8 sp10[12];
    u8 sp20[12];

    func_80271FD8(sp10, arg2, arg1);
    func_80271FD8(sp20, arg3, arg2);
    func_80272088(arg0, sp20, sp10);
    func_802720EC(arg0);
    *(f32 *) ((u8 *) arg0 + 0xC) = (*(f32 *) ((u8 *) arg0 + 0x0) * *(f32 *) ((u8 *) arg1 + 0x0))
                                  + (*(f32 *) ((u8 *) arg0 + 0x4) * *(f32 *) ((u8 *) arg1 + 0x4))
                                  + (*(f32 *) ((u8 *) arg0 + 0x8) * *(f32 *) ((u8 *) arg1 + 0x8));
}
