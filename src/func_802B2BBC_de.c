#include "common/types.h"
#include "span_1000/code_802B7C50.h"
#include "types.h"
/* _sndpVoiceHandler, drafted from ultralib src/audio/sndplayer.c: the sound player's synthesizer
   callback; reposts the frame API event or handles the pending event until the next one is in
   the future, then advances the player's time by that delta. The pointer to the pending event
   is held in a local, standing in for the address register -fforce-addr kept for it. */













extern void func_802B00D4_de(ALEventQueue *, Message_func_802AF150_de *, s32); /* alEvtqPostEvent */
extern void func_802B2780_de(ALSndPlayer *, ALSndpEvent *);   /* _handleEvent */
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
