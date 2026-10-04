#include "common/types.h"
#include "span_16E000/code_8040AC98.h"
#include "types.h"
/* Confirms the pak menu's channel: picks the team/channel override or the record's own channel byte, marks D_80153784, and if func_80406178_de accepts it opens the pak prompt keyed by the player's storage buffer (or the default buffer if there is no player), otherwise opens the prompt on the default buffer. */
#define NULL ((void *)0)







extern s32 func_80406178_de(Record_func_8040B58C_de *, s32, s32);
extern void func_80442574_de(void *, void *, func_8024795C_S2 *, void *, s32);
extern char D_8014155C[];
extern s32 D_8014D4CC;
extern s32 D_8014D4F4;
extern s32 D_800DE878;

s32 func_8040B58C_de(void *arg0, Record_func_8040B58C_de *arg1) {
    void *buffer;
    func_8024795C_S2 *player;
    s32 channel;

    if (D_8014D4CC != 0) {
        channel = D_800DE878;
    } else {
        channel = arg1->inner->unk4;
    }
    D_8014D4F4 = 1;
    if (func_80406178_de(arg1, channel, 1) != 0) {
        player = arg1->player;
        if (player != NULL) {
            buffer = player->unk5DC + 0x554;
        } else {
            buffer = D_8014155C;
        }
        func_80442574_de(buffer, arg1->unk24, arg1->player, arg1->inner, 0);
        return 1;
    }
    func_80442574_de(D_8014155C, arg1->unk24, arg1->player, arg1->inner, 0);
    return 1;
}
