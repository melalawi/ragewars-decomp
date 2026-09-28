/* _sndpVoiceHandler, drafted from ultralib src/audio/sndplayer.c: the sound player's synthesizer
   callback; reposts the frame API event or handles the pending event until the next one is in
   the future, then advances the player's time by that delta. The pointer to the pending event
   is held in a local, standing in for the address register -fforce-addr kept for it. */
#include "basetypes.h"

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    s16 type;
    char msg[14];
} ALEvent;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    void *handler;
    s32 callTime;
    s32 samplesLeft;
} ALPlayer;

typedef struct {
    ALPlayer node;
    ALEventQueue evtq;
    ALEvent nextEvent;
    void *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    s32 frameTime;
    s32 nextDelta;
    s32 curTime;
} ALSndPlayer;

typedef union {
    ALEvent msg;
    struct {
        s16 type;
        void *state;
    } common;
} ALSndpEvent;

extern void func_802B51A4(ALEventQueue *, ALEvent *, s32); /* alEvtqPostEvent */
extern void func_802B7850(ALSndPlayer *, ALSndpEvent *);   /* _handleEvent */
extern s32 func_802B510C(ALEventQueue *, ALEvent *);       /* alEvtqNextEvent */

s32 func_802B7C8C(void *node)
{
    ALSndPlayer *sndp = (ALSndPlayer *)node;
    ALSndpEvent evt;
    ALSndpEvent *next = (ALSndpEvent *)&sndp->nextEvent;

    do {
        switch (sndp->nextEvent.type) {
            case 5: /* AL_SNDP_API_EVT */
                evt.common.type = 5;
                func_802B51A4(&sndp->evtq, (ALEvent *)&evt, sndp->frameTime);
                break;
            default:
                func_802B7850(sndp, next);
                break;
        }
        sndp->nextDelta = func_802B510C(&sndp->evtq, &sndp->nextEvent);
    } while (sndp->nextDelta == 0);

    sndp->curTime += sndp->nextDelta;
    return sndp->nextDelta;
}
