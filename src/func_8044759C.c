/* __osBlockSum, drafted from ultralib src/io/pfsdeletefile.c (2.0I branch): select a bank, add the
   byte sum of each of one page's eight blocks to a running total, and select bank zero again. */
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
extern s32 func_802BD590(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_80449914(OSPfs *pfs);
extern u16 func_804497D4(u8 *ptr, int length);

s32 func_8044759C(OSPfs *pfs, u8 page_no, u16 *sum, u8 bank)
{
    int i;
    s32 ret;
    u8 data[32];

    ret = 0;
    pfs->activebank = bank;
    ret = func_80449914(pfs);
    if (ret != 0)
        return ret;
    for (i = 0; i < 8; i++) {
        ret = func_802BD590(pfs->queue, pfs->channel, page_no * 8 + i, data);
        if (ret != 0) {
            pfs->activebank = 0;
            func_80449914(pfs);
            return ret;
        }
        *sum = *sum + func_804497D4(data, sizeof(data));
    }
    pfs->activebank = 0;
    ret = func_80449914(pfs);
    return ret;
}
