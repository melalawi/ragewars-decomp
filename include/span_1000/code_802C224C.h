#ifndef UNBAKE_SPAN_1000_CODE_802C224C_H
#define UNBAKE_SPAN_1000_CODE_802C224C_H
#include "acmd.h"
#include "audio_callbacks.h"
#include "common/types.h"
#include "../types.h"
struct ALLoadFilter48_2;
struct ALLoadFilter48_2;
typedef struct ALLoadFilter48_2 ALLoadFilter48_2;

/* unbake evidence input: c3RydWN0IEFMTG9hZEZpbHRlcjQ4XzI7CnR5cGVkZWYgc3RydWN0IEFMTG9hZEZpbHRlcjQ4XzIgQUxMb2FkRmlsdGVyNDhfMjsK */

struct LldivResult;
struct LldivResult;
typedef struct LldivResult LldivResult;

/* unbake evidence input: c3RydWN0IExsZGl2UmVzdWx0Owp0eXBlZGVmIHN0cnVjdCBMbGRpdlJlc3VsdCBMbGRpdlJlc3VsdDsK */

struct ALADPCMWaveInfo_func_802BE514_de;
struct ALLoadFilter_func_802BE514_de;
struct ALWaveTable_s_func_802BE514_de;
struct ALADPCMWaveInfo_func_802BE514_de;
struct ALLoadFilter_func_802BE514_de;
struct ALWaveTable_s_func_802BE514_de;
#ifndef UNBAKE_FUNC_802BE514_DE_H
#define UNBAKE_FUNC_802BE514_DE_H


struct ALADPCMWaveInfo_func_802BE514_de;
typedef struct ALADPCMWaveInfo_func_802BE514_de ALADPCMWaveInfo_func_802BE514_de;
typedef struct ALLoadFilter_func_802BE514_de ALLoadFilter_func_802BE514_de;
typedef struct ALWaveTable_s_func_802BE514_de ALWaveTable_s_func_802BE514_de;

struct ALLoadFilter_func_802BE514_de;

struct ALWaveTable_s_func_802BE514_de;







struct ALADPCMWaveInfo_func_802BE514_de {
    void *loop;
    ALADPCMBook *book;
};
struct ALLoadFilter_func_802BE514_de {
    ALFilter_s14 filter;
    void *state;
    void *lstate;
    ALRawLoop loop;
    struct ALWaveTable_s_func_802BE514_de *table;
    s32 bookSize;
    ALDMAproc dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
};
struct ALWaveTable_s_func_802BE514_de {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo_func_802BE514_de adpcmWave;
    } waveInfo;
};
#endif

