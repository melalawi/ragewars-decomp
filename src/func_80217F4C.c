/* Steps a control against its actor: returns at once while the actor's word at 0x5E0 is 0x11 or
   0x12, while its word at 0xCCC is set, while its float at 0x11D8 is above zero or while
   func_80245774 reports true; records at 0x380 of the control whether the byte at 0x82 of the
   actor's record at 0x5D8 is 1; with the actor in state 0xE returns when its byte at 0x48C is zero
   and otherwise stores func_80232AAC's result at 0x770 when bit 0x8000 of the word at 0xB0 of its
   block at 0x698 is set, stores func_8022FAE8's result there when bit 0x8000 of the word at 0xB8 is
   set and the record byte is non-zero, and otherwise calls func_80217D74 unless the record byte is 1
   while the actor's word at 0xCC0 is -1 or the control's mode at 0x388 is 8; when the value at 0x770
   no longer matches the one at 0x62E it releases the actor's object at 0x11B0 through func_80285944,
   clears 0x11F0 and sets 0x11F8 to -1; then it runs the control's three states, raising the value at
   0x8 by D_800D2988 times D_800C7324 and setting 0x4 from D_800C7328 until it reaches the constant
   after D_800C7328 (state 1), waiting for func_8021846C before falling into the next state (state 2),
   and lowering the value at 0x8 by D_800D2988 times D_800C7330 to zero (state 3); while the state is
   not zero it adds D_800D2988 times the constant after D_800C7330 to the value at 0x14, and
   otherwise clears the actor's word at 0x11B4. */
#include "basetypes.h"

typedef struct Control {
    s32 state;
    f32 value4;
    f32 value8;
    char padC[8];
    f32 value14;
    char pad18[0x368];
    s32 flag380;
    char pad384[4];
    s32 mode388;
} Control;

extern f32 D_800C7324;
extern f32 D_800C7328;
extern f32 D_800C7330;
extern f32 D_800D2988;

extern s32 func_80245774(void);
extern s32 func_80232AAC(void *);
extern s32 func_8022FAE8(void *);
extern void func_80217D74(Control *, void *, s32);
extern void func_80285944(void *, s32);
extern s32 func_8021846C(Control *, void *);

void func_80217F4C(Control *control, void *actor_arg, s32 arg2) {
    char *actor = actor_arg;

    if ((u32)(*(s32 *)(actor + 0x5E0) - 0x11) < 2) {
        return;
    }
    if (*(s32 *)(actor + 0xCCC) != 0) {
        return;
    }
    if (*(f32 *)(actor + 0x11D8) > 0.0f) {
        return;
    }
    if (func_80245774() != 0) {
        return;
    }

    control->flag380 = (*(u8 *)(*(char **)(actor + 0x5D8) + 0x82) == 1);

    if (*(s32 *)(actor + 0x5E0) == 0xE) {
        if (*(s8 *)(actor + 0x48C) == 0) {
            return;
        }
        if (*(s32 *)(*(char **)(actor + 0x698) + 0xB0) & 0x8000) {
            *(s16 *)(actor + 0x770) = func_80232AAC(actor);
        }
    } else if ((*(s32 *)(*(char **)(actor + 0x698) + 0xB8) & 0x8000) &&
               (*(u8 *)(*(char **)(actor + 0x5D8) + 0x82) != 0)) {
        *(s16 *)(actor + 0x770) = func_8022FAE8(actor);
    } else if ((*(u8 *)(*(char **)(actor + 0x5D8) + 0x82) != 1) ||
               ((*(s32 *)(actor + 0xCC0) != -1) &&
                (control->mode388 != 8))) {
        func_80217D74(control, actor, arg2);
    }

    if (*(s16 *)(actor + 0x770) != *(s16 *)(actor + 0x62E)) {
        if (*(void **)(actor + 0x11B0) != 0) {
            func_80285944(*(void **)(actor + 0x11B0), 0);
            *(s32 *)(actor + 0x11B0) = 0;
        }
        *(s32 *)(actor + 0x11F0) = 0;
        *(s32 *)(actor + 0x11F8) = -1;
    }

    switch (control->state) {
    case 1:
        control->value8 += D_800D2988 * D_800C7324;
        if (control->mode388 != -1) {
            control->value4 = D_800C7328;
        } else {
            control->value4 = 0.0f;
        }
        if (control->value8 >= *(f32 *)((char *)&D_800C7328 + 4)) {
            control->state = 2;
            control->value8 = *(f32 *)((char *)&D_800C7328 + 4);
            if (control->mode388 != -1) {
                control->mode388 = 8;
            }
        }
        break;
    case 2:
        if (func_8021846C(control, actor) == 0) {
            break;
        }
        control->mode388 = -1;
        *(s32 *)(actor + 0x11B4) = 0;
        control->state = 3;
    case 3:
        control->value8 -= D_800D2988 * D_800C7330;
        if (control->value8 <= 0.0f) {
            control->value8 = 0.0f;
            control->state = 0;
        }
        break;
    }

    control->state != 0
        ? (control->value14 += D_800D2988 * *(f32 *)((char *)&D_800C7330 + 4))
        : (*(s32 *)(actor + 0x11B4) = 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2164_4 = 1.25f;
const float unbake_rodata_800C2168_4 = 16.0f;
const float unbake_rodata_800C216C_4 = 1.0f;
const float unbake_rodata_800C2170_4 = 0.25f;
const float unbake_rodata_800C2174_4 = 0.52359885f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7324_4 = 1.25f;
const float unbake_rodata_800C7328_4 = 16.0f;
const float unbake_rodata_800C732C_4 = 1.0f;
const float unbake_rodata_800C7330_4 = 0.25f;
const float unbake_rodata_800C7334_4 = 0.52359885f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24D4_4 = 1.25f;
const float unbake_rodata_800C24D8_4 = 16.0f;
const float unbake_rodata_800C24DC_4 = 1.0f;
const float unbake_rodata_800C24E0_4 = 0.25f;
const float unbake_rodata_800C24E4_4 = 0.52359885f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2514_4 = 1.25f;
const float unbake_rodata_800C2518_4 = 16.0f;
const float unbake_rodata_800C251C_4 = 1.0f;
const float unbake_rodata_800C2520_4 = 0.25f;
const float unbake_rodata_800C2524_4 = 0.52359885f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2234_4 = 1.25f;
const float unbake_rodata_800C2238_4 = 16.0f;
const float unbake_rodata_800C223C_4 = 1.0f;
const float unbake_rodata_800C2240_4 = 0.25f;
const float unbake_rodata_800C2244_4 = 0.52359885f;
#endif
