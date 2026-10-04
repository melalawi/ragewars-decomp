#include "span_1000/code_802BDDB8.h"
#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* osPfsInitPak, drafted from ultralib src/io/pfsinitpak.c (2.0I branch): confirm a controller pak is
   present, read and if needed repair its id block, derive the file system layout from it, read the
   label and run the checker. The id checksums are read through the block itself and the repaired
   device id through the new id rather than through the id pointer. */












extern s32 func_80446D80_de(void *queue, int channel);
extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_80448BB4_de(u16 *ptr, u16 *csum, u16 *icsum);
extern s32 func_80448548_de(OSPfs_func_80445F80_de *pfs, __OSPackId *temp);
extern s32 func_80448260_de(OSPfs_func_80445F80_de *pfs, __OSPackId *badid, __OSPackId *newid);
extern s32 func_80447130_de(OSPfs_func_80445F80_de *pfs);

s32 func_80446F60_de(void *queue, OSPfs_func_80445F80_de *pfs, int channel)
{
    int k;
    s32 ret = 0;
    u16 sum;
    u16 isum;
    u8 temp[32];
    __OSPackId *id;
    __OSPackId newid;

    func_802B9C14_de();

    ret = func_80446D80_de(queue, channel);

    func_802B9C80_de();

    if (ret != 0) {
        return ret;
    }

    pfs->queue = queue;
    pfs->channel = channel;
    pfs->status = 0;

    pfs->activebank = 0;
    ret = func_80448CC4_de(pfs);
    if (ret != 0)
        return ret;
    ret = func_802B84C0_de(pfs->queue, pfs->channel, 1, temp);
    if (ret != 0)
        return ret;

    func_80448BB4_de((u16 *)temp, &sum, &isum);
    id = (__OSPackId *)temp;

    if ((((__OSPackId *)temp)->checksum != sum) || (((__OSPackId *)temp)->inverted_checksum != isum)) {
        ret = func_80448548_de(pfs, id);

        if (ret != 0) {
            return ret;
        } else if (ret != 0) {
            return ret;
        }
    }

    if (!(id->deviceid & 1)) {
        ret = func_80448260_de(pfs, id, &newid);

        if (ret != 0) {
            return ret;
        }

        id = &newid;

        if (!(newid.deviceid & 1)) {
            return 11;
        }
    }

    for (k = 0; k < 32; k++) {
        pfs->id[k] = ((u8 *)id)[k];
    }

    pfs->version = id->version;
    pfs->banks = id->banks;
    pfs->inode_start_page = 1 + 2 + (2 * pfs->banks);
    pfs->dir_size = 2 * 8;
    pfs->inode_table = 1 * 8;
    pfs->minode_table = (1 + pfs->banks) * 8;
    pfs->dir_table = pfs->minode_table + (pfs->banks * 8);

    ret = func_802B84C0_de(pfs->queue, pfs->channel, 7, pfs->label);
    if (ret != 0)
        return ret;

    ret = func_80447130_de(pfs);
    pfs->status |= 1;

    return ret;
}
