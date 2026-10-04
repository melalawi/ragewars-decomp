#include "span_1000/code_80222E80.h"
#include "types.h"
/* Checks accumulated opponent scores and updates the completion flag. */




extern State D_801427E0;
extern int func_8022A5A0_de(Root *,Obj_func_802281F0_de *);
s32 func_802281F0_de(Root *root) {
 State *initial=&D_801427E0; State *state;
 Obj_func_802281F0_de *node; int i,sum,skip; unsigned char *settings;
 if(initial->unk58==0) return 0;
 node=root->unk20; state=initial;
 if(node) { settings=(unsigned char *)state-0x5D8; }
 for(;node;node=node->unk16E0) {
  skip=func_8022A5A0_de(root,node);
  sum=0;
  for(i=0;i<8;i++) {
   if(i!=skip) {
    sum+=node->unk5D8->score[i];
    if(sum>=state->unk58) {
     { unsigned char trialKind=settings[0xD]; if(trialKind) {
      if(node->unk5D4<4) {state->humanWon=1;return 1;}
      state->humanWon=0;
      if(trialKind==1) continue;
     }
     } return 1;
    }
   }
  }
 }
 return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5234_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3F4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5148_4 = 65536.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C513C_4 = 0.00392156886f;
const float unbake_rodata_800C5140_4 = 65536.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C522C_12[] = {0x4D, 0x75, 0x6C, 0x74, 0x69, 0x20, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#endif
