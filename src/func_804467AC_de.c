#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* __osPfsReleasePages, drafted from ultralib src/io/pfsdeletefile.c (2.0I branch): walk a file's page
   chain within one bank, marking each page free and summing its blocks, and report the link that
   leaves the bank. */








extern s32 func_8044694C_de(OSPfs_func_80445F80_de *pfs, u8 page_no, u16 *sum, u8 bank);

s32 func_804467AC_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, u8 start_page, u16 *sum, u8 bank,
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

    ret = func_8044694C_de(pfs, start_page, sum, bank);
    if (ret != 0)
        return ret;

    if (next_page.ipage == 1) {
        return 0;
    }

    while (next_page.ipage >= pfs->inode_start_page) {
        old_page = next_page;
        next_page = inode->inode_page[next_page.inode_t.page];
        inode->inode_page[old_page.inode_t.page].ipage = 3;

        ret = func_8044694C_de(pfs, old_page.inode_t.page, sum, bank);
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
