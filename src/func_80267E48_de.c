#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_C76B0/data.h"
#include "types.h"





extern s32 func_802394BC_de(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, Triple arg6);
extern char D_80140FC8;


void func_80267E48_de(s32 arg0, s32 arg1, s32 arg2, Triple t, Vec4s v) {
    func_802394BC_de(&D_80140FC8, (f32) v.x, (f32) v.y, (f32) v.z, (f32) v.w * D_800C4458_de, 0, t);
}
