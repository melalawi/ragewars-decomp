/* __osPfsDeclearPage, drafted from ultralib src/io/pfsallocatefile.c (2.0I branch): claim up to the
   requested number of free pages in one bank's inode table, linking them in order and clearing each
   claimed page on the pak. */
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
extern s32 func_80447140(OSPfs *pfs, int page_no, u8 *data, u8 bank);

s32 func_80446F74(OSPfs *pfs, __OSInode *inode, int file_size_in_pages, int *first_page, u8 bank,
                  int *decleared, int *last_page)
{
    int j;
    int spage;
    int old_page;
    u8 tmp_data[32];
    int i;
    s32 ret = 0;
    int offset = bank > 0 ? 1 : pfs->inode_start_page;

    for (j = offset; j < 128; j++) {
        if (inode->inode_page[j].ipage == 3) {
            break;
        }
    }

    if (j == 128) {
        *first_page = -1;
        return ret;
    }

    for (i = 0; i < 32; i++) {
        tmp_data[i] = 0;
    }

    spage = j;
    *decleared = 1;
    old_page = j;
    j++;

    while (file_size_in_pages > *decleared && j < 128) {
        if (inode->inode_page[j].ipage == 3) {
            inode->inode_page[old_page].inode_t.bank = bank;
            inode->inode_page[old_page].inode_t.page = j;
            ret = func_80447140(pfs, old_page, tmp_data, bank);
            if (ret != 0)
                return ret;
            old_page = j;
            (*decleared)++;
        }
        j++;
    }

    *first_page = spage;

    if (j == 128 && file_size_in_pages > *decleared) {
        *last_page = old_page;
        return ret;
    } else {
        inode->inode_page[old_page].ipage = 1;
        ret = func_80447140(pfs, old_page, tmp_data, bank);
        *last_page = 0;
        return ret;
    }
}
