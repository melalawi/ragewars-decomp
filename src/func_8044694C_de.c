#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* __osBlockSum, drafted from ultralib src/io/pfsdeletefile.c (2.0I branch): select a bank, add the
   byte sum of each of one page's eight blocks to a running total, and select bank zero again. */








extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);


s32 func_8044694C_de(OSPfs_func_80445F80_de *pfs, u8 page_no, u16 *sum, u8 bank)
{
    int i;
    s32 ret;
    u8 data[32];

    ret = 0;
    pfs->activebank = bank;
    ret = func_80448CC4_de(pfs);
    if (ret != 0)
        return ret;
    for (i = 0; i < 8; i++) {
        ret = func_802B84C0_de(pfs->queue, pfs->channel, page_no * 8 + i, data);
        if (ret != 0) {
            pfs->activebank = 0;
            func_80448CC4_de(pfs);
            return ret;
        }
        *sum = *sum + func_80448B84_de(data, sizeof(data));
    }
    pfs->activebank = 0;
    ret = func_80448CC4_de(pfs);
    return ret;
}
