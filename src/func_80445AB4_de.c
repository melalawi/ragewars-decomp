#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_804453C4.h"
#include "types.h"
/* Append one selected character to an eight-character entry buffer. */
#define NULL ((void *)0)


#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern struct LocalizedInputState D_80140F80;
#else
extern char D_80140F80;
#endif

extern Entry_func_80445AB4_de D_800E20A0[];
extern s32 func_8022A5A0_de(void *,s32);
s32 func_80445AB4_de(Obj_func_8043CC10_de *arg0, MenuRules *arg1) {
 s32 value; s32 count; s32 index=func_8022A5A0_de(&D_80140F80,arg1->locked);
 D_800E20A0[index].timer=0;
 if(D_800E20A0[index].count == 8) return 0;
 {
 D_800E20A0[index].text[D_800E20A0[index].value]=
#if defined(VERSION_EU) || defined(VERSION_EU_X)
     *arg0->unk14[D_80140F80.language];
#else
     **arg0->unk14;
#endif
 value=D_800E20A0[index].value+1;
 count=D_800E20A0[index].count+1;
 D_800E20A0[index].value=value;
 D_800E20A0[index].count=count;
 D_800E20A0[index].text[count]=0;
 }
 return 0;
}
