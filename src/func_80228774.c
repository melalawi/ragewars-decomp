#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_800C7CB0;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_8024B4E4(void *arg0, s32 arg1);
extern void func_8024ADC0(void *arg0, Vec3 *arg1, s32 arg2);
extern void func_802536F4(s32 arg0, s32 arg1);

void func_80228774(void *arg0, void *arg1) {
    void *node;

    node = *(void **)((char *)arg0 + 0x20);
    if (node != 0) {
        do {
            void *owner;

            owner = *(void **)((char *)node + 0x5DC);
            if (owner != 0) {
                if (owner == arg1) {
                    void *actor;

                    actor = (char *)node + 0x2E8;
                    if (*(s32 *)((char *)owner + 0x24) == 0) {
                        if (*(s32 *)((char *)actor + 0x100) & 0x40000) {
                            void *resource;

                            resource = func_802518DC(
                                0, *(s32 *)((char *)actor + 0xC4),
                                *(s32 *)((char *)actor + 0xC4),
                                *(s32 *)((char *)actor + 0xD0),
                                4, 0, 0, &D_800C7CB0, 1);
                            if (resource != 0) {
                                void *linked;
                                void *temp;

                                linked = *(void **)((char *)actor + 0x1D8);
                                func_8024B4E4(actor, (s32)func_8028FD94(*(void **)resource, 0));
                                temp = *(void **)((char *)linked + 0x5DC);
                                if (temp != 0) {
                                    Vec3 delta;

                                    delta.x = *(f32 *)((char *)temp + 0x128) -
                                              *(f32 *)((char *)actor + 8);
                                    delta.y = 0.0f;
                                    delta.z = *(f32 *)((char *)*(void **)((char *)linked + 0x5DC) + 0x130) -
                                              *(f32 *)((char *)actor + 0x10);
                                    func_8024ADC0(actor, &delta, 1);
                                }
                                func_802536F4(0, (s32)resource);
                            }
                        }
                    } else {
                        goto generic;
                    }
                } else if (owner != 0) {
generic:
                    if (*(s32 *)((char *)node + 0x100) & 0x40000) {
                        void *resource;

                        resource = func_802518DC(
                            0, *(s32 *)((char *)node + 0xC4),
                            *(s32 *)((char *)node + 0xC4),
                            *(s32 *)((char *)node + 0xD0),
                            4, 0, 0, &D_800C7CB0, 1);
                        if (resource != 0) {
                            func_8024B4E4(node, (s32)func_8028FD94(*(void **)resource, 0));
                            func_802536F4(0, (s32)resource);
                        }
                    }
                }
            }
            node = *(void **)((char *)node + 0x16E0);
        } while (node != 0);
    }
}
