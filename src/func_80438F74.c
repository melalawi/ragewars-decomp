/* Dispatches preview-menu selections when the active dialog permits input. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char pad[0x1C];s32 unk1C;} State;
extern State *D_800E5830;
extern s32 D_80146894;
extern void func_8029A73C(void),func_80299368(s32),func_8042EB68(s32),func_80435190(s32),func_8043C458(void *);
extern s32 func_8029AA08(void),func_8043C4E8(void *);

#ifdef VERSION_DE
#define MSG_A 0x26F
#define MSG_B 0x26E
#define MSG_C 0x273
#define ARG_VAL 0x13
#define VALUE_274 0x270
#elif defined(VERSION_EU_X)
#define MSG_A 0x277
#define MSG_B 0x278
#define MSG_C 0x27C
#define ARG_VAL 0x13
#define VALUE_274 0x274
#else
#define MSG_A 0x272
#define MSG_B 0x273
#define MSG_C 0x277
#define ARG_VAL 0x13
#define VALUE_274 0x274
#endif

s32 func_80438F74(void) {
 func_8029A73C();
 if(func_8043C4E8(D_800E5830)==1) return 0;
 {
  D_80146894=0;
  switch(func_8029AA08()) {
  case MSG_A:func_8043C458(D_800E5830);D_800E5830->unk1C=0;break;
  case MSG_B:func_80435190(5);func_80299368(ARG_VAL);return 0;
  default:return 0;
  case MSG_C:func_8042EB68(0x21);break;
  }
 }
 return 0;
}