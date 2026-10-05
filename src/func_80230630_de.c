#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022F3E8.h"
#include "types.h"



extern char D_800C9698;
extern AudioState D_801427E0;

extern s32 func_80222AA4_de(void *arg0, s16 arg1);
extern s16 func_8022F96C_de(void *arg0);
extern void func_8022B9C4_de(void *arg0);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8022FDAC_de(void *arg0, void *arg1);












void func_80230630_de(void *arg0, void *arg1) {
    s32 state;
    void *actor;
    AudioState *audio;
    s32 mode;

    actor = ((func_8020A028_S3 *)(arg0))->unk1D8;
    state = *(s16 *)(&D_800C9698 +
                     (((func_80230620_S2 *)(actor))->unk650 * 0x18));
    if (((func_80230620_S3 *)(arg1))->unkCB != 0) {
        if (func_80222AA4_de(actor, ((func_80230620_S2 *)(actor))->unk62E) == 0) {
            if (((func_80230620_S3 *)(arg1))->unk13C == 2) {
                ((func_80230620_S3 *)(arg1))->unk13C = 1;
                if (func_80222AA4_de(actor, ((func_80230620_S2 *)(actor))->unk62E) == 0) {
                    ((func_80230620_S2 *)(actor))->unk770 = func_8022F96C_de(actor);
                }
            }
        }
    }
    func_8022B9C4_de(actor);
    ((func_80230620_S2 *)(actor))->unk11FC = 0;
    ((func_80230620_S4 *)(((func_80230620_S2 *)(actor))->unk698))->unk168 = 0;
    ((func_80230620_S3 *)(arg1))->unk138 = 0;

    audio = &D_801427E0;
    if ((audio->active != 0) &&
        (((func_8020EA10_S3 *)(((func_80230620_S2 *)(actor))->unk5D8))->unk8F != 0)) {
        if (((func_80230620_S2 *)(actor))->unk6B0 & 0x2000) {
            mode = audio->mode;
            switch (mode) {
            case 0:
                func_8025DE54_de(0x18A1,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            case 1:
                func_8025DE54_de(0x1969,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            case 2:
                func_8025DE54_de(0x1905,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            }
        }
    } else if ((state != 1) && (state != 7) &&
               (((func_80230620_S3 *)(arg1))->unkCB != 0)) {
        func_8022FDAC_de(arg0, arg1);
    }
}
