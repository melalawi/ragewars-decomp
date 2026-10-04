#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/types.h"
#include "types.h"
























extern s32 func_8028FE28_de(s32 *arg0, s32 arg1, s32 arg2);
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_802540F4_de(s32, void **, s32, void *, s32);
extern void func_80253754_de(s32, void *);
extern s32 func_8028FE3C_de(s32, s32, s32, s32 *);
extern void *func_8028FDB4_de(void *, s32);
extern void func_8026EE20_de(void *, s32, void *);
extern void func_80262480_de(void *);
extern s32 func_80246A08_de(void *, s32, s32);
extern char D_800C389C_de;
extern char D_800C38B0_de;
extern char D_800C38C4_de;





void func_80246BE8_de(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp28;
    void **resource1;
    void **resource2;
    s32 *entry;
    void *temp;
    void *node;
    s32 key;
    s32 found;

    ((Access_s32_D8 *)(arg0))->field = -1;
    ((func_8024575C_S1 *)(arg0))->unkDC = 0;
    ((MenuPanelRoot *)(arg0))->window = 0;
    ((func_80203C40_S1 *)(arg0))->unk100 &= 0xFFFBFFFF;
    key = func_8028FE28_de(arg1, arg2, ((func_8022BC04_S2 *)(arg0))->unk4);
    resource1 = func_8025193C_de(0, key, key, 0x18, 0, 0, 0, &D_800C389C_de, 1);
    if (resource1 != 0) {
        entry = *resource1;
        ((func_80264874_S1 *)(arg0))->unkCC = func_8028FE28_de(entry, key, 1);
        found = func_802540F4_de(0, &sp28, ((func_80264874_S1 *)(arg0))->unkCC, &D_800C38B0_de, 1);
        if (found != 0) {
            ((Access_u8_E7 *)(arg0))->field = ((Access_u8_3 *)(sp28))->field;
            ((Access_s32_D4 *)(arg0))->field = ((((struct Shape_func_8020AF9C_de_2 *)(sp28))->field_0 * 4) + 0xF) & ~7;
            func_80253754_de(0, (void *)found);
        }
        ((Access_s32_C4 *)(arg0))->field = func_8028FE3C_de((s32)entry, key, 0, &((func_80246BD8_S1 *)(arg0))->unkD0);
        ((Access_s32_C8 *)(arg0))->field = func_8028FE28_de(entry, key, 2);
        resource2 = func_8025193C_de(0, ((Access_s32_C4 *)(arg0))->field,
                                 ((Access_s32_C4 *)(arg0))->field, ((Access_s32_D0 *)(arg0))->field,
                                 0, 0, 0, &D_800C38C4_de, 1);
        if (resource2 != 0) {
            node = *resource2;
            temp = func_8028FDB4_de(node, 0);
            ((void (*)(void *, void *))((Access_void_28C *)(arg0))->field)(arg0, (char *)arg0 + 0x170);
            func_8026EE20_de(&((func_80246BD8_S1 *)(arg0))->unk74, (s32)temp, (char *)arg0 + 0xE8);
            func_80262480_de((char *)arg0 + 0x104);
            func_80262480_de((char *)arg0 + 0x118);
            ((Access_u8_E6 *)(arg0))->field = ((func_80206930_S3 *)func_8028FDB4_de(node, 1))->unk7;
            ((func_80203C40_S1 *)(arg0))->unk100 |= 0x40000;
            if (arg3 > 0) {
                arg3 = func_80246A08_de(arg0, arg3, -1);
            } else {
                arg3 = -arg3;
            }
            if (arg3 == -1) {
                arg3 = 0;
            }
            ((Access_s16_10A *)(arg0))->field = arg3;
            ((Access_s8_10E *)(arg0))->field = 0;
            if (((Access_s16_108 *)(arg0))->field != arg3) {
                ((Access_s8_10F *)(arg0))->field = 1;
            }
            ((Access_s8_1A5 *)(arg0))->field = -1;
            ((Access_s8_23A *)(arg0))->field = arg3;
            func_80253754_de(0, resource2);
        }
        func_80253754_de(0, resource1);
    }
}
