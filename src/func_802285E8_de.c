#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "span_1000/types.h"
#include "types.h"









extern f32 D_800CD738;
extern s32 D_801427BC;
extern s32 D_801427D4;
extern s32 func_80245798_de(void);
extern void *func_8025CC6C_de(void);
extern s32 func_8025CA24_de(void *, void *);
extern void func_8024BE3C_de(void *arg0);
extern void func_80246E44_de(char *);












void func_802285E8_de(char *arg0) {
    char *actor;

    if (D_801427BC == 11 || D_801427BC == 8) {
        return;
    }
    actor = ((func_802285C4_S1 *)(arg0))->unk20;
    while (actor != 0) {
        if (func_80245798_de() != 0 || ((func_802285C4_S2 *)(actor))->unk5EA == 0) {
            void *work;

            work = func_8025CC6C_de();
            func_8025CA24_de(work, ((func_802285C4_S2 *)(actor))->unk11BC.v0);
            ((func_802285C4_S2 *)(actor))->unk11BC.v1 = 0;
            work = func_8025CC6C_de();
            func_8025CA24_de(work, ((func_802285C4_S2 *)(actor))->unk11C0.v0);
            ((func_802285C4_S2 *)(actor))->unk11C0.v1 = 0;
        } else if (D_801427D4 == 0) {
            void *owner = ((func_802285C4_S2 *)(actor))->unk5DC;
            s32 blocked;

            if (owner == 0) {
                blocked = 0;
            } else {
                blocked = ((func_8021CD70_S4 *)(owner))->unk564 != 0;
            }
            if (blocked == 0) {
                Block *base;
                s32 old_value;
                s32 new_value;
                f32 saved_value;

                base = &((func_802285C4_S2 *)(actor))->unk2E8;
                old_value = ((Actor_func_802285E8_de *)actor)->value86C;
                saved_value = D_800CD738;
                ((Actor_func_802285E8_de *)actor)->flags |= 0x200;
                base->value = 0x10;
                base->flags &= 0xFFFDFFFF;
                func_8024BE3C_de(base);
                if (((func_802285C4_S2 *)(actor))->unk11D8 <= 0.0f) {
                    func_80246E44_de((char *)base);
                }
                new_value = ((func_802285C4_S2 *)(actor))->unk86C;
                D_800CD738 = saved_value;
                if (old_value != new_value) {
                    ((func_802285C4_S2 *)(actor))->unk10E = 0;
                }
                ((func_802285C4_S4 *)(actor))->unk2F0 = ((func_802285C4_S2 *)(actor))->unk8;
                ((func_802285C4_S4 *)(actor))->unk354 = ((func_802285C4_S2 *)(actor))->unk6C;
                ((func_802285C4_S4 *)(actor))->unk2FC = ((func_802285C4_S2 *)(actor))->unk14;
                ((func_802285C4_S4 *)(actor))->unk344 = ((func_802285C4_S2 *)(actor))->unk5C;
                ((func_802285C4_S4 *)(actor))->unk3E8 &= ~0x200;
            }
        }
        actor = ((func_802285C4_S2 *)(actor))->unk16E0;
    }
}
