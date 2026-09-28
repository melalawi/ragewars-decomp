/* __osPfsReleasePages, drafted from ultralib src/io/pfsdeletefile.c (2.0I branch): walk a file's page
   chain within one bank, marking each page free and summing its blocks, and report the link that
   leaves the bank. */
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
extern s32 func_8044759C(OSPfs *pfs, u8 page_no, u16 *sum, u8 bank);

s32 func_804473FC(OSPfs *pfs, __OSInode *inode, u8 start_page, u16 *sum, u8 bank,
                  __OSInodeUnit *last_page, int flag)
{
    __OSInodeUnit next_page;
    __OSInodeUnit old_page;
    s32 ret;
    int offset;

    ret = 0;
    next_page = inode->inode_page[start_page];

    if (next_page.ipage != 1) {
        offset = (next_page.inode_t.bank > 0) ? 1 : pfs->inode_start_page;
    } else {
        offset = (bank > 0) ? 1 : pfs->inode_start_page;
    }

    if (next_page.inode_t.page < offset && next_page.ipage != 1) {
        return 3;
    }

    *last_page = next_page;

    if (flag == 1) {
        inode->inode_page[start_page].ipage = 3;
    }

    ret = func_8044759C(pfs, start_page, sum, bank);
    if (ret != 0)
        return ret;

    if (next_page.ipage == 1) {
        return 0;
    }

    while (next_page.ipage >= pfs->inode_start_page) {
        old_page = next_page;
        next_page = inode->inode_page[next_page.inode_t.page];
        inode->inode_page[old_page.inode_t.page].ipage = 3;

        ret = func_8044759C(pfs, old_page.inode_t.page, sum, bank);
        if (ret != 0)
            return ret;

        if (next_page.inode_t.bank != bank) {
            break;
        }
    }

    if (next_page.ipage >= pfs->inode_start_page && next_page.inode_t.bank == bank) {
        inode->inode_page[next_page.inode_t.page].ipage = 3;
    }

    *last_page = next_page;
    return 0;
}
