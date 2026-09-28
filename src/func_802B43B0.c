/* __CSPHandleMIDIMsg, drafted from ultralib src/audio/csplayer.c: applies one MIDI channel
   message to the compact sequence player (note on with voice allocation, envelope and oscillator
   setup, note off, pressure, controllers, program change and pitch bend). Adapted for the pinned
   compiler without -fforce-addr: the status and data bytes are read through the event rather than
   the midi pointer, and the float to u8 tremolo conversion is written out against the cartridge's
   2^31 constant with its store address taken first. */
#include "basetypes.h"
typedef s32 ALMicroTime;

typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;

typedef struct {
    ALMicroTime attackTime;
    ALMicroTime decayTime;
    ALMicroTime releaseTime;
    u8 attackVolume;
    u8 decayVolume;
} ALEnvelope;

typedef struct {
    u8 velocityMin;
    u8 velocityMax;
    u8 keyMin;
    u8 keyMax;
    u8 keyBase;
    s8 detune;
} ALKeyMap;

typedef struct ALSound_s {
    ALEnvelope *envelope;
    ALKeyMap *keyMap;
    void *wavetable;
} ALSound;

typedef struct {
    u8 volume;
    u8 pan;
    u8 priority;
    u8 flags;
    u8 tremType;
    u8 tremRate;
    u8 tremDepth;
    u8 tremDelay;
    u8 vibType;
    u8 vibRate;
    u8 vibDepth;
    u8 vibDelay;
    s16 bendRange;
    s16 soundCount;
    ALSound *soundArray[1];
} ALInstrument;

typedef struct ALBank_s {
    s16 instCount;
    u8 flags;
    u8 pad;
    s32 sampleRate;
    ALInstrument *percussion;
    ALInstrument *instArray[1];
} ALBank;

typedef struct ALVoiceConfig_s {
    s16 priority;
    s16 fxBus;
    u8 unityPitch;
} ALVoiceConfig;

typedef struct ALVoice_s {
    ALLink node;
    void *pvoice;
    void *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} ALVoice;

typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    void *handler;
    ALMicroTime callTime;
    s32 samplesLeft;
} ALPlayer;

typedef struct {
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
} ALMIDIEvent;

typedef struct {
    struct ALVoice_s *voice;
} ALNoteEvent;

typedef struct {
    struct ALVoice_s *voice;
    ALMicroTime delta;
    u8 vol;
} ALVolumeEvent;

typedef struct {
    s16 vol;
} ALSeqpVolEvent;

typedef struct {
    u8 chan;
    u8 priority;
} ALSeqpPriorityEvent;

typedef struct {
    void *seq;
} ALSeqpSeqEvent;

typedef struct {
    void *bank;
} ALSeqpBankEvent;

typedef struct {
    struct ALVoiceState_s *vs;
    void *oscState;
    u8 chan;
} ALOscEvent;

typedef struct {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALNoteEvent note;
        ALVolumeEvent vol;
        ALSeqpVolEvent spvol;
        ALSeqpPriorityEvent sppriority;
        ALSeqpSeqEvent spseq;
        ALSeqpBankEvent spbank;
        ALOscEvent osc;
    } msg;
} ALEvent;

typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;

typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice voice;
    ALSound *sound;
    ALMicroTime envEndTime;
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
} ALVoiceState;

typedef struct {
    ALInstrument *instrument;
    s16 bendRange;
    u8 fxId;
    u8 pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
} ALChanState;

typedef ALMicroTime (*ALOscInit)(void **oscState, f32 *initVal, u8 oscType, u8 oscRate,
                                 u8 oscDepth, u8 oscDelay);
typedef ALMicroTime (*ALOscUpdate)(void *oscState, f32 *updateVal);
typedef void (*ALOscStop)(void *oscState);

typedef struct {
    ALPlayer node;
    void *drvr;
    void *target;
    ALMicroTime curTime;
    ALBank *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
} ALCSPlayer;

extern const float D_800CC670; /* 127.0f, followed by 2^31 */
#define TWO_31 (*(&D_800CC670 + 1))
extern const float D_800CC678;   /* 1.0f */
extern char D_800CC5A0[];        /* "EX" */
extern char D_800CC5A4[];        /* "audio/csplayer.c" */

