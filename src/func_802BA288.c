/* alEnvmixerParam, drafted from ultralib src/audio/env.c: apply one parameter to the envelope
   mixer, appending an update to the control list, resetting or starting the filter, setting its
   source, and otherwise passing the parameter down to the source. The parameter identifiers are
   the cartridge's own 1, 3, 4 and 9. */
#include "basetypes.h"

typedef struct ALParam_s {
    struct ALParam_s *next;
    s32 delta;
    s32 type;
    union {
        s32 i;
        f32 f;
        void *p;
    } data;
} ALParam;

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    s32 (*setParam)(void *, s32, void *);
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    ALFilter filter;
    void *state;
    s16 pan;
    s16 volume;
    s16 cvolL;
    s16 cvolR;
    s16 dryamt;
    s16 wetamt;
    u16 lratl;
    s16 lratm;
    s16 ltgt;
    u16 rratl;
    s16 rratm;
    s16 rtgt;
    s32 delta;
    s32 segEnd;
    s32 first;
    ALParam *ctrlList;
    ALParam *ctrlTail;
    ALFilter **sources;
    s32 motion;
} ALEnvMixer;

#define AL_FILTER_SET_SOURCE 1
#define AL_FILTER_ADD_UPDATE 3
#define AL_FILTER_RESET      4
#define AL_FILTER_START      9

#define AL_STOPPED 0
#define AL_PLAYING 1

s32 func_802BA288(void *filter, s32 paramID, void *param)
{
    ALFilter *f = (ALFilter *)filter;
    ALEnvMixer *e = (ALEnvMixer *)filter;

    switch (paramID) {

      case (AL_FILTER_ADD_UPDATE):
          if (e->ctrlTail) {
              e->ctrlTail->next = (ALParam *)param;
          } else {
              e->ctrlList = (ALParam *)param;
          }
          e->ctrlTail = (ALParam *)param;

          break;

      case (AL_FILTER_RESET):
          e->first = 1;
          e->motion = AL_STOPPED;
          e->volume = 1;
          if (f->source)
              (*f->source->setParam)(f->source, AL_FILTER_RESET, param);
          break;

      case (AL_FILTER_START):
          e->motion = AL_PLAYING;
          if (f->source)
              (*f->source->setParam)(f->source, AL_FILTER_START, param);
          break;

      case (AL_FILTER_SET_SOURCE):
          f->source = (ALFilter *)param;
          break;

      default:
          if (f->source)
              (*f->source->setParam)(f->source, paramID, param);
    }
    return 0;
}
