#include "span_1000/code_8029193C.h"
#include "types.h"

/* Requests a switch of the session into mode 0x14: when the pending 0x1000 flag is set outside modes 0xB and 0xC and a target is given it records that target with phase 2 and clears the flags; otherwise, once func_80245814_de accepts the flags, it saves the current mode, enters mode 0x14 with the given argument at phase 1, and sets the timer when func_80264B6C_de allows. */



extern s32 D_8010B194_de;
extern s32 func_80245814_de(s32 *flags);
extern s32 func_80264B6C_de(void);

void func_80293A20_de(Session_func_80293A20_de *session, s32 arg1, s32 target) {
    s32 pending;
    s32 *flags;

    flags = &D_8010B194_de;
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
    if (func_80245814_de(flags) != 0) {
        s32 mode = session->mode;

        session->phase = 1;
        session->timer = 0;
        session->mode = 0x14;
        session->target = arg1;
        session->previousMode = mode;
        if (func_80264B6C_de() != 0) {
            session->timer = (1.0f);
        }
    }
}
