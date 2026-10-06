#include "span_1000/code_802BE0D0.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "span_1000/code_802BE0D0.h"
#include "types.h"
/* alLoadParam, drafted from ultralib src/audio/load.c: set a load filter's wave table, choosing the
   pull handler and loop points by the table's type, or reset its decode state. This cartridge's
   version has no table length rounding and a third wave type (2) handled by func_802C3988; the
   handlers are addressed by the cartridge at 0x002Cxxxx (D_002BE0D0, D_002BE514, D_002BE898). */



















extern void func_802B0310_de(void *, void *, s32); /* alCopy */

 /* alAdpcmPull */
extern char D_002BE514; /* alRaw16Pull */
extern char D_002BE898; /* the type 2 pull handler */

s32 func_802BEAA4_de(void *filter, s32 paramID, void *param)
{
    ALLoadFilter48 *a = (ALLoadFilter48 *)filter;
    ALFilter_s14 *f = (ALFilter_s14 *)filter;

    switch (paramID) {
        case 5: /* AL_FILTER_SET_WAVETABLE */
            a->table = (struct ALWaveTable_s *)param;
            a->memin = (s32)a->table->base;
            a->sample = 0;
            switch (a->table->type) {
                case 0: /* AL_ADPCM_WAVE */
                    f->handler = &D_002BE0D0;
                    a->bookSize = 2 * a->table->waveInfo.adpcmWave.book->order *
                        a->table->waveInfo.adpcmWave.book->npredictors * 8;
                    if (a->table->waveInfo.adpcmWave.loop) {
                        a->loop.start = a->table->waveInfo.adpcmWave.loop->start;
                        a->loop.end = a->table->waveInfo.adpcmWave.loop->end;
                        a->loop.count = a->table->waveInfo.adpcmWave.loop->count;
                        func_802B0310_de(a->table->waveInfo.adpcmWave.loop->state,
                                      a->lstate, sizeof(ADPCM_STATE));
                    } else {
                        a->loop.start = a->loop.end = a->loop.count = 0;
                    }
                    break;

                case 1: /* AL_RAW16_WAVE */
                    f->handler = &D_002BE514;
                    if (a->table->waveInfo.rawWave.loop) {
                        a->loop.start = a->table->waveInfo.rawWave.loop->start;
                        a->loop.end = a->table->waveInfo.rawWave.loop->end;
                        a->loop.count = a->table->waveInfo.rawWave.loop->count;
                    } else {
                        a->loop.start = a->loop.end = a->loop.count = 0;
                    }
                    break;

                case 2:
                    f->handler = &D_002BE898;
                    a->loop.start = a->loop.end = a->loop.count = 0;
                    break;

                default:
                    break;
            }
            break;

        case 4: /* AL_FILTER_RESET */
            a->lastsam = 0;
            a->first = 1;
            a->sample = 0;

            if (a->table) {
                a->memin = (s32)a->table->base;
                if (a->table->type == 0) {
                    if (a->table->waveInfo.adpcmWave.loop)
                        a->loop.count = a->table->waveInfo.adpcmWave.loop->count;
                } else if (a->table->type == 1) {
                    if (a->table->waveInfo.rawWave.loop)
                        a->loop.count = a->table->waveInfo.rawWave.loop->count;
                }
            }
            break;

        default:
            break;
    }
}