/* unbake evidence input: c3RydWN0IEFMQURQQ01XYXZlSW5mb19mdW5jXzgwMkJFNTE0X2RlOwpzdHJ1Y3QgQUxMb2FkRmlsdGVyX2Z1bmNfODAyQkU1MTRfZGU7CnN0cnVjdCBBTFdhdmVUYWJsZV9zX2Z1bmNfODAyQkU1MTRfZGU7CiNpZm5kZWYgVU5CQUtFX0ZVTkNfODAyQkU1MTRfREVfSAojZGVmaW5lIFVOQkFLRV9GVU5DXzgwMkJFNTE0X0RFX0gKCgpzdHJ1Y3QgQUxBRFBDTVdhdmVJbmZvX2Z1bmNfODAyQkU1MTRfZGU7CnR5cGVkZWYgc3RydWN0IEFMQURQQ01XYXZlSW5mb19mdW5jXzgwMkJFNTE0X2RlIEFMQURQQ01XYXZlSW5mb19mdW5jXzgwMkJFNTE0X2RlOwp0eXBlZGVmIHN0cnVjdCBBTExvYWRGaWx0ZXJfZnVuY184MDJCRTUxNF9kZSBBTExvYWRGaWx0ZXJfZnVuY184MDJCRTUxNF9kZTsKdHlwZWRlZiBzdHJ1Y3QgQUxXYXZlVGFibGVfc19mdW5jXzgwMkJFNTE0X2RlIEFMV2F2ZVRhYmxlX3NfZnVuY184MDJCRTUxNF9kZTsKCnN0cnVjdCBBTExvYWRGaWx0ZXJfZnVuY184MDJCRTUxNF9kZTsKCnN0cnVjdCBBTFdhdmVUYWJsZV9zX2Z1bmNfODAyQkU1MTRfZGU7CgoKCgoKCgpzdHJ1Y3QgQUxBRFBDTVdhdmVJbmZvX2Z1bmNfODAyQkU1MTRfZGUgewogICAgdm9pZCAqbG9vcDsKICAgIEFMQURQQ01Cb29rICpib29rOwp9OwpzdHJ1Y3QgQUxMb2FkRmlsdGVyX2Z1bmNfODAyQkU1MTRfZGUgewogICAgQUxGaWx0ZXJfczE0IGZpbHRlcjsKICAgIHZvaWQgKnN0YXRlOwogICAgdm9pZCAqbHN0YXRlOwogICAgQUxSYXdMb29wIGxvb3A7CiAgICBzdHJ1Y3QgQUxXYXZlVGFibGVfc19mdW5jXzgwMkJFNTE0X2RlICp0YWJsZTsKICAgIHMzMiBib29rU2l6ZTsKICAgIEFMRE1BcHJvYyBkbWE7CiAgICB2b2lkICpkbWFTdGF0ZTsKICAgIHMzMiBzYW1wbGU7CiAgICBzMzIgbGFzdHNhbTsKICAgIHMzMiBmaXJzdDsKICAgIHMzMiBtZW1pbjsKfTsKc3RydWN0IEFMV2F2ZVRhYmxlX3NfZnVuY184MDJCRTUxNF9kZSB7CiAgICB1OCAqYmFzZTsKICAgIHMzMiBsZW47CiAgICB1OCB0eXBlOwogICAgdTggZmxhZ3M7CiAgICB1bmlvbiB7CiAgICAgICAgQUxBRFBDTVdhdmVJbmZvX2Z1bmNfODAyQkU1MTRfZGUgYWRwY21XYXZlOwogICAgfSB3YXZlSW5mbzsKfTsKI2VuZGlmCg== */

struct ALLoadFilter48_2;
struct ALLoadFilter48_2;
struct ALLoadFilter48_2 {
    ALFilter_s14 filter;
    void *state;
    void *lstate;
    ALRawLoop loop;
    void *table;
    s32 bookSize;
    ALDMAproc dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
};

/* unbake evidence input: c3RydWN0IEFMTG9hZEZpbHRlcjQ4XzI7CnN0cnVjdCBBTExvYWRGaWx0ZXI0OF8yIHsKICAgIEFMRmlsdGVyX3MxNCBmaWx0ZXI7CiAgICB2b2lkICpzdGF0ZTsKICAgIHZvaWQgKmxzdGF0ZTsKICAgIEFMUmF3TG9vcCBsb29wOwogICAgdm9pZCAqdGFibGU7CiAgICBzMzIgYm9va1NpemU7CiAgICBBTERNQXByb2MgZG1hOwogICAgdm9pZCAqZG1hU3RhdGU7CiAgICBzMzIgc2FtcGxlOwogICAgczMyIGxhc3RzYW07CiAgICBzMzIgZmlyc3Q7CiAgICBzMzIgbWVtaW47Cn07Cg== */

struct LldivResult;
struct LldivResult;
struct LldivResult {
    s64 quot;
    s64 rem;
};

/* unbake evidence input: c3RydWN0IExsZGl2UmVzdWx0OwpzdHJ1Y3QgTGxkaXZSZXN1bHQgewogICAgczY0IHF1b3Q7CiAgICBzNjQgcmVtOwp9Owo= */

extern void func_802BD230_de(void);
extern void func_802BD2F0_de(void);
extern void func_802BE0C0_de(void);
extern Acmd *func_802BE514_de(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p);
extern Acmd *func_802BE898_de(void *filter, s16 *outp, s32 byteCount, s32 sampleOffset, Acmd *p);
#endif
