#ifndef UNBAKE_FUNC_802C31C0_H
#define UNBAKE_FUNC_802C31C0_H
#include "basetypes.h"
#include "shared/audio_callbacks.h"
#include "shared/func_802bae40.h"

struct ALADPCMBook;
typedef struct ALADPCMBook ALADPCMBook;
typedef struct ALADPCMWaveInfo ALADPCMWaveInfo;
typedef struct ALLoadFilter ALLoadFilter;
typedef struct ALRawLoop ALRawLoop;
typedef struct ALWaveTable_s ALWaveTable;

struct ALADPCMWaveInfo;

struct ALLoadFilter;

struct ALRawLoop;

struct ALWaveTable_s;











struct ALADPCMBook {
    s32 order;
    s32 npredictors;
    s16 book[1];
};
struct ALADPCMWaveInfo {
    void *loop;
    ALADPCMBook *book;
};
struct ALRawLoop {
    u32 start;
    u32 end;
    u32 count;
};
struct ALLoadFilter {
    ALFilter filter;
    void *state;
    void *lstate;
    ALRawLoop loop;
    ALWaveTable *table;
    s32 bookSize;
    ALDMAproc dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
};
struct ALWaveTable_s {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo adpcmWave;
    } waveInfo;
};
#endif
