/* corrupted_init, drafted from ultralib src/io/pfschecker.c (2.0I branch): build the checker's map of
   which banks hold inode links into each sector of other banks. */
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
    __OSInode inode;
    u8 bank;
    u8 map[256];
} __OSInodeCache;

extern s32 func_804494F4(OSPfs *pfs, __OSInode *inode, u8 flag, u8 bank);

s32 func_804481BC(OSPfs *pfs, __OSInodeCache *cache)
{
    int i;
    int n;
    int offset;
    u8 bank;
    __OSInodeUnit tpage;
    __OSInode tmp_inode;
    s32 ret;

    for (i = 0; i < 256; i++) {
        cache->map[i] = 0;
    }

    cache->bank = -1;
    for (bank = 0; bank < pfs->banks; bank++) {
        offset = bank > 0 ? 1 : pfs->inode_start_page;

        ret = func_804494F4(pfs, &tmp_inode, 0, bank);

        if (ret != 0 && ret != 3) {
            return ret;
        }

        for (i = offset; i < 128; i++) {
            tpage = tmp_inode.inode_page[i];

            if (tpage.ipage >= pfs->inode_start_page && tpage.inode_t.bank != bank) {
                n = ((tpage.inode_t.page) / 4) + ((tpage.inode_t.bank % 8) * 32);
                cache->map[n] |= 1 << (bank % 8);
            }
        }
    }
    return 0;
}
