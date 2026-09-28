/* __osDevMgrMain, drafted from ultralib src/io/devmgr.c (2.0I): the PI manager thread. It receives
   each OSIoMesg on the command queue; a 64DD block or track request drives the leo transfer and
   answers from the event queue, and every other request runs the manager's dma or edma routine
   under the access queue and answers when the PI interrupt arrives. This object is built with
   -fforce-addr (see the Makefile), under which the unchanged reference text is byte-identical.
   The switch's jump table is resident at the cartridge's jtbl_800CCB80
   (scripts/build/place_inline_rodata.py). */
#include "basetypes.h"

typedef void *OSMesg;
typedef struct OSMesgQueue OSMesgQueue;

typedef struct {
    u32 errStatus;
    void *dramAddr;
    void *C2Addr;
    u32 sectorSize;
    u32 C1ErrNum;
    u32 C1ErrSector[4];
} __OSBlockInfo;

typedef struct {
    u32 cmdType;
    u16 transferMode;
    u16 blockNum;
    s32 sectorNum;
    u32 devAddr;
    u32 bmCtlShadow;
    u32 seqCtlShadow;
    __OSBlockInfo block[2];
} __OSTranxInfo;

typedef struct OSPiHandle_s {
    struct OSPiHandle_s *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
    __OSTranxInfo transferInfo;
} OSPiHandle;

typedef struct {
    u16 type;
    u8 pri;
    u8 status;
    OSMesgQueue *retQueue;
} OSIoMesgHdr;

typedef struct {
    OSIoMesgHdr hdr;
    void *dramAddr;
    u32 devAddr;
    u32 size;
    OSPiHandle *piHandle;
} OSIoMesg;

typedef struct {
    u32 active;
    void *thread;
    OSMesgQueue *cmdQueue;
    OSMesgQueue *evtQueue;
    OSMesgQueue *acsQueue;
    s32 (*dma)(s32, u32, void *, u32);
    s32 (*edma)(OSPiHandle *, s32, u32, void *, u32);
} OSDevMgr;

extern s32 func_802C0390(OSMesgQueue *mq, OSMesg *msg, s32 flag);
extern s32 func_802C0510(OSMesgQueue *mq, OSMesg msg, s32 flag);
extern s32 func_802BE680(OSPiHandle *pihandle, u32 devAddr, u32 *data);
extern s32 func_802BE820(OSPiHandle *pihandle, u32 devAddr, u32 data);
extern void func_802C04C0(u32 mask);
extern void func_802C06A0(u32 mask);
extern void func_802C0D10(void);

#define OS_MESG_TYPE_LOOPBACK 10
#define OS_MESG_TYPE_DMAREAD 11
#define OS_MESG_TYPE_DMAWRITE 12
#define OS_MESG_TYPE_EDMAREAD 15
#define OS_MESG_TYPE_EDMAWRITE 16
#define OS_MESG_NOBLOCK 0
#define OS_MESG_BLOCK 1
#define OS_READ 0
#define OS_WRITE 1
#define DEVICE_TYPE_64DD 2
#define LEO_CMD_TYPE_0 0
#define LEO_CMD_TYPE_1 1
#define LEO_SECTOR_MODE 3
#define LEO_TRACK_MODE 2
#define LEO_BM_CTL 0x05000510
#define LEO_STATUS 0x05000508
#define LEO_BM_CTL_RESET 0x10000000
#define LEO_BM_CTL_CLR_MECHANIC_INTR 0x01000000
#define LEO_STATUS_MECHANIC_INTERRUPT 0x02000000
#define LEO_ERROR_GOOD 0
#define LEO_ERROR_4 4
#define LEO_ERROR_29 29
#define OS_IM_PI 0x00100401
#define SR_IBIT4 0x800
#define PI_STATUS_REG 0xA4600010
#define PI_CLR_INTR 2
#define IO_WRITE(addr, data) (*(volatile u32 *)(addr) = (u32)(data))

