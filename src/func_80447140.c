/* __osClearPage, drafted from ultralib src/io/pfsallocatefile.c (2.0I branch): select the given
   controller pak bank, write the caller's block to each of the page's eight blocks, then select
   bank zero again. */
#include "basetypes.h"

typedef struct {
    int status;
    void *queue;
    int channel;
    u8 id[32];
    u8 label[32];
    int version;
    int dir_size;
    int inode_table;
    int minode_table;
    int dir_table;
    int inode_start_page;
    u8 banks;
    u8 activebank;
} OSPfs;

extern s32 func_802BD950(void *queue, int channel, u16 address, u8 *buffer, int force);
extern s32 func_80449914(OSPfs *pfs);

s32 func_80447140(OSPfs *pfs, int page_no, u8 *data, u8 bank)
{
    int i;
    s32 ret;

    ret = 0;
    pfs->activebank = bank;
    ret = func_80449914(pfs);
    if (ret != 0)
        return ret;
    for (i = 0; i < 8; i++) {
        ret = func_802BD950(pfs->queue, pfs->channel, page_no * 8 + i, data, 0);
        if (ret != 0) {
            break;
        }
    }
    pfs->activebank = 0;
    ret = func_80449914(pfs);
    return ret;
}
