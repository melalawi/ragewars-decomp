#include "span_1000/code_802C224C.h"
#include "types.h"
#include "abi.h"


#include "acmd.h"
#include "audio_callbacks.h"


























/* Streams raw 16-bit samples into DMEM for the requested byte count: clears the output when the wave table is empty, otherwise refills a 0x100-sample block at D_800D9360 through func_802C016C_de and func_802BD280_de whenever the filter has none left (clearing and stopping when none arrives), then loads the available samples at 8-byte alignment and moves them into place. Adapted from func_802BE514_de (alRaw16Pull) with the loop handling replaced by the streamed block, updated through a pointer to D_800D9360. */

#define MIN(a, b) (((a) < (b)) ? (a) : (b))









extern s32 D_800D5330;
extern s32 func_802C016C_de();
extern void func_802BD280_de(s32 buffer, s32 size);

Acmd *func_802BE898_de(void *filter, s16 *outp, s32 byteCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    s32 nbytes;
    s32 dramAlign;
    s32 dmemAlign;
    s32 nSam;
    s32 op;

    ALLoadFilter_func_802BE514_de *f = (ALLoadFilter_func_802BE514_de *)filter;
    s32 *stream;

    op = *outp;
    if (f->table->base == 0) {
        aClearBuffer(ptr++, op, byteCount << 1);
        return ptr;
    }
    if (byteCount != 0) {
        stream = &D_800D5330;
        do {
            nSam = byteCount;
            if (f->sample == 0) {
                D_800D5330 = func_802C016C_de();
                if (D_800D5330 == 0) {
                    aClearBuffer(ptr++, op, byteCount << 1);
                    return ptr;
                }
                func_802BD280_de(D_800D5330, 0x200);
                f->sample = 0x100;
            }
            if (f->sample < byteCount) {
                nSam = f->sample;
            }
            nbytes = nSam << 1;
            dramAlign = D_800D5330 & 0x7;
            nbytes += dramAlign;
            if (op & 0x7) {
                dmemAlign = 8 - (op & 0x7);
            } else {
                dmemAlign = 0;
            }
            aSetBuffer(ptr++, 0, op + dmemAlign, 0, nbytes + 8 - (nbytes & 0x7));
            aLoadBuffer(ptr++, (D_800D5330 & 0x1FFFFFFF) - dramAlign);
            if (dramAlign || dmemAlign) {
                aDMEMMove(ptr++, op + dramAlign + dmemAlign, op, nSam << 1);
            }
            byteCount -= nSam;
            op += nSam << 1;
            *stream += nSam << 1;
            f->sample -= nSam;
        } while (byteCount != 0);
    }
    return ptr;
}
