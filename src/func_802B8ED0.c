#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Acmdw;

typedef union {
    Acmdw words;
} Acmd;

typedef Acmd *(*ALCmdHandler)(void *, s16 *, s32, s32, Acmd *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    ALCmdHandler handler;
} ALFilter;

typedef struct {
    ALFilter filter;
    u8 pad8[0xC];
    s32 sourceCount;
    s32 maxSources;
    ALFilter **sources;
} ALAuxBus;

#define aClearBuffer(pkt, d, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (2 << 24) | ((d) & 0xFFFFFF);                    \
        _a->words.w1 = (u32)(c);                                        \
    }

/* alAuxBusPull: clears the aux left and right output buffers, then pulls every source filter of the bus into the command list. */
Acmd *func_802B8ED0(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p) {
    Acmd *ptr = p;
    ALAuxBus *m = (ALAuxBus *)filter;
    ALFilter **sources = m->sources;
    s32 i;

    aClearBuffer(ptr++, 0x6C0, outCount << 1);
    aClearBuffer(ptr++, 0x800, outCount << 1);

    for (i = 0; i < m->sourceCount; i++) {
        ptr = (*sources[i]->handler)(sources[i], outp, outCount, sampleOffset, ptr);
    }
    return ptr;
}
