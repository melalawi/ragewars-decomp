#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "span_1000/types.h"
#include "types.h"



extern char D_800C2BC0_de;

extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_8024B4F4_de(void *arg0, s32 arg1);
extern void func_8024ADD0_de(void *arg0, Vec3 *arg1, s32 arg2);
extern void func_80253754_de(s32 arg0, s32 arg1);
















void func_80228798_de(void *arg0, void *arg1) {
    void *node;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            void *owner;

            owner = ((func_80228774_S2 *)(node))->unk5DC;
            if (owner != 0) {
                if (owner == arg1) {
                    void *actor;

                    actor = &((func_80228774_S2 *)(node))->unk2E8;
                    if (((func_80207B5C_S2 *)(owner))->unk24 == 0) {
                        if (((func_80228774_S4 *)(actor))->unk100 & 0x40000) {
                            void *resource;

                            resource = func_8025193C_de(
                                0, ((func_80228774_S4 *)(actor))->unkC4,
                                ((func_80228774_S4 *)(actor))->unkC4,
                                ((func_80228774_S4 *)(actor))->unkD0,
                                4, 0, 0, &D_800C2BC0_de, 1);
                            if (resource != 0) {
                                void *linked;
                                void *temp;

                                linked = ((func_80228774_S4 *)(actor))->unk1D8;
                                func_8024B4F4_de(actor, (s32)func_8028FDB4_de(*(void **)resource, 0));
                                temp = ((func_80228774_S5 *)(linked))->unk5DC;
                                if (temp != 0) {
                                    Vec3 delta;

                                    delta.x = ((func_80228774_S6 *)(temp))->unk128 -
                                              ((func_80228774_S4 *)(actor))->unk8;
                                    delta.y = 0.0f;
                                    delta.z = ((func_80228774_S7 *)(((func_80228774_S5 *)(linked))->unk5DC))->unk130 -
                                              ((func_80228774_S4 *)(actor))->unk10;
                                    func_8024ADD0_de(actor, &delta, 1);
                                }
                                func_80253754_de(0, (s32)resource);
                            }
                        }
                    } else {
                        goto generic;
                    }
                } else if (owner != 0) {
generic:
                    if (((func_80228774_S2 *)(node))->unk100 & 0x40000) {
                        void *resource;

                        resource = func_8025193C_de(
                            0, ((func_80228774_S2 *)(node))->unkC4,
                            ((func_80228774_S2 *)(node))->unkC4,
                            ((func_80228774_S2 *)(node))->unkD0,
                            4, 0, 0, &D_800C2BC0_de, 1);
                        if (resource != 0) {
                            func_8024B4F4_de(node, (s32)func_8028FDB4_de(*(void **)resource, 0));
                            func_80253754_de(0, (s32)resource);
                        }
                    }
                }
            }
            node = ((func_80228774_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}
