#include "shared/func_802bae40.h"
#include "unbake_abi.h"
#include "shared/acmd.h"
/* _saveBuffer, drafted from ultralib src/audio/reverb.c: write count samples from the DMEM buffer
   buff back into the delay line at curr_ptr, wrapping the write back to r->base when it would run
   past the end of the line. The wrapped arm ends with its own set-buffer command, which the
   straight arm does not emit. */
#include "basetypes.h"











extern u32 func_802C0CB0(void *); /* osVirtualToPhysical */







Acmd *func_802BB038(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p)
{
    Acmd *ptr = p;
    s32 after_end, before_end;
    s16 *updated_ptr, *delay_end;

    delay_end = &r->base[r->length];

    if (curr_ptr < r->base)
        curr_ptr += r->length;
    updated_ptr = curr_ptr + count;

    if (updated_ptr > delay_end) {
        after_end = updated_ptr - delay_end;
        before_end = delay_end - curr_ptr;

        aSetBuffer(ptr++, 0, 0, buff, before_end << 1);
        aSaveBuffer(ptr++, func_802C0CB0(curr_ptr));
        aSetBuffer(ptr++, 0, 0, buff + (before_end << 1), after_end << 1);
        aSaveBuffer(ptr++, func_802C0CB0(r->base));
        aSetBuffer(ptr++, 0, 0, 0, count << 1);
    } else {
        aSetBuffer(ptr++, 0, 0, buff, count << 1);
        aSaveBuffer(ptr++, func_802C0CB0(curr_ptr));
    }

    return ptr;
}
