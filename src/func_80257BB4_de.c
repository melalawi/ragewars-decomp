#include "common/types.h"
#include "span_1000/code_80256234.h"
#include "types.h"





extern char D_80140FC8;

extern void *func_802395A4_de(s32 *, Vec3 *);
extern s32 func_8025BA4C_de(void *, s32);
extern f32 func_8025C10C_de(Vec3 *, void *);
extern s32 func_8025BDAC_de(void *, s32, s32);
extern s32 func_80259260_de(void *, Item57BD4 *, Vec3 *, s32, s32);
extern void func_8025B920_de(void *, s32, s32);
extern void *func_8025B1C8_de(void *, Item57BD4 *, s32, s32);
extern void func_8025BB5C_de(void *, Vec3 *, s32);
extern void func_8025BB7C_de(void *, s32);
extern void func_8025BB84_de(void *, Item57BD4 *, s32);
extern void func_802577F4_de(void *, void *, s32, Vec3 *);
extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *, s32, s32);








s32 func_80257BB4_de(void *arg0, Item57BD4 *arg1, Vec3 *arg2, s32 arg3,
                  s32 arg4, s32 arg5, s32 arg6) {
    void *node;

    ((func_80257BD4_S1 *)(arg0))->unk2B98 = func_802395A4_de(&D_80140FC8, arg2);
    if (arg1->flags & 1) {
        if (func_8025BA4C_de(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C) != 0) {
            return -1;
        }
        if (func_8025C10C_de(arg2, (char *)((func_80257BD4_S1 *)(arg0))->unk2B98 + 0x128) == 0.0f) {
            return -1;
        }
    }
    if ((arg1->flags & 0x1000) && ((func_80257BD4_S1 *)(arg0))->unk2B90 != -1) {
        if (func_8025BDAC_de(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C,
                         ((func_80257BD4_S1 *)(arg0))->unk2B90) != -1) {
            return -1;
        }
    }
    if (arg1->field2 != 0) {
        return func_80259260_de(&((func_80257BD4_S1 *)(arg0))->unk138, arg1, arg2, arg3, arg5);
    }
    if (arg1->flags & 0x40) {
        func_8025B920_de(&((func_80257BD4_S1 *)(arg0))->unk1DB8, ((func_80257BD4_S1 *)(arg0))->unk2B8C, arg1->field0);
    }
    node = func_8025B1C8_de(&((func_80257BD4_S1 *)(arg0))->unk1DB8, arg1, arg3, arg4);
    if (node == 0) {
        return -1;
    }
    func_8025BB5C_de(node, arg2, arg6);
    func_8025BB7C_de(node, ((func_80257BD4_S1 *)(arg0))->unk2B8C);
    func_8025BB84_de(node, arg1, arg5);

    {
        char *queue = &((func_80257BD4_S1 *)(arg0))->unk110;
        u32 token = func_802BCF30_de();
        s32 count = ((MenuRules *)(queue))->locked + 1;
        ((MenuRules *)(queue))->locked = count;
        if (count != 1) {
            func_802BCF50_de(token);
            func_802BB2A0_de(queue, 0, 1);
        } else {
            func_802BCF50_de(token);
        }
    }
    func_802577F4_de(arg0, ((Draw *)(node))->model, 0, arg2);
    {
        char *queue = &((func_80257BD4_S1 *)(arg0))->unk110;
        u32 token = func_802BCF30_de();
        s32 count = ((MenuRules *)(queue))->locked - 1;
        ((MenuRules *)(queue))->locked = count;
        if (count != 0) {
            func_802BCF50_de(token);
            func_802BB420_de(queue, 0, 1);
        } else {
            func_802BCF50_de(token);
        }
    }
    return 0;
}