void func_802BE100(void *args)
{
    OSIoMesg *mb;
    OSMesg em;
    OSMesg dummy;
    s32 ret;
    OSDevMgr *dm;
    s32 messageSend = 0;

    dm = (OSDevMgr *)args;
    mb = 0;
    ret = 0;

    while (1) {
        func_802C0390(dm->cmdQueue, (OSMesg *)&mb, OS_MESG_BLOCK);

        if (mb->piHandle != 0 && mb->piHandle->type == DEVICE_TYPE_64DD &&
            (mb->piHandle->transferInfo.cmdType == LEO_CMD_TYPE_0 ||
             mb->piHandle->transferInfo.cmdType == LEO_CMD_TYPE_1)) {
            __OSBlockInfo *blockInfo;
            __OSTranxInfo *info;
            info = &mb->piHandle->transferInfo;
            blockInfo = &info->block[info->blockNum];
            info->sectorNum = -1;

            if (info->transferMode != LEO_SECTOR_MODE) {
                blockInfo->dramAddr = (void *)((u32)blockInfo->dramAddr - blockInfo->sectorSize);
            }

            if (info->transferMode == LEO_TRACK_MODE && mb->piHandle->transferInfo.cmdType == LEO_CMD_TYPE_0) {
                messageSend = 1;
            } else {
                messageSend = 0;
            }

            func_802C0390(dm->acsQueue, &dummy, OS_MESG_BLOCK);
            func_802C04C0(OS_IM_PI);
            func_802BE820(mb->piHandle, LEO_BM_CTL, (info->bmCtlShadow | 0x80000000));

        readblock1:
            func_802C0390(dm->evtQueue, &em, OS_MESG_BLOCK);
            info = &mb->piHandle->transferInfo;
            blockInfo = &info->block[info->blockNum];

            if (blockInfo->errStatus == LEO_ERROR_29) {
                u32 stat;
                func_802BE820(mb->piHandle, LEO_BM_CTL, info->bmCtlShadow | LEO_BM_CTL_RESET);
                func_802BE820(mb->piHandle, LEO_BM_CTL, info->bmCtlShadow);
                func_802BE680(mb->piHandle, LEO_STATUS, &stat);

                if (stat & LEO_STATUS_MECHANIC_INTERRUPT) {
                    func_802BE820(mb->piHandle, LEO_BM_CTL, info->bmCtlShadow | LEO_BM_CTL_CLR_MECHANIC_INTR);
                }

                blockInfo->errStatus = LEO_ERROR_4;
                IO_WRITE(PI_STATUS_REG, PI_CLR_INTR);
                func_802C06A0(OS_IM_PI | SR_IBIT4);
            }

            func_802C0510(mb->hdr.retQueue, mb, OS_MESG_NOBLOCK);

            if (messageSend == 1 && mb->piHandle->transferInfo.block[0].errStatus == LEO_ERROR_GOOD) {
                messageSend = 0;
                goto readblock1;
            }

            func_802C0510(dm->acsQueue, 0, OS_MESG_NOBLOCK);
            if (mb->piHandle->transferInfo.blockNum == 1) {
                func_802C0D10();
            }
        } else {
            switch (mb->hdr.type) {
                case OS_MESG_TYPE_DMAREAD:
                    func_802C0390(dm->acsQueue, &dummy, OS_MESG_BLOCK);
                    ret = dm->dma(OS_READ, mb->devAddr, mb->dramAddr, mb->size);
                    break;
                case OS_MESG_TYPE_DMAWRITE:
                    func_802C0390(dm->acsQueue, &dummy, OS_MESG_BLOCK);
                    ret = dm->dma(OS_WRITE, mb->devAddr, mb->dramAddr, mb->size);
                    break;
                case OS_MESG_TYPE_EDMAREAD:
                    func_802C0390(dm->acsQueue, &dummy, OS_MESG_BLOCK);
                    ret = dm->edma(mb->piHandle, OS_READ, mb->devAddr, mb->dramAddr, mb->size);
                    break;
                case OS_MESG_TYPE_EDMAWRITE:
                    func_802C0390(dm->acsQueue, &dummy, OS_MESG_BLOCK);
                    ret = dm->edma(mb->piHandle, OS_WRITE, mb->devAddr, mb->dramAddr, mb->size);
                    break;
                case OS_MESG_TYPE_LOOPBACK:
                    func_802C0510(mb->hdr.retQueue, mb, OS_MESG_NOBLOCK);
                    ret = -1;
                    break;
                default:
                    ret = -1;
                    break;
            }

            if (ret == 0) {
                func_802C0390(dm->evtQueue, &em, OS_MESG_BLOCK);
                func_802C0510(mb->hdr.retQueue, mb, OS_MESG_NOBLOCK);
                func_802C0510(dm->acsQueue, 0, OS_MESG_NOBLOCK);
            }
        }
    }
}
