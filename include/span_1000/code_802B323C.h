#ifndef UNBAKE_SPAN_1000_CODE_802B323C_H
#define UNBAKE_SPAN_1000_CODE_802B323C_H
#include "../types.h"
struct ALCMidiHdr;
struct ALCMidiHdr;
typedef struct ALCMidiHdr ALCMidiHdr;

/* unbake evidence input: c3RydWN0IEFMQ01pZGlIZHI7CnR5cGVkZWYgc3RydWN0IEFMQ01pZGlIZHIgQUxDTWlkaUhkcjsK */

struct ALCSeq_s;
struct ALCSeq_s;
typedef struct ALCSeq_s ALCSeq_s;

/* unbake evidence input: c3RydWN0IEFMQ1NlcV9zOwp0eXBlZGVmIHN0cnVjdCBBTENTZXFfcyBBTENTZXFfczsK */

struct CopyDest802B3998;
struct CopyDest802B3998;
typedef struct CopyDest802B3998 CopyDest802B3998;

/* unbake evidence input: c3RydWN0IENvcHlEZXN0ODAyQjM5OTg7CnR5cGVkZWYgc3RydWN0IENvcHlEZXN0ODAyQjM5OTggQ29weURlc3Q4MDJCMzk5ODsK */

struct CopySource802B3998;
struct CopySource802B3998;
typedef struct CopySource802B3998 CopySource802B3998;

/* unbake evidence input: c3RydWN0IENvcHlTb3VyY2U4MDJCMzk5ODsKdHlwZWRlZiBzdHJ1Y3QgQ29weVNvdXJjZTgwMkIzOTk4IENvcHlTb3VyY2U4MDJCMzk5ODsK */

struct DecodeResult_func_802AE6BC_de;
struct DecodeResult_func_802AE6BC_de;
typedef struct DecodeResult_func_802AE6BC_de DecodeResult_func_802AE6BC_de;

/* unbake evidence input: c3RydWN0IERlY29kZVJlc3VsdF9mdW5jXzgwMkFFNkJDX2RlOwp0eXBlZGVmIHN0cnVjdCBEZWNvZGVSZXN1bHRfZnVuY184MDJBRTZCQ19kZSBEZWNvZGVSZXN1bHRfZnVuY184MDJBRTZCQ19kZTsK */

struct ResourceTable;
struct ResourceTable;
typedef struct ResourceTable ResourceTable;

/* unbake evidence input: c3RydWN0IFJlc291cmNlVGFibGU7CnR5cGVkZWYgc3RydWN0IFJlc291cmNlVGFibGUgUmVzb3VyY2VUYWJsZTsK */

struct RuntimeState_func_802AE5B8_de;
struct RuntimeState_func_802AE5B8_de;
typedef struct RuntimeState_func_802AE5B8_de RuntimeState_func_802AE5B8_de;

/* unbake evidence input: c3RydWN0IFJ1bnRpbWVTdGF0ZV9mdW5jXzgwMkFFNUI4X2RlOwp0eXBlZGVmIHN0cnVjdCBSdW50aW1lU3RhdGVfZnVuY184MDJBRTVCOF9kZSBSdW50aW1lU3RhdGVfZnVuY184MDJBRTVCOF9kZTsK */

struct ALCSeqMarker;
struct ALCSeqMarker {
    u32 validTracks;
    s32 lastTicks;
    u32 lastDeltaTicks;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
};
/* unbake evidence input: c3RydWN0IEFMQ1NlcU1hcmtlciB7CiAgICB1MzIgdmFsaWRUcmFja3M7CiAgICBzMzIgbGFzdFRpY2tzOwogICAgdTMyIGxhc3REZWx0YVRpY2tzOwogICAgdTggKmN1ckxvY1sxNl07CiAgICB1OCAqY3VyQlVQdHJbMTZdOwogICAgdTggY3VyQlVMZW5bMTZdOwogICAgdTggbGFzdFN0YXR1c1sxNl07CiAgICB1MzIgZXZ0RGVsdGFUaWNrc1sxNl07Cn07 */

struct ALCMidiHdr;
struct ALCMidiHdr;
struct ALCMidiHdr {
    u32 trackOffset[16];
    u32 division;
};

/* unbake evidence input: c3RydWN0IEFMQ01pZGlIZHI7CnN0cnVjdCBBTENNaWRpSGRyIHsKICAgIHUzMiB0cmFja09mZnNldFsxNl07CiAgICB1MzIgZGl2aXNpb247Cn07Cg== */

struct ALCMidiHdr;
struct ALCSeq_s;
struct ALCMidiHdr;
struct ALCSeq_s;
struct ALCSeq_s {
    struct ALCMidiHdr *base;
    u32 validTracks;
    f32 qnpt;
    u32 lastTicks;
    u32 lastDeltaTicks;
    u32 deltaFlag;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
};

/* unbake evidence input: c3RydWN0IEFMQ01pZGlIZHI7CnN0cnVjdCBBTENTZXFfczsKc3RydWN0IEFMQ1NlcV9zIHsKICAgIHN0cnVjdCBBTENNaWRpSGRyICpiYXNlOwogICAgdTMyIHZhbGlkVHJhY2tzOwogICAgZjMyIHFucHQ7CiAgICB1MzIgbGFzdFRpY2tzOwogICAgdTMyIGxhc3REZWx0YVRpY2tzOwogICAgdTMyIGRlbHRhRmxhZzsKICAgIHU4ICpjdXJMb2NbMTZdOwogICAgdTggKmN1ckJVUHRyWzE2XTsKICAgIHU4IGN1ckJVTGVuWzE2XTsKICAgIHU4IGxhc3RTdGF0dXNbMTZdOwogICAgdTMyIGV2dERlbHRhVGlja3NbMTZdOwp9Owo= */

