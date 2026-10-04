#ifndef UNBAKE_SPAN_1000_CODE_802B510C_H
#define UNBAKE_SPAN_1000_CODE_802B510C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALSeqPlayer;
typedef struct ALSeqPlayer ALSeqPlayer;

struct ALSeqPlayer_func_802B0C94_de;
typedef struct ALSeqPlayer_func_802B0C94_de ALSeqPlayer_func_802B0C94_de;

struct ALSeqPlayer_func_802B1814_de;
typedef struct ALSeqPlayer_func_802B1814_de ALSeqPlayer_func_802B1814_de;

struct ALVoiceState_s;
typedef struct ALVoiceState_s ALVoiceState_s;

struct ALVoiceState_s_func_802B1814_de;
typedef struct ALVoiceState_s_func_802B1814_de ALVoiceState_s_func_802B1814_de;

struct EntryTable;
typedef struct EntryTable EntryTable;

struct List802B663C;
typedef struct List802B663C List802B663C;

struct TableSlot;
typedef struct TableSlot TableSlot;

struct func_802B510C_S2;
typedef struct func_802B510C_S2 func_802B510C_S2;

struct func_802B52B0_S1;
typedef struct func_802B52B0_S1 func_802B52B0_S1;

struct func_802B5328_S2;
typedef struct func_802B5328_S2 func_802B5328_S2;

struct func_802B5410_S1;
typedef struct func_802B5410_S1 func_802B5410_S1;

struct func_802B65EC_S1;
typedef struct func_802B65EC_S1 func_802B65EC_S1;

struct func_802B65EC_S2;
typedef struct func_802B65EC_S2 func_802B65EC_S2;

struct func_802B66A0_S1;
typedef struct func_802B66A0_S1 func_802B66A0_S1;

struct func_802B66A0_S2;
typedef struct func_802B66A0_S2 func_802B66A0_S2;

struct func_802B67B0_S3;
typedef struct func_802B67B0_S3 func_802B67B0_S3;

struct ALChanState;
struct ALChanState {
    void *instrument;
    s16 bendRange;
    u8 fxId;
    u8 pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
};
struct ALVoiceState_s;
struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice_s voice;
    void *sound;
    s32 envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
};
struct ALSeqPlayer;
struct ALVoiceState_s;
struct ALSeqPlayer {
    char pad[0x64];
    struct ALVoiceState_s *vAllocHead;
};
typedef signed int ( *Lane_ALOscInit)(void * *, float *, unsigned char, unsigned char, unsigned char, unsigned char);
typedef void ( *Lane_ALOscStop)(void *);
typedef signed int ( *Lane_ALOscUpdate)(void *, float *);
struct ALSeqPlayer_func_802B0C94_de;
struct ALSeqPlayer_func_802B0C94_de {
    ALPlayer_s node;
    void *drvr;
    void *target;
    ALMicroTime curTime;
    ALBank_s *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent10 nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState10 *chanState;
    ALVoiceState_s38 *vAllocHead;
    ALVoiceState_s38 *vAllocTail;
    ALVoiceState_s38 *vFreeList;
    Lane_ALOscInit initOsc;
    Lane_ALOscUpdate updateOsc;
    Lane_ALOscStop stopOsc;
};
struct ALChanState;
struct ALSeqPlayer_func_802B1814_de;
struct ALSeqPlayer_func_802B1814_de {
    char pad0[0x32];
    s16 vol;
    char pad1[0x60 - 0x34];
    struct ALChanState *chanState;
};
struct ALSound;
struct ALSound {
    void *envelope;
    void *keyMap;
    void *wavetable;
    u8 samplePan;
    u8 sampleVolume;
    u8 flags;
};
struct ALSound;
struct ALVoiceState_s_func_802B1814_de;
struct ALVoiceState_s_func_802B1814_de {
    struct ALVoiceState_s_func_802B1814_de *next;
    char voice[0x1C];
    struct ALSound *sound;
    s32 envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
};
struct EntryTable;
struct EntryTable {
    char header[0x10];
    void *entries[1];
};
struct List802B663C;
struct List802B663C {
    char pad[0x64];
    Node_func_80239AF4_de *head;
    Node_func_80239AF4_de *tail;
    Node_func_80239AF4_de *free;
};
struct TableSlot;
struct TableSlot {
    void *entry;
    char rest[0xC];
};
struct func_802B510C_S2;
struct func_802B510C_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    char unkC;
};
struct func_802B52B0_S1;
struct func_802B52B0_S1 {
    char pad0[0x8];
    Node_func_80239AF4_de * unk8;
};
struct func_802B5328_S2;
struct func_802B5328_S2 {
    char * unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s16 unkC;
};
struct func_802B5410_S1;
struct func_802B5410_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    u32 unk4;
    char pad4[0x8 - 0x4 - sizeof(u32)];
    s32 unk8;
};
struct func_802B65EC_S1;
struct func_802B65EC_S1 {
    char pad0[0x64];
    void * unk64;
    char pad64[0x68 - 0x64 - sizeof(void*)];
    void * unk68;
    char pad68[0x6C - 0x68 - sizeof(void*)];
    void * unk6C;
};
struct func_802B65EC_S2;
struct func_802B65EC_S2 {
    char pad0[0x14];
    void * unk14;
    char pad14[0x31 - 0x14 - sizeof(void*)];
    s8 unk31;
    char pad31[0x32 - 0x31 - sizeof(s8)];
    s8 unk32;
    char pad32[0x33 - 0x32 - sizeof(s8)];
    s8 unk33;
};
struct func_802B66A0_S1;
struct func_802B66A0_S1 {
    char pad0[0x48];
    void * unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char * unk50;
};
struct func_802B66A0_S2;
struct func_802B66A0_S2 {
    char * unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s16 unkC;
    char padC[0x10 - 0xC - sizeof(s16)];
    s32 unk10;
};
struct func_802B67B0_S3;
struct func_802B67B0_S3 {
    char pad0[0x4];
    u8 * unk4;
};
extern void func_802B0390_de(void *arg0, s32 arg1, s32 arg2);
extern void func_802B156C_de(List802B663C *arg0, void *arg1);
extern s32 func_802B15D0_de(void *arg0, s32 arg1, s32 arg2);
#endif
