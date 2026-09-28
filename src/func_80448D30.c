/* osPfsFindFile, drafted from ultralib src/io/pfssearchfile.c (2.0I branch): scan the controller pak
   directory for the entry with the given company and game codes and, when given, names, returning its
   index. */
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
extern s32 func_8044984C(OSPfs *pfs);

s32 func_80448D30(OSPfs *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name, s32 *file_no)
{
    s32 j;
    int i;
    __OSDir dir;
    s32 ret = 0;
    int fail;

    if (func_8044984C(pfs) == 2)
        return 2;

    for (j = 0; j < pfs->dir_size; j++) {
        ret = func_802BD590(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&dir);
        if (ret != 0)
            return ret;

        if ((dir.company_code == company_code) && dir.game_code == game_code) {
            fail = 0;

            if (game_name != 0) {
                for (i = 0; i < 16; i++) {
                    if (dir.game_name[i] != game_name[i]) {
                        fail = 1;
                        break;
                    }
                }
            }

            if (ext_name != 0 && !fail) {
                for (i = 0; i < 4; i++) {
                    if (dir.ext_name[i] != ext_name[i]) {
                        fail = 1;
                        break;
                    }
                }
            }

            if (!fail) {
                *file_no = j;
                return ret;
            }
        }
    }

    *file_no = -1;
    return 5;
}
