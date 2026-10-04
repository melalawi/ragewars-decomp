#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* corrupted_init, drafted from ultralib src/io/pfschecker.c (2.0I branch): build the checker's map of
   which banks hold inode links into each sector of other banks. */










extern s32 func_804488A4_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, u8 flag, u8 bank);

s32 func_8044756C_de(OSPfs_func_80445F80_de *pfs, __OSInodeCache *cache)
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

        ret = func_804488A4_de(pfs, &tmp_inode, 0, bank);

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
