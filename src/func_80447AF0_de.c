#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* Reads or writes Controller Pak file blocks while validating and following its inode chain, based on the 2.0I public reference. */








extern s32 func_80448CC4_de(OSPfs_func_80445F80_de *pfs);
extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_802B8880_de(void *queue, int channel, u16 address, u8 *buffer, int force);


extern s32 func_804488A4_de(OSPfs_func_80445F80_de *,__OSInode *,u8,u8);
extern s32 func_80448BFC_de(OSPfs_func_80445F80_de *);
#define BLOCKSIZE 32
#define PFS_ONE_PAGE 8
#define PFS_EOF 1
#define PFS_READ 0
#define OS_READ 0
#define PFS_WRITE 1
#define PFS_INITIALIZED 1
#define DIR_STATUS_OCCUPIED 2
#define PFS_ERR_INVALID 5
#define PFS_ERR_INCONSISTENT 3
#define PFS_ERR_BAD_DATA 6
#define PFS_ERR_NEW_PACK 2
#define FALSE 0
#define ERRCK(fn) ret=fn; if(ret!=0) return ret
#define SELECT_BANK(pfs,bank) (pfs->activebank=(bank),func_80448CC4_de(pfs))
#define SET_ACTIVEBANK_TO_ZERO() if(pfs->activebank!=0) {pfs->activebank=0;ERRCK(func_80448CC4_de(pfs));} (void)0
#define PFS_CHECK_ID() if(func_80448BFC_de(pfs)==2) return 2
#define PFS_CHECK_STATUS() if((pfs->status&1)==0) return 5
#define CHECK_IPAGE(p)                                                                                        \
    (((p).ipage >= pfs->inode_start_page) && ((p).inode_t.bank < pfs->banks) && ((p).inode_t.page >= 0x01) && \
     ((p).inode_t.page < 0x80))

static inline s32 __osPfsGetNextPage(OSPfs_func_80445F80_de* pfs, u8* bank, __OSInode* inode, __OSInodeUnit* page) {
    s32 ret;

    if (page->inode_t.bank != *bank) {
        *bank = page->inode_t.bank;
        ERRCK(func_804488A4_de(pfs, inode, PFS_READ, *bank));
    }

    *page = inode->inode_page[page->inode_t.page];

    if (!CHECK_IPAGE(*page)) {
        if (page->ipage == PFS_EOF) {
            return PFS_ERR_INVALID;
        }

        return PFS_ERR_INCONSISTENT;
    }
    return 0;
}
s32 func_80447AF0_de(OSPfs_func_80445F80_de* pfs, s32 file_no, u8 flag, int offset, int size_in_bytes, u8* data_buffer) {
    s32 ret;
    __OSDir dir;
    __OSInode inode;
    __OSInodeUnit cur_page;
    int cur_block;
    int siz_block;
    u8* buffer;
    u8 bank;
    u16 blockno;

    if ((file_no >= (s32)pfs->dir_size) || (file_no < 0)) {
        return PFS_ERR_INVALID;
    }

    if ((size_in_bytes <= 0) || ((size_in_bytes % BLOCKSIZE) != 0)) {
        return PFS_ERR_INVALID;
    }

    if ((offset < 0) || ((offset % BLOCKSIZE) != 0)) {
        return PFS_ERR_INVALID;
    }

    PFS_CHECK_STATUS();
    PFS_CHECK_ID();
    SET_ACTIVEBANK_TO_ZERO();
    ERRCK(func_802B84C0_de(pfs->queue, pfs->channel, pfs->dir_table + file_no, (u8*)&dir));

    if (dir.company_code == 0 || dir.game_code == 0) {
        return PFS_ERR_INVALID;
    }

    if (!CHECK_IPAGE(dir.start_page)) {
        if ((dir.start_page.ipage == PFS_EOF)) {
            return PFS_ERR_INVALID;
        }

        return PFS_ERR_INCONSISTENT;
    }

    if (flag == PFS_READ && (dir.status & DIR_STATUS_OCCUPIED) == 0) {
        return PFS_ERR_BAD_DATA;
    }

    bank = -1;
    cur_block = offset / BLOCKSIZE;
    cur_page = dir.start_page;

    while (cur_block >= PFS_ONE_PAGE) {
        ERRCK(__osPfsGetNextPage(pfs, &bank, &inode, &cur_page));
        cur_block -= PFS_ONE_PAGE;
    }

    siz_block = size_in_bytes / BLOCKSIZE;
    buffer = data_buffer;

    while (siz_block > 0) {
        if (cur_block == PFS_ONE_PAGE) {
            ERRCK(__osPfsGetNextPage(pfs, &bank, &inode, &cur_page));
            cur_block = 0;
        }

        if (pfs->activebank != cur_page.inode_t.bank) {
            ERRCK(SELECT_BANK(pfs, cur_page.inode_t.bank));
        }

        blockno = cur_page.inode_t.page * PFS_ONE_PAGE + cur_block;

        if (flag == OS_READ) {
            ret = func_802B84C0_de(pfs->queue, pfs->channel, blockno, buffer);
        } else {
            ret = func_802B8880_de(pfs->queue, pfs->channel, blockno, buffer, FALSE);
        }

        if (ret != 0) {
            return ret;
        }
        buffer += BLOCKSIZE;
        cur_block++;
        siz_block--;
    }

    if (flag == PFS_WRITE && (dir.status & DIR_STATUS_OCCUPIED) == 0) {
        dir.status |= DIR_STATUS_OCCUPIED;
        ERRCK(SELECT_BANK(pfs, 0));
        ERRCK(func_802B8880_de(pfs->queue, pfs->channel, pfs->dir_table + file_no, (u8*)&dir, FALSE));
    }

    return 0;
}
