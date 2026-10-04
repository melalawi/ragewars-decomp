#ifndef UNBAKE_SPAN_1000_CODE_802C224C_H
#define UNBAKE_SPAN_1000_CODE_802C224C_H
#include "acmd.h"
#include "audio_callbacks.h"
#include "common/types.h"
#include "../types.h"
struct ALADPCMWaveInfo_func_802BE514_de;
typedef struct ALADPCMWaveInfo_func_802BE514_de ALADPCMWaveInfo_func_802BE514_de;

struct ALLoadFilter48_2;
typedef struct ALLoadFilter48_2 ALLoadFilter48_2;

struct ALLoadFilter_func_802BE514_de;
typedef struct ALLoadFilter_func_802BE514_de ALLoadFilter_func_802BE514_de;

struct LldivResult;
typedef struct LldivResult LldivResult;

struct ALADPCMWaveInfo_func_802BE514_de;
struct ALADPCMWaveInfo_func_802BE514_de {
    void *loop;
    ALADPCMBook *book;
};
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
struct ALWaveTable_s_func_802BE514_de;
struct ALWaveTable_s_func_802BE514_de {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo_func_802BE514_de adpcmWave;
    } waveInfo;
};
struct ALLoadFilter_func_802BE514_de;
struct ALWaveTable_s_func_802BE514_de;
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
struct LldivResult;
struct LldivResult {
    s64 quot;
    s64 rem;
};
extern int func_802BD170_de(int arg0);
extern void func_802BD230_de(void);
extern void func_802BD2F0_de(void);
extern void func_802BE0C0_de(void);
extern Acmd *func_802BE514_de(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p);
extern Acmd *func_802BE898_de(void *filter, s16 *outp, s32 byteCount, s32 sampleOffset, Acmd *p);
#endif
