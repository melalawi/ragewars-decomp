#include "basetypes.h"

extern f32 D_800CB468;
extern f32 D_800CB46C;
extern char D_2AE1A4;
extern char D_2AE254;
extern char D_80145088;
extern void func_802A7FA8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5, s32 arg6, void *arg7, void *arg8);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

extern void *jtbl_800CB448[];

/** Apply a scripted effect command and its optional sound callbacks. */
s32 func_802ADE28(void *arg0, void *arg1, void *arg2) {
    void *resource;
    char *state_value;
    s32 sound;
    s32 callback;
    s16 command;

    state_value = (char *)*(void **)((char *)arg2 + 0x18) + 0x14;
    command = *(u16 *)((char *)arg1 + 4) - 0x708;
    {
        static void *sw_command_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_command_0, &&sw_command_1, &&sw_command_2, &&sw_command_3, &&sw_command_7, &&sw_command_default
        };
        s32 sw_command_value = command;
        if ((unsigned int)sw_command_value > 7) {
            goto sw_command_default;
        }
        goto *jtbl_800CB448[sw_command_value];
    }
    do {
    sw_command_0:
        *(f32 *)((char *)arg0 + 0x670) = D_800CB468;
        break;
    sw_command_1:
        *(f32 *)((char *)arg0 + 0x674) = D_800CB46C;
        break;
    sw_command_2:
    sw_command_3:
        *(f32 *)((char *)arg0 + 0x678) += *(f32 *)(state_value + 0xC);
        break;
    sw_command_7:
        func_802A7FA8((char *)arg0 + 0xD40, 1, 0, 0x7FD,
                       0, 0, 0, &D_2AE1A4, &D_2AE254);
        break;
    
    sw_command_default:;
    } while (0);

    resource = *(void **)arg1;
    sound = *(s16 *)((char *)arg1 + 6);
    callback = *(s16 *)((char *)arg1 + 8);
    if (*(void **)((char *)arg0 + 0x5DC) != 0) {
        func_8023919C(*(void **)((char *)arg0 + 0x5DC),
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          *(void **)((char *)arg0 + 0x5DC),
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74(sound,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10), 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
    return 1;
}
