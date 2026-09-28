/* osPfsFreeBlocks, drafted from ultralib src/io/pfsfreeblocks.c (2.0I branch): count the unused pages
   in every bank's inode table and report them as bytes. */
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
extern s32 func_8044984C(OSPfs *pfs);
extern s32 func_804494F4(OSPfs *pfs, __OSInode *inode, u8 flag, u8 bank);

s32 func_804478B0(OSPfs *pfs, s32 *bytes_not_used)
{
    int j;
    int pages = 0;
    __OSInode inode;
    s32 ret = 0;
    u8 bank;
    int offset;

    if ((pfs->status & 1) == 0)
        return 5;
    if (func_8044984C(pfs) == 2)
        return 2;
    for (bank = 0; bank < pfs->banks; bank++) {
        ret = func_804494F4(pfs, &inode, 0, bank);
        if (ret != 0)
            return ret;
        offset = ((bank > 0) ? 1 : pfs->inode_start_page);

        for (j = offset; j < 128; j++) {
            if (inode.inode_page[j].ipage == 3) {
                pages++;
            }
        }
    }

    *bytes_not_used = pages * 8 * 32;
    return 0;
}