extern ALSound *func_802B67B0(ALCSPlayer *, u8, u8, u8);         /* __lookupSoundQuick */
extern ALVoiceState *func_802B65EC(ALCSPlayer *, u8, u8, u8);    /* __mapVoice */
extern ALVoiceState *func_802B6750(ALCSPlayer *, u8, u8);        /* __lookupVoice */
extern s32 func_802B80D0(void *, ALVoice *, ALVoiceConfig *);    /* alSynAllocVoice */
extern f32 func_802B4F00(s32);                                   /* alCents2Ratio */
extern u8 func_802B6974(ALVoiceState *, ALCSPlayer *);           /* __vsPan */
extern s16 func_802B68E4(ALVoiceState *, ALCSPlayer *);          /* __vsVol */
extern ALMicroTime func_802B6958(ALVoiceState *, ALMicroTime);   /* __vsDelta */
extern void func_802B86B0(void *, ALVoice *, void *, f32, s16, u8, u8, ALMicroTime); /* alSynStartVoiceParams */
extern void func_802B51A4(ALEventQueue *, ALEvent *, ALMicroTime); /* alEvtqPostEvent */
extern void func_802B6BE4(ALCSPlayer *, ALVoice *, ALMicroTime); /* __seqpReleaseVoice */
extern void func_802B8550(void *, ALVoice *, s16, ALMicroTime);  /* alSynSetVol */
extern void func_802B8420(void *, ALVoice *, u8);                /* alSynSetPan */
extern void func_802B8370(void *, ALVoice *, u8);                /* alSynSetFXMix */
extern void func_802B84B0(void *, ALVoice *, f32);               /* alSynSetPitch */
extern void func_802B6B90(ALCSPlayer *, ALInstrument *, s32);    /* __setInstChanState */
extern void func_802BFD40(char *, char *, s32);                  /* __assert */

