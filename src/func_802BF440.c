/* osCreateViManager, drafted from ultralib src/io/vimgr.c (2.0I: no __additional_scanline). */
#include "basetypes.h"

typedef void *OSMesg;
typedef struct OSMesgQueue OSMesgQueue;
typedef struct OSThread OSThread;

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
    void *piHandle;
} OSIoMesg;

typedef struct {
    u32 active;
    OSThread *thread;
    OSMesgQueue *cmdQueue;
    OSMesgQueue *evtQueue;
    OSMesgQueue *acsQueue;
    s32 (*dma)(s32, u32, void *, u32);
    s32 (*edma)(void *, s32, u32, void *, u32);
} OSDevMgr;

extern OSDevMgr D_800D8450;
extern OSThread D_8014EAE0;
extern u64 D_8014ED10[];
extern OSMesgQueue D_8014FD10;
extern OSMesg D_8014FD30[5];
extern OSIoMesg D_8014FD50;
extern OSIoMesg D_8014FD70;
extern void D_2BF5B0(void *arg);

extern void func_802C0AE8(void);
extern void func_802BFD50(OSMesgQueue *mq, OSMesg *msg, s32 count);
extern void func_802C0640(s32 event, OSMesgQueue *mq, OSMesg msg);
extern s32 func_802BFE90(OSThread *t);
extern void func_802C06E0(OSThread *t, s32 pri);
extern void func_802BFD80(OSThread *t, s32 id, void (*entry)(void *), void *arg, void *sp, s32 pri);
extern void func_802BF300(void);
extern void func_802C0840(OSThread *t);
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);

void func_802BF440(s32 pri)
{
    u32 savedMask;
    s32 oldPri;
    s32 myPri;

    if (D_800D8450.active) {
        return;
    }
    func_802C0AE8();
    func_802BFD50(&D_8014FD10, D_8014FD30, 5);
    D_8014FD50.hdr.type = 13;
    D_8014FD50.hdr.pri = 0;
    D_8014FD50.hdr.retQueue = 0;
    D_8014FD70.hdr.type = 14;
    D_8014FD70.hdr.pri = 0;
    D_8014FD70.hdr.retQueue = 0;
    func_802C0640(7, &D_8014FD10, &D_8014FD50);
    func_802C0640(3, &D_8014FD10, &D_8014FD70);
    oldPri = -1;
    myPri = func_802BFE90(0);

    if (myPri < pri) {
        oldPri = myPri;
        func_802C06E0(0, pri);
    }

    savedMask = func_802C2020();
    D_800D8450.active = 1;
    D_800D8450.thread = &D_8014EAE0;
    D_800D8450.cmdQueue = &D_8014FD10;
    D_800D8450.evtQueue = &D_8014FD10;
    D_800D8450.acsQueue = 0;
    D_800D8450.dma = 0;
    D_800D8450.edma = 0;
    func_802BFD80(&D_8014EAE0, 0, D_2BF5B0, &D_800D8450, D_8014ED10 + 0x1000 / sizeof(u64), pri);
    func_802BF300();
    func_802C0840(&D_8014EAE0);
    func_802C2040(savedMask);

    if (oldPri != -1) {
        func_802C06E0(0, oldPri);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D30D0_20[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D8450_20[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0xB5, 0x04, 0xF3};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFC60_20[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0xB5, 0x04, 0xF3};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D4420_20[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE5, 0x22, 0x39};
#endif
