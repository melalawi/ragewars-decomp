/* osCreatePiManager, drafted from ultralib src/io/pimgr.c (2.0I, _FINALROM). */
#include "basetypes.h"

typedef void *OSMesg;
typedef struct OSMesgQueue OSMesgQueue;
typedef struct OSThread OSThread;

typedef struct {
    u32 active;
    OSThread *thread;
    OSMesgQueue *cmdQueue;
    OSMesgQueue *evtQueue;
    OSMesgQueue *acsQueue;
    s32 (*dma)(s32, u32, void *, u32);
    s32 (*edma)(void *, s32, u32, void *, u32);
} OSDevMgr;

extern OSDevMgr D_800D8390;
extern u32 D_800D83C0;
extern OSThread D_8014D700;
extern OSMesgQueue D_8014E930;
extern long long D_8014D930[];
extern OSMesg D_8014E948[1];
extern OSMesgQueue D_8014EA58;
extern s32 D_2BEB30(s32, u32, void *, u32);
extern s32 D_2BE4A0(void *, s32, u32, void *, u32);
extern void D_2BE100(void *);

extern void func_802BFD50(OSMesgQueue *mq, OSMesg *msg, s32 count);
extern void func_802BEA40(void);
extern void func_802C0640(s32 event, OSMesgQueue *mq, OSMesg msg);
extern s32 func_802BFE90(OSThread *t);
extern void func_802C06E0(OSThread *t, s32 pri);
extern void func_802BFD80(OSThread *t, s32 id, void (*entry)(void *), void *arg, void *sp, s32 pri);
extern void func_802C0840(OSThread *t);
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);

void func_802BDEC0(s32 pri, OSMesgQueue *cmdQ, OSMesg *cmdBuf, s32 cmdMsgCnt)
{
    u32 savedMask;
    s32 oldPri;
    s32 myPri;

    if (D_800D8390.active) {
        return;
    }
    func_802BFD50(cmdQ, cmdBuf, cmdMsgCnt);
    func_802BFD50(&D_8014E930, D_8014E948, 1);

    if (!D_800D83C0) {
        func_802BEA40();
    }

    func_802C0640(8, &D_8014E930, (OSMesg)0x22222222);
    oldPri = -1;
    myPri = func_802BFE90(0);

    if (myPri < pri) {
        oldPri = myPri;
        func_802C06E0(0, pri);
    }

    savedMask = func_802C2020();
    D_800D8390.active = 1;
    D_800D8390.thread = &D_8014D700;
    D_800D8390.cmdQueue = cmdQ;
    D_800D8390.evtQueue = &D_8014E930;
    D_800D8390.acsQueue = &D_8014EA58;
    D_800D8390.dma = D_2BEB30;
    D_800D8390.edma = D_2BE4A0;
    func_802BFD80(&D_8014D700, 0, D_2BE100, &D_800D8390, D_8014D930 + 0x1000 / sizeof(long long), pri);
    func_802C0840(&D_8014D700);
    func_802C2040(savedMask);

    if (oldPri != -1) {
        func_802C06E0(0, oldPri);
    }
}
