#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* osPfsDeleteFile, drafted from ultralib src/io/pfsdeletefile.c (2.0I branch): find a controller pak
   file, free every page of its chain bank by bank, and write an empty directory entry in its place. */








extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_802B8880_de(void *queue, int channel, u16 address, u8 *buffer, int force);
extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_80448BFC_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_804480E0_de(OSPfs_func_80445F80_de *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name, s32 *file_no);
extern s32 func_804488A4_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, u8 flag, u8 bank);
extern s32 func_804467AC_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, u8 start_page, u16 *sum, u8 bank,
                         __OSInodeUnit *last_page, int flag);

s32 func_80446580_de(OSPfs_func_80445F80_de *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name)
{
    s32 file_no;
    int k;
    s32 ret;
    __OSInode inode;
    __OSDir dir;
    u16 sum = 0;
    __OSInodeUnit last_page;
    u8 startpage;
    u8 bank;

    if (company_code == 0 || game_code == 0) {
        return 5;
    }

    if ((pfs->status & 1) == 0)
        return 5;
    if (func_80448BFC_de(pfs) == 2)
        return 2;
    if (pfs->activebank != 0) {
        pfs->activebank = 0;
        ret = func_80448CC4_de(pfs);
        if (ret != 0)
            return ret;
    }
    ret = func_804480E0_de(pfs, company_code, game_code, game_name, ext_name, &file_no);
    if (ret != 0)
        return ret;

    if (file_no == -1) {
        return 5;
    }
    ret = func_802B84C0_de(pfs->queue, pfs->channel, pfs->dir_table + file_no, (u8 *)&dir);
    if (ret != 0)
        return ret;

    startpage = dir.start_page.inode_t.page;

    for (bank = dir.start_page.inode_t.bank; bank < pfs->banks;) {
        ret = func_804488A4_de(pfs, &inode, 0, bank);
        if (ret != 0)
            return ret;
        ret = func_804467AC_de(pfs, &inode, startpage, &sum, bank, &last_page, 1);
        if (ret != 0)
            return ret;
        ret = func_804488A4_de(pfs, &inode, 1, bank);
        if (ret != 0)
            return ret;

        if (last_page.ipage == 1) {
            break;
        }

        bank = last_page.inode_t.bank;
        startpage = last_page.inode_t.page;
    }

    if (bank >= pfs->banks) {
        return 3;
    }

    dir.game_code = 0;
    dir.company_code = 0;
    dir.start_page.ipage = 0;
    dir.data_sum = 0;
    for (k = 0; k < 16; k++) {
        dir.game_name[k] = 0;
    }
    for (k = 0; k < 4; k++) {
        dir.ext_name[k] = 0;
    }
    dir.status = 0;

    ret = func_802B8880_de(pfs->queue, pfs->channel, pfs->dir_table + file_no, (u8 *)&dir, 0);

    return ret;
}
