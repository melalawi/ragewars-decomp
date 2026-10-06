#include "abi.h"
#include "span_1000/code_802BD1A8.h"
#include "span_1000/code_802BE0D0.h"
#include "types.h"
#include "abi.h"
#include "acmd.h"

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define A_LOOP 0x02
#define ADPCMFSIZE 16
#define ADPCMFBYTES 9
#define LFSAMPLES 4
#define AL_DECODER_IN 0

extern u32 func_802570C0_de(void *book, s32 size);
extern Acmd *func_802BEC34_de(Acmd *ptr, ALLoadFilter48_2 *f, s32 tsam, s32 nbytes,
                            s16 outp, s16 inp, u32 flags);

/* Decode ADPCM samples, restarting loops and clearing exhausted input.
 * The decode helper uses the existing table-opaque view of this same filter. */
Acmd *func_802BE3B0_eu_x(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    s16 inp;
    s32 tsam;
    s32 nframes;
    s32 nbytes;
    s32 overFlow;
    s32 startZero;
    s32 nOver;
    s32 nSam;
    s32 op;
    s32 nLeft;
    s32 bEnd;
    s32 decoded = 0;
    s32 looped = 0;

    ALLoadFilter_func_802BE514_de *f = (ALLoadFilter_func_802BE514_de *)filter;

    if (outCount == 0)
        return ptr;

    inp = AL_DECODER_IN;
    aLoadADPCM(ptr++, f->bookSize,
               func_802570C0_de(f->table->waveInfo.adpcmWave.book->book, f->bookSize));

    looped = (outCount + f->sample > f->loop.end) && (f->loop.count != 0);
    if (looped)
        nSam = f->loop.end - f->sample;
    else
        nSam = outCount;

    if (f->lastsam)
        nLeft = ADPCMFSIZE - f->lastsam;
    else
        nLeft = 0;
    tsam = nSam - nLeft;
    if (tsam < 0) tsam = 0;

    nframes = (tsam + ADPCMFSIZE - 1) >> LFSAMPLES;
    nbytes = nframes * ADPCMFBYTES;

    if (looped) {

        ptr = func_802BEC34_de(ptr, (ALLoadFilter48_2 *)f, tsam, nbytes, *outp, inp, f->first);

        if (f->lastsam)
            *outp += (f->lastsam << 1);
        else
            *outp += (ADPCMFSIZE << 1);

        f->lastsam = f->loop.start & 0xf;
        f->memin = (s32)f->table->base + ADPCMFBYTES *
            ((s32)(f->loop.start >> LFSAMPLES) + 1);
        f->sample = f->loop.start;

        bEnd = *outp;
        while (outCount > nSam) {

            outCount -= nSam;

            op = (bEnd + ((nframes + 1) << (LFSAMPLES + 1))) & ~0x1f;

            bEnd += (nSam << 1);

            if ((f->loop.count != -1) && (f->loop.count != 0))
                f->loop.count--;

            nSam = MIN(outCount, f->loop.end - f->loop.start);
            tsam = nSam - ADPCMFSIZE + f->lastsam;
            if (tsam < 0) tsam = 0;
            nframes = (tsam + ADPCMFSIZE - 1) >> LFSAMPLES;
            nbytes = nframes * ADPCMFBYTES;
            ptr = func_802BEC34_de(ptr, (ALLoadFilter48_2 *)f, tsam, nbytes, op, inp, f->first | A_LOOP);

            aDMEMMove(ptr++, op + (f->lastsam << 1), bEnd, nSam << 1);
        }

        f->lastsam = (outCount + f->lastsam) & 0xf;
        f->sample += outCount;
        f->memin += ADPCMFBYTES * nframes;
        return ptr;
    }

    nSam = nframes << LFSAMPLES;

    overFlow = f->memin + nbytes - ((s32)f->table->base + f->table->len);
    if (overFlow < 0)
        overFlow = 0;
    nOver = (overFlow / ADPCMFBYTES) << LFSAMPLES;
    if (nOver > nSam + nLeft)
        nOver = nSam + nLeft;

    nbytes -= overFlow;

    if ((nOver - (nOver & 0xf)) < outCount) {
        decoded = 1;
        ptr = func_802BEC34_de(ptr, (ALLoadFilter48_2 *)f, nSam - nOver, nbytes, *outp, inp, f->first);

        if (f->lastsam)
            *outp += (f->lastsam << 1);
        else
            *outp += (ADPCMFSIZE << 1);

        f->lastsam = (outCount + f->lastsam) & 0xf;
        f->sample += outCount;
        f->memin += ADPCMFBYTES * nframes;
    } else {
        f->lastsam = 0;
        f->memin += ADPCMFBYTES * nframes;
    }

    if (nOver) {
        f->lastsam = 0;
        if (decoded)
            startZero = (nLeft + nSam - nOver) << 1;
        else
            startZero = 0;
        aClearBuffer(ptr++, startZero + *outp, nOver << 1);
    }

    return ptr;
}
