#include "common/types.h"
#include "span_1000/code_80256234.h"
#include "span_1000/code_8025AE3C.h"
#include "span_1000/code_8025C67C.h"
#include "span_C76B0/data.h"
#include "types.h"



extern u8 D_80142221;
extern f32 D_800C3EE0_de;

extern char D_80140FC8;

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);

extern void func_80259440_de(void *arg0);
extern void func_8025CC90_de(void *arg0);

extern void func_8025D450_de(void *arg0);
extern s32 func_802934F8_de(void);
extern void *func_802395A4_de(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DD4_de(void *, s32, Vec3, s32, s32);










s32 func_8025842C_de(void *arg0) {
    char *object = arg0;
    u8 *bytes = &D_80142221;
    char *queue;
    u32 mask;
    s32 count;

    ((func_8025844C_S1 *)(object))->unk2BA0 = (f32)bytes[0] * D_800C3EE0_de;
    ((func_8025844C_S1 *)(object))->unk2BA4 = (f32)bytes[-1] * D_800C3EE0_de;
    ((func_8025844C_S1 *)(object))->unk2BA8 = (f32)bytes[1] * D_800C3EE0_de;
    queue = object + 0x110;
    ((func_8025844C_S1 *)(object))->unk2BB0 = bytes[-2];
    mask = func_802BCF30_de();
    count = ((MenuRules *)(queue))->locked + 1;
    ((MenuRules *)(queue))->locked = count;
    if (count != 1) {
        func_802BCF50_de(mask);
        func_802BB2A0_de(queue, 0, 1);
    } else {
        func_802BCF50_de(mask);
    }

    func_8025BD00_de(&((func_8025844C_S1 *)(object))->unk1DB8);
    {
        char *queue2 = object + 0x110;
        u32 mask2 = func_802BCF30_de();
        s32 count2 = ((MenuRules *)(queue2))->locked - 1;

        ((MenuRules *)(queue2))->locked = count2;
        if (count2 != 0) {
            func_802BCF50_de(mask2);
            func_802BB420_de(queue2, 0, 1);
        } else {
            func_802BCF50_de(mask2);
        }
    }

    func_80259440_de((char *)object + 0x138);
    func_8025CC90_de((char *)object + 0x2BC0);
    queue = object + 0x1D64;
    func_8025D928_de(queue);
    func_8025D450_de(queue);

    if (D_800CB720 != 0 &&
        ((func_8025844C_S1 *)(object))->unk2BB4 != 0 &&
        func_802934F8_de() != 0 &&
        ((func_8025844C_S1 *)(object))->unk134 > 0) {
        Vec3 zero;
        void *result;
        Vec3 *vec;

        zero.z = 0.0f;
        zero.y = 0.0f;
        zero.x = 0.0f;
        result = func_802395A4_de(&D_80140FC8, &zero);
        vec = &((func_8023945C_S1 *)(result))->unk128;
        if ((((func_8025844C_S1 *)(object))->unk104 & 3) == 0) {
            func_80257DD4_de(object, ((func_8025844C_S1 *)(object))->unk134, *vec, 0, -1);
        }
    }
    return ++((func_8025844C_S1 *)(object))->unk104;
}
