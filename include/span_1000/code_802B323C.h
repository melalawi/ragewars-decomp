#ifndef UNBAKE_SPAN_1000_CODE_802B323C_H
#define UNBAKE_SPAN_1000_CODE_802B323C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALCMidiHdr;
typedef struct ALCMidiHdr ALCMidiHdr;

struct ALCSeqMarker;
typedef struct ALCSeqMarker ALCSeqMarker;

struct ALCSeq_s;
typedef struct ALCSeq_s ALCSeq_s;

struct CopyDest802B3998;
typedef struct CopyDest802B3998 CopyDest802B3998;

struct CopySource802B3998;
typedef struct CopySource802B3998 CopySource802B3998;

struct DecodeResult_func_802AE6BC_de;
typedef struct DecodeResult_func_802AE6BC_de DecodeResult_func_802AE6BC_de;

struct ResourceTable;
typedef struct ResourceTable ResourceTable;

struct RuntimeState_func_802AE5B8_de;
typedef struct RuntimeState_func_802AE5B8_de RuntimeState_func_802AE5B8_de;

struct ALCMidiHdr;
struct ALCMidiHdr {
    u32 trackOffset[16];
    u32 division;
};
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
struct DecodeResult_func_802AE6BC_de;
struct DecodeResult_func_802AE6BC_de {
    s16 type;
    u8 pad2[2];
    u32 value;
    u8 pad8[8];
};
struct ResourceTable;
struct ResourceTable {
    u32 entries[17];
};
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
extern void func_802AE290_de(ALCSeq_s *seq, ALCSeqMarker *m, u32 ticks);
extern int func_802AE7B0_de(void *arg0);
extern f32 func_802AE7BC_de(void **arg0, s32 arg1, s32 arg2);
extern u32 func_802AE824_de(void **arg0, f32 arg1, s32 arg2);
extern void func_802AE8C8_de(CopyDest802B3998 *dst, CopySource802B3998 *src);
extern void func_802AE93C_de(CopyDest802B3998 *src, CopySource802B3998 *dst);
#endif
