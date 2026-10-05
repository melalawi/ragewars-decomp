#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B2614.h"
#include "types.h"

/* _sndpVoiceHandler, drafted from ultralib src/audio/sndplayer.c: the sound player's synthesizer
   callback; reposts the frame API event or handles the pending event until the next one is in
   the future, then advances the player's time by that delta. The pointer to the pending event
   is held in a local, standing in for the address register -fforce-addr kept for it. */













extern void func_802B00D4_de(ALEventQueue *, Message_func_802AF150_de *, s32); /* alEvtqPostEvent */
   /* _handleEvent */
extern s32 func_802B003C_de(ALEventQueue *, Message_func_802AF150_de *);       /* alEvtqNextEvent */

s32 func_802B2BBC_de(void *node)
{
    ALSndPlayer *sndp = (ALSndPlayer *)node;
    ALSndpEvent evt;
    ALSndpEvent *next = (ALSndpEvent *)&sndp->nextEvent;

    do {
        switch (sndp->nextEvent.type) {
            case 5: /* AL_SNDP_API_EVT */
                evt.common.type = 5;
                func_802B00D4_de(&sndp->evtq, (Message_func_802AF150_de *)&evt, sndp->frameTime);
                break;
            default:
                func_802B2780_de(sndp, next);
                break;
        }
        sndp->nextDelta = func_802B003C_de(&sndp->evtq, &sndp->nextEvent);
    } while (sndp->nextDelta == 0);

    sndp->curTime += sndp->nextDelta;
    return sndp->nextDelta;
}

extern s32 func_802BD170_de(s32);
extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void *arg1);








void func_802B2C48_de(void *arg0, s32 arg1) {
    s32 saved;
    char *cur;
    char *next;

    saved = func_802BD170_de(1);
    cur = ((func_8020C9B0_S1 *)(arg0))->unk8;
    if (cur != 0) {
        do {
            next = ((func_802B7D18_S2 *)(cur))->unk0;
            if (((func_802B7D18_S2 *)(cur))->unk10 == arg1) {
                if (next != 0) {
                    ((func_80254D70_S2 *)(next))->unk8 = ((func_80254D70_S2 *)(next))->unk8 + ((func_802B7D18_S2 *)(cur))->unk8;
                }
                func_802B2450_de(cur);
                func_802B2480_de(cur, arg0);
            }
            cur = next;
        } while (cur != 0);
    }
    func_802BD170_de(saved);
}
