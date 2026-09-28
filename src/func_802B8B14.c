/* alAudioFrame, drafted from ultralib src/audio/synthesizer.c: runs every player whose next event
   falls inside this frame, then pulls the output filter chain in blocks of at most maxOutSamples,
   each preceded by an A_SEGMENT command, and returns the end of the command list. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Awords;

typedef union {
    Awords words;
    long long int force_union_align;
} Acmd;

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef s32 (*ALVoiceHandler)(void *);

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    ALVoiceHandler handler;
    s32 callTime;
    s32 samplesLeft;
} ALPlayer;

typedef Acmd *(*ALCmdHandler)(void *, s16 *, s32, s32, Acmd *);
typedef s32 (*ALSetParam)(void *, s32, void *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    ALCmdHandler handler;
    ALSetParam setParam;
} ALFilter;

typedef struct {
    ALPlayer *head;
    ALLink pFreeList;
    ALLink pAllocList;
    ALLink pLameList;
    s32 paramSamples;
    s32 curSamples;
    void *dma;
    void *heap;
    void *paramList;
    void *mainBus;
    void *auxBus;
    ALFilter *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
} ALSynth;

typedef struct {
    ALSynth drvr;
} ALGlobals;

extern ALGlobals *D_800D80A0; /* alGlobals */

extern s32 func_802B8DE0(ALSynth *, ALPlayer **); /* __nextSampleTime */
extern s32 func_802B8E88(ALSynth *, s32);         /* _timeToSamplesNoRound */
extern void func_802B8D4C(ALSynth *);             /* _collectPVoices */

Acmd *func_802B8B14(Acmd *cmdList, s32 *cmdLen, s16 *outBuf, s32 outLen)
{
    ALPlayer *client;
    ALFilter *output;
    ALSynth *drvr = &D_800D80A0->drvr;
    s16 tmp = 0;
    Acmd *cmdlEnd = cmdList;
    Acmd *cmdPtr;
    s32 nOut;
    s16 *lOutBuf = outBuf;

    if (drvr->head == 0) {
        *cmdLen = 0;
        return cmdList;
    }

    for (drvr->paramSamples = func_802B8DE0(drvr, &client);
         drvr->paramSamples - drvr->curSamples < outLen;
         drvr->paramSamples = func_802B8DE0(drvr, &client)) {
        drvr->paramSamples &= ~0xf;
        client->samplesLeft += func_802B8E88(drvr, (*client->handler)(client));
    }
    drvr->paramSamples &= ~0xf;

    while (outLen > 0) {
        nOut = ((drvr->maxOutSamples) < (outLen) ? (drvr->maxOutSamples) : (outLen));

        cmdPtr = cmdlEnd;
        {
            /* aSegment(cmdPtr++, 0, 0) */
            Acmd *_a = (Acmd *)cmdPtr++;
            _a->words.w0 = 7 << 24;
            _a->words.w1 = 0;
        }

        output = drvr->outputFilter;
        (*output->setParam)(output, 6, lOutBuf); /* AL_FILTER_SET_DRAM */
        cmdlEnd = (*output->handler)(output, &tmp, nOut, drvr->curSamples, cmdPtr);

        outLen -= nOut;
        lOutBuf += nOut << 1;
        drvr->curSamples += nOut;
    }

    *cmdLen = (s32)(cmdlEnd - cmdList);
    func_802B8D4C(drvr);
    return cmdlEnd;
}
