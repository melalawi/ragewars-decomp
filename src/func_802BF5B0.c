/* viMgrMain, drafted from ultralib src/io/vimgr.c: the VI manager thread swaps the video context on
   each retrace, posts the client's retrace message every retraceCount retraces, advances the
   64-bit OS time, and runs timer interrupts. retrace is its static u16. Inside the loop its
   address comes from an inline helper: GCC 2.8.1 hoists a user variable only when every use is in
   the block that sets it, but hoists the helper's unnamed temporary after the switch constant,
   which is the order the -fforce-addr library has. */
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

typedef struct {
    u16 state;
    u16 retraceCount;
    void *framep;
    void *modep;
    u32 control;
    OSMesgQueue *msgq;
    OSMesg msg;
} __OSViContext;

extern u16 D_8014EAD0;
extern u32 D_8014FE20;
extern u32 D_8014FE24;
extern u64 D_8014FE28;

extern __OSViContext *func_802BF730(void);
extern void func_802BFA00(void);
extern s32 func_802C0390(OSMesgQueue *mq, OSMesg *msg, s32 flag);
extern s32 func_802C0510(OSMesgQueue *mq, OSMesg msg, s32 flag);
extern u32 func_802C1FF0(void);
extern void func_802C09A0(void);

static inline u16 *viRetrace(void)
{
    return &D_8014EAD0;
}

void func_802BF5B0(void *arg)
{
    __OSViContext *vc;
    OSDevMgr *dm;
    OSIoMesg *mb;
    s32 first;
    u32 count;
    /* Each address is taken where it is used, as -fforce-addr compiles these globals, so the
       loop optimiser hoists it into a saved register. */
    u16 *retraceInit;
    u32 *intrCount;
    u32 *baseCounter;
    u64 *currentTime;

    mb = 0;
    first = 0;
    vc = func_802BF730();
    retraceInit = &D_8014EAD0;
    *retraceInit = vc->retraceCount;
    if (*retraceInit == 0) {
        *retraceInit = 1;
    }
    dm = (OSDevMgr *)arg;

    while (1) {
        func_802C0390(dm->evtQueue, (OSMesg *)&mb, 1);
        switch (mb->hdr.type) {
            case 13:
                func_802BFA00();
                if (--*viRetrace() == 0) {
                    vc = func_802BF730();
                    if (vc->msgq != 0) {
                        func_802C0510(vc->msgq, vc->msg, 0);
                    }
                    *viRetrace() = vc->retraceCount;
                }

                intrCount = &D_8014FE24;
                (*intrCount)++;

                if (first) {
                    count = func_802C1FF0();
                    D_8014FE28 = count;
                    first = 0;
                }

                baseCounter = &D_8014FE20;
                count = *baseCounter;
                *baseCounter = func_802C1FF0();
                count = *baseCounter - count;
                currentTime = &D_8014FE28;
                *currentTime = *currentTime + count;
                break;
            case 14:
                func_802C09A0();
                break;
            default:
                break;
        }
    }
}
