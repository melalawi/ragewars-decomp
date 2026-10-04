#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* osPfsChecker, drafted from ultralib src/io/pfschecker.c (2.0I branch): clear directory entries whose
   page chains are broken or shared, rebuild every bank's inode table from the surviving chains, and
   flag the pak corrupted when anything was fixed. */










extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_802B8880_de(void *queue, int channel, u16 address, u8 *buffer, int force);
extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_80448BFC_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_804486B8_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_804488A4_de(OSPfs_func_80445F80_de *pfs, __OSInode *inode, u8 flag, u8 bank);
extern s32 func_8044756C_de(OSPfs_func_80445F80_de *pfs, __OSInodeCache *cache);
extern s32 
#if defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_80448A48_eu_x
#else
func_804476B8_de
#endif
(OSPfs_func_80445F80_de *pfs, __OSInodeUnit fpage, __OSInodeCache *cache);

s32 func_80447130_de(OSPfs_func_80445F80_de *pfs)
{
    int j;
    s32 ret;
    __OSInodeUnit next_page;
    __OSInode checked_inode;
    __OSInode tmp_inode;
    __OSDir tmp_dir;
    __OSInodeUnit file_next_node[16];
    __OSInodeCache cache;
    int fixed = 0;
    u8 bank;
    s32 cc;
    s32 cl;
    int offset;

    ret = func_80448BFC_de(pfs);

    if (ret == 2) {
        ret = func_804486B8_de(pfs);
    }

    if (ret != 0) {
        return ret;
    }

    ret = func_8044756C_de(pfs, &cache);
    if (ret != 0)
        return ret;

    for (j = 0; j < pfs->dir_size; j++) {
        ret = func_802B84C0_de(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&tmp_dir);
        if (ret != 0)
            return ret;

        if (tmp_dir.company_code != 0 && tmp_dir.game_code != 0) {
            next_page = tmp_dir.start_page;
            cl = cc = 0;
            bank = 255;

            while ((next_page.ipage >= pfs->inode_start_page) && (next_page.inode_t.bank < pfs->banks) &&
                   (next_page.inode_t.page >= 0x01) && (next_page.inode_t.page < 0x80)) {
                if (bank != next_page.inode_t.bank) {
                    bank = next_page.inode_t.bank;
                    ret = func_804488A4_de(pfs, &tmp_inode, 0, bank);
                    if (ret != 0 && ret != 3) {
                        return ret;
                    }
                }

                if ((cc = 
#if defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_80448A48_eu_x
#else
func_804476B8_de
#endif
(pfs, next_page, &cache) - cl) != 0) {
                    break;
                }

                cl = 1;
                next_page = tmp_inode.inode_page[next_page.inode_t.page];
            }

            if (cc != 0 || next_page.ipage != 1) {
                tmp_dir.company_code = 0;
                tmp_dir.game_code = 0;
                tmp_dir.start_page.ipage = 0;
                tmp_dir.status = 0;
                tmp_dir.data_sum = 0;

                if (pfs->activebank != 0) {
                    pfs->activebank = 0;
                    ret = func_80448CC4_de(pfs);
                    if (ret != 0)
                        return ret;
                }
                ret = func_802B8880_de(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&tmp_dir, 0);
                if (ret != 0)
                    return ret;
                fixed++;
            }
        } else {
            if (tmp_dir.company_code != 0 || tmp_dir.game_code != 0) {
                tmp_dir.company_code = 0;
                tmp_dir.game_code = 0;
                tmp_dir.start_page.ipage = 0;
                tmp_dir.status = 0;
                tmp_dir.data_sum = 0;

                if (pfs->activebank != 0) {
                    pfs->activebank = 0;
                    ret = func_80448CC4_de(pfs);
                    if (ret != 0)
                        return ret;
                }
                ret = func_802B8880_de(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&tmp_dir, 0);
                if (ret != 0)
                    return ret;
                fixed++;
            }
        }
    }
    for (j = 0; j < pfs->dir_size; j++) {
        ret = func_802B84C0_de(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&tmp_dir);
        if (ret != 0)
            return ret;

        if (tmp_dir.company_code != 0 && tmp_dir.game_code != 0 &&
            tmp_dir.start_page.ipage >= (u16)pfs->inode_start_page) {
            file_next_node[j].ipage = tmp_dir.start_page.ipage;
        } else {
            file_next_node[j].ipage = 0;
        }
    }

    for (bank = 0; bank < pfs->banks; bank++) {
        ret = func_804488A4_de(pfs, &tmp_inode, 0, bank);

        if (ret != 0 && ret != 3) {
            return ret;
        }

        offset = (bank > 0) ? 1 : pfs->inode_start_page;

        for (j = 0; j < offset; j++) {
            checked_inode.inode_page[j].ipage = tmp_inode.inode_page[j].ipage;
        }

        for (; j < 128; j++) {
            checked_inode.inode_page[j].ipage = 3;
        }

        for (j = 0; j < pfs->dir_size; j++) {
            while (file_next_node[j].inode_t.bank == bank &&
                   file_next_node[j].ipage >= (u16)pfs->inode_start_page) {
                u8 pp = file_next_node[j].inode_t.page;
                file_next_node[j] = checked_inode.inode_page[pp] = tmp_inode.inode_page[pp];
            }
        }
        ret = func_804488A4_de(pfs, &checked_inode, 1, bank);
        if (ret != 0)
            return ret;
    }

    if (fixed) {
        pfs->status |= 2;
    } else {
        pfs->status &= ~2;
    }

    return 0;
}
