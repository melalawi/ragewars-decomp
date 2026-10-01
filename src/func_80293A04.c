#include "basetypes.h"

/* Requests a switch of the session into mode 0x14: when the pending 0x1000 flag is set outside modes 0xB and 0xC and a target is given it records that target with phase 2 and clears the flags; otherwise, once func_80245804 accepts the flags, it saves the current mode, enters mode 0x14 with the given argument at phase 1, and sets the timer when func_80264B8C allows. */

typedef struct Session {
    char pad0[0x26DB4];
    s32 previousMode;
    s32 mode;
    s32 target;
    char pad26DC0;
    char phase;
    char pad26DC2[2];
    f32 timer;
} Session;

extern s32 D_8010F194;
extern f32 D_800CA58C;
extern s32 func_80245804(s32 *flags);
extern s32 func_80264B8C(void);

void func_80293A04(Session *session, s32 arg1, s32 target) {
    s32 pending;
    s32 *flags;

    flags = &D_8010F194;
    pending = *flags & 0x1000;
    if ((unsigned)(session->mode - 0xB) < 2) {
        pending = 0;
    }
    if (pending != 0 && target != -1) {
        session->phase = 2;
        session->target = target;
        *flags = 0;
        return;
    }
    if (func_80245804(flags) != 0) {
        s32 mode = session->mode;

        session->phase = 1;
        session->timer = 0;
        session->mode = 0x14;
        session->target = arg1;
        session->previousMode = mode;
        if (func_80264B8C() != 0) {
            session->timer = D_800CA58C;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53CC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA58C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C574C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C578C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54A0_4 = 1.0f;
#endif