struct CopyDest802B3998;
struct CopyDest802B3998;
struct CopyDest802B3998 {
    int pad0;
    int word4;
    int pad8;
    int wordC;
    int word10;
    int pad14;
    int words18[16];
    int words58[16];
    unsigned char bytes98[16];
    unsigned char bytesA8[16];
    int wordsB8[16];
};

/* unbake evidence input: c3RydWN0IENvcHlEZXN0ODAyQjM5OTg7CnN0cnVjdCBDb3B5RGVzdDgwMkIzOTk4IHsKICAgIGludCBwYWQwOwogICAgaW50IHdvcmQ0OwogICAgaW50IHBhZDg7CiAgICBpbnQgd29yZEM7CiAgICBpbnQgd29yZDEwOwogICAgaW50IHBhZDE0OwogICAgaW50IHdvcmRzMThbMTZdOwogICAgaW50IHdvcmRzNThbMTZdOwogICAgdW5zaWduZWQgY2hhciBieXRlczk4WzE2XTsKICAgIHVuc2lnbmVkIGNoYXIgYnl0ZXNBOFsxNl07CiAgICBpbnQgd29yZHNCOFsxNl07Cn07Cg== */

struct CopySource802B3998;
struct CopySource802B3998;
struct CopySource802B3998 {
    int word0;
    int word4;
    int word8;
    int wordsC[16];
    int words4C[16];
    unsigned char bytes8C[16];
    unsigned char bytes9C[16];
    int wordsAC[16];
};

/* unbake evidence input: c3RydWN0IENvcHlTb3VyY2U4MDJCMzk5ODsKc3RydWN0IENvcHlTb3VyY2U4MDJCMzk5OCB7CiAgICBpbnQgd29yZDA7CiAgICBpbnQgd29yZDQ7CiAgICBpbnQgd29yZDg7CiAgICBpbnQgd29yZHNDWzE2XTsKICAgIGludCB3b3JkczRDWzE2XTsKICAgIHVuc2lnbmVkIGNoYXIgYnl0ZXM4Q1sxNl07CiAgICB1bnNpZ25lZCBjaGFyIGJ5dGVzOUNbMTZdOwogICAgaW50IHdvcmRzQUNbMTZdOwp9Owo= */

struct DecodeResult_func_802AE6BC_de;
struct DecodeResult_func_802AE6BC_de;
struct DecodeResult_func_802AE6BC_de {
    s16 type;
    u8 pad2[2];
    u32 value;
    u8 pad8[8];
};

/* unbake evidence input: c3RydWN0IERlY29kZVJlc3VsdF9mdW5jXzgwMkFFNkJDX2RlOwpzdHJ1Y3QgRGVjb2RlUmVzdWx0X2Z1bmNfODAyQUU2QkNfZGUgewogICAgczE2IHR5cGU7CiAgICB1OCBwYWQyWzJdOwogICAgdTMyIHZhbHVlOwogICAgdTggcGFkOFs4XTsKfTsK */

struct ResourceTable;
struct ResourceTable;
struct ResourceTable {
    u32 entries[17];
};

/* unbake evidence input: c3RydWN0IFJlc291cmNlVGFibGU7CnN0cnVjdCBSZXNvdXJjZVRhYmxlIHsKICAgIHUzMiBlbnRyaWVzWzE3XTsKfTsK */

struct ResourceTable;
struct RuntimeState_func_802AE5B8_de;
struct ResourceTable;
struct RuntimeState_func_802AE5B8_de;
struct RuntimeState_func_802AE5B8_de {
    struct ResourceTable *resources;
    u32 active;
    f32 scale;
    u32 unkC;
    u32 unk10;
    u32 one14;
    void *objects[16];
    u32 unk58[16];
    s8 flags98[16];
    s8 flagsA8[16];
    u32 results[16];
};

/* unbake evidence input: c3RydWN0IFJlc291cmNlVGFibGU7CnN0cnVjdCBSdW50aW1lU3RhdGVfZnVuY184MDJBRTVCOF9kZTsKc3RydWN0IFJ1bnRpbWVTdGF0ZV9mdW5jXzgwMkFFNUI4X2RlIHsKICAgIHN0cnVjdCBSZXNvdXJjZVRhYmxlICpyZXNvdXJjZXM7CiAgICB1MzIgYWN0aXZlOwogICAgZjMyIHNjYWxlOwogICAgdTMyIHVua0M7CiAgICB1MzIgdW5rMTA7CiAgICB1MzIgb25lMTQ7CiAgICB2b2lkICpvYmplY3RzWzE2XTsKICAgIHUzMiB1bms1OFsxNl07CiAgICBzOCBmbGFnczk4WzE2XTsKICAgIHM4IGZsYWdzQThbMTZdOwogICAgdTMyIHJlc3VsdHNbMTZdOwp9Owo= */

struct ALCSeqMarker;
typedef struct ALCSeqMarker ALCSeqMarker;
extern void func_802AE290_de(ALCSeq_s *seq, ALCSeqMarker *m, u32 ticks);
extern int func_802AE7B0_de(void *arg0);
extern f32 func_802AE7BC_de(void **arg0, s32 arg1, s32 arg2);
extern u32 func_802AE824_de(void **arg0, f32 arg1, s32 arg2);
extern void func_802AE8C8_de(CopyDest802B3998 *dst, CopySource802B3998 *src);
extern void func_802AE93C_de(CopyDest802B3998 *src, CopySource802B3998 *dst);
#endif