void func_802B43B0(ALCSPlayer *seqp, ALEvent *event)
{
    ALVoice *voice;
    ALVoiceState *vs;
    s32 status;
    u8 chan;
    u8 key;
    u8 vel;
    u8 byte1;
    u8 byte2;
    ALMIDIEvent *midi = &event->msg.midi;
    s16 vol;
    ALEvent evt;
    ALMicroTime deltaTime;
    ALVoiceState *vstate;
    u8 pan;

    status = event->msg.midi.status & 0xF0;
    chan = event->msg.midi.status & 0x0F;
    byte1 = key = event->msg.midi.byte1;
    byte2 = vel = event->msg.midi.byte2;

    switch (status) {
    case 0x90: /* AL_MIDI_NoteOn */
        if (vel != 0) {
            ALVoiceConfig config;
            ALSound *sound;
            s16 cents;
            f32 pitch, oscValue;
            u8 fxmix;
            void *oscState;
            ALInstrument *inst;
            s32 tremelo;
            u8 *tremeloSlot;

            if (seqp->state != 1)
                break;
            sound = func_802B67B0(seqp, key, vel, chan);
            if (!sound)
                return;
            config.priority = seqp->chanState[chan].priority;
            config.fxBus = 0;
            config.unityPitch = 0;
            vstate = func_802B65EC(seqp, key, vel, chan);
            if (!vstate)
                return;
            voice = &vstate->voice;
            func_802B80D0(seqp->drvr, voice, &config);
            vstate->sound = sound;
            vstate->envPhase = 0;
            if (seqp->chanState[chan].sustain > 63)
                vstate->phase = 2;
            else
                vstate->phase = 0;
            cents = (key - sound->keyMap->keyBase) * 100 + sound->keyMap->detune;
            vstate->pitch = func_802B4F00(cents);
            vstate->envGain = sound->envelope->attackVolume;
            vstate->envEndTime = seqp->curTime + sound->envelope->attackTime;
            vstate->flags = 0;
            inst = seqp->chanState[chan].instrument;
            oscValue = D_800CC670;
            if (inst->tremType) {
                if (seqp->initOsc) {
                    deltaTime = (*seqp->initOsc)(&oscState, &oscValue, inst->tremType,
                                                 inst->tremRate, inst->tremDepth, inst->tremDelay);
                    if (deltaTime) {
                        evt.type = 22; /* AL_TREM_OSC_EVT */
                        evt.msg.osc.vs = vstate;
                        evt.msg.osc.oscState = oscState;
                        func_802B51A4(&seqp->evtq, &evt, deltaTime);
                        vstate->flags |= 0x01;
                    }
                }
            }
            tremeloSlot = &vstate->tremelo;
            if (!(oscValue >= TWO_31)) {
                tremelo = (s32)oscValue;
            } else {
                tremelo = (s32)(oscValue - TWO_31);
                tremelo |= 0x80000000;
            }
            *tremeloSlot = tremelo;
            oscValue = D_800CC678;
            if (inst->vibType) {
                if (seqp->initOsc) {
                    deltaTime = (*seqp->initOsc)(&oscState, &oscValue, inst->vibType,
                                                 inst->vibRate, inst->vibDepth, inst->vibDelay);
                    if (deltaTime) {
                        evt.type = 23; /* AL_VIB_OSC_EVT */
                        evt.msg.osc.vs = vstate;
                        evt.msg.osc.oscState = oscState;
                        evt.msg.osc.chan = chan;
                        func_802B51A4(&seqp->evtq, &evt, deltaTime);
                        vstate->flags |= 0x02;
                    }
                }
            }
            vstate->vibrato = oscValue;
            pitch = vstate->pitch * seqp->chanState[chan].pitchBend * vstate->vibrato;
            fxmix = seqp->chanState[chan].fxmix;
            pan = func_802B6974(vstate, seqp);
            vol = func_802B68E4(vstate, seqp);
            deltaTime = sound->envelope->attackTime;
            func_802B86B0(seqp->drvr, voice, sound->wavetable, pitch, vol, pan, fxmix, deltaTime);
            evt.type = 6; /* AL_SEQP_ENV_EVT */
            evt.msg.vol.voice = voice;
            evt.msg.vol.vol = sound->envelope->decayVolume;
            evt.msg.vol.delta = sound->envelope->decayTime;
            func_802B51A4(&seqp->evtq, &evt, deltaTime);
            if (midi->duration) {
                evt.type = 21; /* AL_CSP_NOTEOFF_EVT */
                evt.msg.midi.status = chan | 0x80;
                evt.msg.midi.byte1 = key;
                evt.msg.midi.byte2 = 0;
                deltaTime = seqp->uspt * midi->duration;
                func_802B51A4(&seqp->evtq, &evt, deltaTime);
            }
            break;
        }
    case 0x80: /* AL_MIDI_NoteOff */
        vstate = func_802B6750(seqp, key, chan);
        if (!vstate)
            return;
        if (vstate->phase == 2)
            vstate->phase = 4;
        else {
            vstate->phase = 3;
            func_802B6BE4(seqp, &vstate->voice, vstate->sound->envelope->releaseTime);
        }
        break;
    case 0xA0: /* AL_MIDI_PolyKeyPressure */
        vstate = func_802B6750(seqp, key, chan);
        if (!vstate)
            return;
        vstate->velocity = byte2;
        func_802B8550(seqp->drvr, &vstate->voice, func_802B68E4(vstate, seqp),
                      func_802B6958(vstate, seqp->curTime));
        break;
    case 0xD0: /* AL_MIDI_ChannelPressure */
        for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
            if (vs->channel == chan) {
                vs->velocity = byte1;
                func_802B8550(seqp->drvr, &vs->voice, func_802B68E4(vs, seqp),
                              func_802B6958(vs, seqp->curTime));
            }
        }
        break;
    case 0xB0: /* AL_MIDI_ControlChange */
        switch (byte1) {
        case 0x0A: /* AL_MIDI_PAN_CTRL */
            seqp->chanState[chan].pan = byte2;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                if (vs->channel == chan) {
                    pan = func_802B6974(vs, seqp);
                    func_802B8420(seqp->drvr, &vs->voice, pan);
                }
            }
            break;
        case 0x07: /* AL_MIDI_VOLUME_CTRL */
            seqp->chanState[chan].vol = byte2;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                if ((vs->channel == chan) && (vs->envPhase != 3)) {
                    vol = func_802B68E4(vs, seqp);
                    func_802B8550(seqp->drvr, &vs->voice, vol, func_802B6958(vs, seqp->curTime));
                }
            }
            break;
        case 0x10: /* AL_MIDI_PRIORITY_CTRL */
            seqp->chanState[chan].priority = byte2;
            break;
        case 0x40: /* AL_MIDI_SUSTAIN_CTRL */
            seqp->chanState[chan].sustain = byte2;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                if ((vs->channel == chan) && (vs->phase != 3)) {
                    if (byte2 > 63) {
                        if (vs->phase == 0)
                            vs->phase = 2;
                    } else {
                        if (vs->phase == 2)
                            vs->phase = 0;
                        else if (vs->phase == 4) {
                            vs->phase = 3;
                            func_802B6BE4(seqp, &vs->voice, vs->sound->envelope->releaseTime);
                        }
                    }
                }
            }
            break;
        case 0x5B: /* AL_MIDI_FX1_CTRL */
            seqp->chanState[chan].fxmix = byte2;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next) {
                if (vs->channel == chan)
                    func_802B8370(seqp->drvr, &vs->voice, byte2);
            }
            break;
        default:
            break;
        }
        break;
    case 0xC0: /* AL_MIDI_ProgramChange */
        if (seqp->bank == 0)
            func_802BFD40(D_800CC5A0, D_800CC5A4, 711);
        if (key < seqp->bank->instCount) {
            ALInstrument *inst = seqp->bank->instArray[key];
            func_802B6B90(seqp, inst, chan);
        }
        break;
    case 0xE0: /* AL_MIDI_PitchBendChange */
        {
            s32 bendVal;
            f32 bendRatio;
            s32 cents;

            bendVal = ((byte2 << 7) + byte1) - 8192;
            cents = (seqp->chanState[chan].bendRange * bendVal) / 8192;
            bendRatio = func_802B4F00(cents);
            seqp->chanState[chan].pitchBend = bendRatio;
            for (vs = seqp->vAllocHead; vs != 0; vs = vs->next)
                if (vs->channel == chan)
                    func_802B84B0(seqp->drvr, &vs->voice, vs->pitch * bendRatio * vs->vibrato);
        }
        break;
    default:
        break;
    }
}
