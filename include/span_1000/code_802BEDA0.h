#ifndef UNBAKE_SPAN_1000_CODE_802BEDA0_H
#define UNBAKE_SPAN_1000_CODE_802BEDA0_H
#include "common/types.h"
#include "../types.h"
struct OSDevMgr_func_802BA350_de;
typedef struct OSDevMgr_func_802BA350_de OSDevMgr_func_802BA350_de;

struct OSIoMesgHdr_func_802BA350_de;
typedef struct OSIoMesgHdr_func_802BA350_de OSIoMesgHdr_func_802BA350_de;

struct OSIoMesg_func_802BA350_de;
typedef struct OSIoMesg_func_802BA350_de OSIoMesg_func_802BA350_de;

union OSTask;
typedef union OSTask OSTask;

struct OSTask_t;
typedef struct OSTask_t OSTask_t;

struct OSDevMgr_func_802BA350_de;
struct OSMesgQueue;
struct OSThread;
struct OSDevMgr_func_802BA350_de {
    u32 active;
    struct OSThread *thread;
    struct OSMesgQueue *cmdQueue;
    struct OSMesgQueue *evtQueue;
    struct OSMesgQueue *acsQueue;
    s32 (*dma)(s32, u32, void *, u32);
    s32 (*edma)(void *, s32, u32, void *, u32);
};
struct OSIoMesgHdr_func_802BA350_de;
struct OSMesgQueue;
struct OSIoMesgHdr_func_802BA350_de {
    u16 type;
    u8 pri;
    u8 status;
    struct OSMesgQueue *retQueue;
};
struct OSIoMesg_func_802BA350_de;
struct OSIoMesg_func_802BA350_de {
    OSIoMesgHdr_func_802BA350_de hdr;
    void *dramAddr;
    u32 devAddr;
    u32 size;
    void *piHandle;
};
struct OSTask_t;
struct OSTask_t {
    u32 type;
    u32 flags;
    u64 *ucode_boot;
    u32 ucode_boot_size;
    u64 *ucode;
    u32 ucode_size;
    u64 *ucode_data;
    u32 ucode_data_size;
    u64 *dram_stack;
    u32 dram_stack_size;
    u64 *output_buff;
    u64 *output_buff_size;
    u64 *data_ptr;
    u32 data_size;
    u64 *yield_data_ptr;
    u32 yield_data_size;
};
union OSTask;
union OSTask {
    OSTask_t t;
    long long force_structure_alignment;
};
extern int func_802B9D70_de(void);
extern int func_802B9FB0_de(void);
extern void func_802BA100_de(unsigned int arg0);
extern void func_802BA120_de(void);
extern int func_802BA140_de(void * arg0);
extern unsigned int func_802BA190_de(void);
extern void *func_802BA310_de(void);
extern void func_802BA350_de(s32 pri);
#endif
