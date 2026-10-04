#ifndef UNBAKE_SPAN_1000_CODE_802BEDA0_H
#define UNBAKE_SPAN_1000_CODE_802BEDA0_H
#include "../types.h"
union OSTask;
union OSTask;
typedef union OSTask OSTask;

/* unbake evidence input: dW5pb24gT1NUYXNrOwp0eXBlZGVmIHVuaW9uIE9TVGFzayBPU1Rhc2s7Cg== */

struct OSTask_t;
struct OSTask_t;
typedef struct OSTask_t OSTask_t;

/* unbake evidence input: c3RydWN0IE9TVGFza190Owp0eXBlZGVmIHN0cnVjdCBPU1Rhc2tfdCBPU1Rhc2tfdDsK */

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
/* unbake evidence input: c3RydWN0IE9TRGV2TWdyX2Z1bmNfODAyQkEzNTBfZGUgewogICAgdTMyIGFjdGl2ZTsKICAgIHN0cnVjdCBPU1RocmVhZCAqdGhyZWFkOwogICAgc3RydWN0IE9TTWVzZ1F1ZXVlICpjbWRRdWV1ZTsKICAgIHN0cnVjdCBPU01lc2dRdWV1ZSAqZXZ0UXVldWU7CiAgICBzdHJ1Y3QgT1NNZXNnUXVldWUgKmFjc1F1ZXVlOwogICAgczMyICgqZG1hKShzMzIsIHUzMiwgdm9pZCAqLCB1MzIpOwogICAgczMyICgqZWRtYSkodm9pZCAqLCBzMzIsIHUzMiwgdm9pZCAqLCB1MzIpOwp9Ow== */

struct OSIoMesgHdr_func_802BA350_de;
struct OSMesgQueue;
struct OSIoMesgHdr_func_802BA350_de {
    u16 type;
    u8 pri;
    u8 status;
    struct OSMesgQueue *retQueue;
};
/* unbake evidence input: c3RydWN0IE9TSW9NZXNnSGRyX2Z1bmNfODAyQkEzNTBfZGUgewogICAgdTE2IHR5cGU7CiAgICB1OCBwcmk7CiAgICB1OCBzdGF0dXM7CiAgICBzdHJ1Y3QgT1NNZXNnUXVldWUgKnJldFF1ZXVlOwp9Ow== */

struct OSIoMesgHdr_func_802BA350_de;
typedef struct OSIoMesgHdr_func_802BA350_de OSIoMesgHdr_func_802BA350_de;
struct OSIoMesg_func_802BA350_de;
struct OSIoMesg_func_802BA350_de {
    OSIoMesgHdr_func_802BA350_de hdr;
    void *dramAddr;
    u32 devAddr;
    u32 size;
    void *piHandle;
};
/* unbake evidence input: c3RydWN0IE9TSW9NZXNnX2Z1bmNfODAyQkEzNTBfZGUgewogICAgT1NJb01lc2dIZHJfZnVuY184MDJCQTM1MF9kZSBoZHI7CiAgICB2b2lkICpkcmFtQWRkcjsKICAgIHUzMiBkZXZBZGRyOwogICAgdTMyIHNpemU7CiAgICB2b2lkICpwaUhhbmRsZTsKfTs= */

struct OSTask_t;
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

/* unbake evidence input: c3RydWN0IE9TVGFza190OwpzdHJ1Y3QgT1NUYXNrX3QgewogICAgdTMyIHR5cGU7CiAgICB1MzIgZmxhZ3M7CiAgICB1NjQgKnVjb2RlX2Jvb3Q7CiAgICB1MzIgdWNvZGVfYm9vdF9zaXplOwogICAgdTY0ICp1Y29kZTsKICAgIHUzMiB1Y29kZV9zaXplOwogICAgdTY0ICp1Y29kZV9kYXRhOwogICAgdTMyIHVjb2RlX2RhdGFfc2l6ZTsKICAgIHU2NCAqZHJhbV9zdGFjazsKICAgIHUzMiBkcmFtX3N0YWNrX3NpemU7CiAgICB1NjQgKm91dHB1dF9idWZmOwogICAgdTY0ICpvdXRwdXRfYnVmZl9zaXplOwogICAgdTY0ICpkYXRhX3B0cjsKICAgIHUzMiBkYXRhX3NpemU7CiAgICB1NjQgKnlpZWxkX2RhdGFfcHRyOwogICAgdTMyIHlpZWxkX2RhdGFfc2l6ZTsKfTsK */

union OSTask;
union OSTask;
union OSTask {
    OSTask_t t;
    long long force_structure_alignment;
};

/* unbake evidence input: dW5pb24gT1NUYXNrOwp1bmlvbiBPU1Rhc2sgewogICAgT1NUYXNrX3QgdDsKICAgIGxvbmcgbG9uZyBmb3JjZV9zdHJ1Y3R1cmVfYWxpZ25tZW50Owp9Owo= */

struct OSDevMgr_func_802BA350_de;
typedef struct OSDevMgr_func_802BA350_de OSDevMgr_func_802BA350_de;
struct OSIoMesg_func_802BA350_de;
typedef struct OSIoMesg_func_802BA350_de OSIoMesg_func_802BA350_de;
extern int func_802B9D70_de(void);
extern int func_802B9FB0_de(void);
extern void func_802BA100_de(unsigned int arg0);
extern void func_802BA120_de(void);
extern int func_802BA140_de(void * arg0);
extern unsigned int func_802BA190_de(void);
extern void *func_802BA310_de(void);
extern void func_802BA350_de(s32 pri);
#endif
