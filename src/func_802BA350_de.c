#include "span_1000/code_802BEDA0.h"
#include "span_1000/code_802C0384.h"
#include "types.h"
/* osCreateViManager, drafted from ultralib src/io/vimgr.c (2.0I: no __additional_scanline). */

typedef void *OSMesg;
typedef struct OSMesgQueue OSMesgQueue;
typedef struct OSThread OSThread;







extern OSDevMgr_func_802BA350_de D_800D4420;
extern OSThread D_80148850;
extern u64 D_8014ED10_de[];
extern OSMesgQueue D_80149A80;
extern OSMesg D_80149AA0[5];
extern OSIoMesg_func_802BA350_de D_80149AC0;
extern OSIoMesg_func_802BA350_de D_80149AE0;
extern void D_002BA4C0(void *arg);


extern void func_802BAC60_de(OSMesgQueue *mq, OSMesg *msg, s32 count);
extern void func_802BB550_de(s32 event, OSMesgQueue *mq, OSMesg msg);
extern s32 func_802BADA0_de(OSThread *t);
extern void func_802BB5F0_de(OSThread *t, s32 pri);
extern void func_802BAC90_de(OSThread *t, s32 id, void (*entry)(void *), void *arg, void *sp, s32 pri);
extern void func_802BA210_de(void);
extern void func_802BB750_de(OSThread *t);
extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32 mask);

void func_802BA350_de(s32 pri)
{
    u32 savedMask;
    s32 oldPri;
    s32 myPri;

    if (D_800D4420.active) {
        return;
    }
    func_802BB9F8_de();
    func_802BAC60_de(&D_80149A80, D_80149AA0, 5);
    D_80149AC0.hdr.type = 13;
    D_80149AC0.hdr.pri = 0;
    D_80149AC0.hdr.retQueue = 0;
    D_80149AE0.hdr.type = 14;
    D_80149AE0.hdr.pri = 0;
    D_80149AE0.hdr.retQueue = 0;
    func_802BB550_de(7, &D_80149A80, &D_80149AC0);
    func_802BB550_de(3, &D_80149A80, &D_80149AE0);
    oldPri = -1;
    myPri = func_802BADA0_de(0);

    if (myPri < pri) {
        oldPri = myPri;
        func_802BB5F0_de(0, pri);
    }

    savedMask = func_802BCF30_de();
    D_800D4420.active = 1;
    D_800D4420.thread = &D_80148850;
    D_800D4420.cmdQueue = &D_80149A80;
    D_800D4420.evtQueue = &D_80149A80;
    D_800D4420.acsQueue = 0;
    D_800D4420.dma = 0;
    D_800D4420.edma = 0;
    func_802BAC90_de(&D_80148850, 0, D_002BA4C0, &D_800D4420, D_8014ED10_de + 0x1000 / sizeof(u64), pri);
    func_802BA210_de();
    func_802BB750_de(&D_80148850);
    func_802BCF50_de(savedMask);

    if (oldPri != -1) {
        func_802BB5F0_de(0, oldPri);
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
