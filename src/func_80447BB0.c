/* osPfsInitPak, drafted from ultralib src/io/pfsinitpak.c (2.0I branch): confirm a controller pak is
   present, read and if needed repair its id block, derive the file system layout from it, read the
   label and run the checker. The id checksums are read through the block itself and the repaired
   device id through the new id rather than through the id pointer. */
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

typedef union {
    struct {
        u8 bank;
        u8 page;
    } inode_t;
    u16 ipage;
} __OSInodeUnit;

typedef struct {
    __OSInodeUnit inode_page[128];
} __OSInode;

typedef struct {
    u32 game_code;
    u16 company_code;
    __OSInodeUnit start_page;
    u8 status;
    s8 reserved;
    u16 data_sum;
    u8 ext_name[4];
    u8 game_name[16];
} __OSDir;
typedef struct {
    u32 repaired;
    u32 random;
    u64 serial_mid;
    u64 serial_low;
    u16 deviceid;
    u8 banks;
    u8 version;
    u16 checksum;
    u16 inverted_checksum;
} __OSPackId;

extern void func_802BED04(void);
extern void func_802BED70(void);
extern s32 func_804479D0(void *queue, int channel);
extern s32 func_80449914(OSPfs *pfs);
extern s32 func_802BD590(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_80449804(u16 *ptr, u16 *csum, u16 *icsum);
extern s32 func_80449198(OSPfs *pfs, __OSPackId *temp);
extern s32 func_80448EB0(OSPfs *pfs, __OSPackId *badid, __OSPackId *newid);
extern s32 func_80447D80(OSPfs *pfs);

s32 func_80447BB0(void *queue, OSPfs *pfs, int channel)
{
    int k;
    s32 ret = 0;
    u16 sum;
    u16 isum;
    u8 temp[32];
    __OSPackId *id;
    __OSPackId newid;

    func_802BED04();

    ret = func_804479D0(queue, channel);

    func_802BED70();

    if (ret != 0) {
        return ret;
    }

    pfs->queue = queue;
    pfs->channel = channel;
    pfs->status = 0;

    pfs->activebank = 0;
    ret = func_80449914(pfs);
    if (ret != 0)
        return ret;
    ret = func_802BD590(pfs->queue, pfs->channel, 1, temp);
    if (ret != 0)
        return ret;

    func_80449804((u16 *)temp, &sum, &isum);
    id = (__OSPackId *)temp;

    if ((((__OSPackId *)temp)->checksum != sum) || (((__OSPackId *)temp)->inverted_checksum != isum)) {
        ret = func_80449198(pfs, id);

        if (ret != 0) {
            return ret;
        } else if (ret != 0) {
            return ret;
        }
    }

    if (!(id->deviceid & 1)) {
        ret = func_80448EB0(pfs, id, &newid);

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

    ret = func_802BD590(pfs->queue, pfs->channel, 7, pfs->label);
    if (ret != 0)
        return ret;

    ret = func_80447D80(pfs);
    pfs->status |= 1;

    return ret;
}
