/* __osRepairPackId, drafted from ultralib src/io/contpfs.c (2.0I branch): probe how many banks the
   controller pak really has, build a fresh id from the damaged one, write it to all four id areas and
   verify the first, with __osIdCheckSum as an inline helper the cartridge inlines. */
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

typedef struct {
    u32 repaired;
    u32 random;
    u64 serial_mid;
    u64 serial_low;
    u16 deviceid;
    u8 banks;
    u8 version;
    u16 checksum;
    u16 inverted_checksum;
} __OSPackId;

extern u32 func_802C1FF0(void);
extern s32 func_80449914(OSPfs *pfs);
extern s32 func_802BD590(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_802BD950(void *queue, int channel, u16 address, u8 *buffer, int force);

static inline s32 __osIdCheckSum(u16 *ptr, u16 *csum, u16 *icsum)
{
    u16 data = 0;
    u32 j;

    *csum = *icsum = 0;

    for (j = 0; j < 28; j += 2) {
        data = *(u16 *)((u32)ptr + j);
        *csum += data;
        *icsum += ~data;
    }

    return 0;
}

s32 func_80448EB0(OSPfs *pfs, __OSPackId *badid, __OSPackId *newid)
{
    s32 ret = 0;
    u8 temp[32];
    u8 comp[32];
    u8 mask = 0;
    int i;
    int j;
    u16 index[4];

    if (pfs->activebank != 0) {
        pfs->activebank = 0;
        ret = func_80449914(pfs);
        if (ret != 0)
            return ret;
    }

    newid->repaired = -1;
    newid->random = func_802C1FF0();
    newid->serial_mid = badid->serial_mid;
    newid->serial_low = badid->serial_low;

    j = 0;
    do {
        pfs->activebank = j;
        ret = func_80449914(pfs);
        if (ret != 0)
            return ret;
        ret = func_802BD590(pfs->queue, pfs->channel, 0, temp);
        if (ret != 0)
            return ret;

        temp[0] = j | 0x80;

        for (i = 1; i < 32; i++) {
            temp[i] = ~temp[i];
        }

        ret = func_802BD950(pfs->queue, pfs->channel, 0, temp, 0);
        if (ret != 0)
            return ret;
        ret = func_802BD590(pfs->queue, pfs->channel, 0, comp);
        if (ret != 0)
            return ret;

        for (i = 0; i < 32; i++) {
            if (comp[i] != temp[i]) {
                break;
            }
        }

        if (i != 32) {
            break;
        }

        if (j > 0) {
            pfs->activebank = 0;
            ret = func_80449914(pfs);
            if (ret != 0)
                return ret;
            ret = func_802BD590(pfs->queue, pfs->channel, 0, (u8 *)temp);
            if (ret != 0)
                return ret;

            if (temp[0] != 0x80) {
                break;
            }
        }

        j++;
    } while (j < 62);

    pfs->activebank = 0;
    ret = func_80449914(pfs);
    if (ret != 0)
        return ret;

    mask = (j > 0) ? 1 : 0;

    newid->deviceid = (badid->deviceid & (u16)~1) | mask;
    newid->banks = j;
    newid->version = badid->version;
    __osIdCheckSum((u16 *)newid, &newid->checksum, &newid->inverted_checksum);
    index[0] = 1;
    index[1] = 3;
    index[2] = 4;
    index[3] = 6;

    for (i = 0; i < 4; i++) {
        ret = func_802BD950(pfs->queue, pfs->channel, index[i], (u8 *)newid, 1);
        if (ret != 0)
            return ret;
    }

    ret = func_802BD590(pfs->queue, pfs->channel, 1, (u8 *)temp);
    if (ret != 0)
        return ret;

    for (i = 0; i < 32; i++) {
        if (temp[i] != ((u8 *)newid)[i]) {
            return 10;
        }
    }
    return 0;
}
