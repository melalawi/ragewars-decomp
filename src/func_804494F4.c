/* __osPfsRWInode, drafted from ultralib src/io/contpfs.c (2.0I branch): read or write one bank's
   controller pak inode table, keeping the mirror copy in step and repairing whichever copy fails the
   table's byte checksum, with __osSumcalc as an inline helper the cartridge inlines. */
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
extern s32 func_80449914(OSPfs *pfs);
extern s32 func_802BD590(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_802BD950(void *queue, int channel, u16 address, u8 *buffer, int force);

static inline u16 __osSumcalc(u8 *ptr, int length)
{
    int i;
    u32 sum = 0;
    u8 *tmp = ptr;

    for (i = 0; i < length; i++) {
        sum += *tmp++;
        sum = sum & 0xFFFF;
    }
    return sum;
}

s32 func_804494F4(OSPfs *pfs, __OSInode *inode, u8 flag, u8 bank)
{
    u8 sum;
    int j;
    s32 ret;
    int offset;
    u8 *addr;

    if (pfs->activebank != 0) {
        pfs->activebank = 0;
        ret = func_80449914(pfs);
        if (ret != 0)
            return ret;
    }

    offset = (bank > 0) ? 1 : pfs->inode_start_page;

    if (flag == 1) {
        inode->inode_page[0].inode_t.page = __osSumcalc((u8 *)&inode->inode_page[offset], (128 - offset) * 2);
    }

    for (j = 0; j < 8; j++) {
        addr = ((u8 *)inode->inode_page + j * 32);

        if (flag == 1) {
            ret = func_802BD950(pfs->queue, pfs->channel, pfs->inode_table + bank * 8 + j, addr, 0);
            ret = func_802BD950(pfs->queue, pfs->channel, pfs->minode_table + bank * 8 + j, addr, 0);
        } else {
            ret = func_802BD590(pfs->queue, pfs->channel, pfs->inode_table + bank * 8 + j, addr);
        }

        if (ret != 0) {
            return ret;
        }
    }

    if (flag == 0) {
        sum = __osSumcalc((u8 *)&inode->inode_page[offset], (128 - offset) * 2);
        if (sum != inode->inode_page[0].inode_t.page) {
            for (j = 0; j < 8; j++) {
                addr = ((u8 *)inode->inode_page + j * 32);
                ret = func_802BD590(pfs->queue, pfs->channel, pfs->minode_table + bank * 8 + j, addr);
            }

            if (sum != inode->inode_page[0].inode_t.page) {
                return 3;
            }

            for (j = 0; j < 8; j++) {
                addr = ((u8 *)inode->inode_page + j * 32);
                ret = func_802BD950(pfs->queue, pfs->channel, pfs->inode_table + bank * 8 + j, addr, 0);
            }
        } else {
            for (j = 0; j < 8; j++) {
                addr = ((u8 *)inode->inode_page + j * 32);
                ret = func_802BD950(pfs->queue, pfs->channel, pfs->minode_table + bank * 8 + j, addr, 0);
            }
        }
    }

    return 0;
}
