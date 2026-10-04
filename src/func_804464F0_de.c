#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* __osClearPage, drafted from ultralib src/io/pfsallocatefile.c (2.0I branch): select the given
   controller pak bank, write the caller's block to each of the page's eight blocks, then select
   bank zero again. */



extern s32 func_802B8880_de(void *queue, int channel, u16 address, u8 *buffer, int force);
extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);

s32 func_804464F0_de(OSPfs_func_80445F80_de *pfs, int page_no, u8 *data, u8 bank)
{
    int i;
    s32 ret;

    ret = 0;
    pfs->activebank = bank;
    ret = func_80448CC4_de(pfs);
    if (ret != 0)
        return ret;
    for (i = 0; i < 8; i++) {
        ret = func_802B8880_de(pfs->queue, pfs->channel, page_no * 8 + i, data, 0);
        if (ret != 0) {
            break;
        }
    }
    pfs->activebank = 0;
    ret = func_80448CC4_de(pfs);
    return ret;
}
