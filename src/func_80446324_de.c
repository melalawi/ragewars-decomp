#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"
/* __osPfsDeclearPage, drafted from ultralib src/io/pfsallocatefile.c (2.0I branch): claim up to the
   requested number of free pages in one bank's inode table, linking them in order and clearing each
   claimed page on the pak. */








extern s32 func_804464F0_de(OSPfs_func_80445F80_de *pfs, int page_no, u8 *data, u8 bank);

s32 func_80446324_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, int file_size_in_pages, int *first_page, u8 bank,
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
            ret = func_804464F0_de(pfs, old_page, tmp_data, bank);
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
        ret = func_804464F0_de(pfs, old_page, tmp_data, bank);
        *last_page = 0;
        return ret;
    }
}
