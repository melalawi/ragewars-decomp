#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8042F988.h"
#include "types.h"















#if defined(VERSION_EU) || defined(VERSION_EU_X)
#if defined(VERSION_EU_X)
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_x_table)[language])
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_table)[language])
#endif
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) (fixed)
#endif
#define RW_MENU_TEXT(fixed, eu_table, eu_x_table, settings) RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, (settings)[0x581])
/* Initializes four player-menu slots and selects the first available child node. */
#if defined(VERSION_DE)
enum { PAK_SLOT_RESOURCE_688 = 716, PAK_SLOT_RESOURCE_689 = 713, PAK_SLOT_RESOURCE_690 = 714, PAK_SLOT_RESOURCE_691 = 715, PAK_SLOT_RESOURCE_692 = 712, PAK_SLOT_RESOURCE_694 = 718 };
#elif defined(VERSION_EU_X)
enum { PAK_SLOT_RESOURCE_688 = 764, PAK_SLOT_RESOURCE_689 = 761, PAK_SLOT_RESOURCE_690 = 762, PAK_SLOT_RESOURCE_691 = 760, PAK_SLOT_RESOURCE_692 = 763, PAK_SLOT_RESOURCE_694 = 766 };
#else
enum { PAK_SLOT_RESOURCE_688 = 688, PAK_SLOT_RESOURCE_689 = 689, PAK_SLOT_RESOURCE_690 = 690, PAK_SLOT_RESOURCE_691 = 691, PAK_SLOT_RESOURCE_692 = 692, PAK_SLOT_RESOURCE_694 = 694 };
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)


extern u8 D_80152789;
extern void *D_800E1394[], *D_800DD124[];
#endif
extern PakMenuController *D_800E1454_de;
extern void *D_800D3250[];
extern void func_8040E8D8_de(MenuWidget *,s32),func_8040E950_de(MenuWidget *,s32),func_8041B8DC_de(s32,s32,MenuWidget *);
extern MenuWidget *func_8040EC30_de(MenuWidget *,s32),*func_8041B7FC_de(s32,s32);
extern s32 func_8040EBD0_de(MenuWidget *),func_804358C0_de(s32,s8);
void func_80433914_de(s32 player) {
 s32 i;
 MenuWidget *label,*value;
 D_800E1454_de->players[player].chosen=0;
 D_800E1454_de->players[player].nodes[0]=func_8040EC30_de(D_800E1454_de->players[player].menuWidget,PAK_SLOT_RESOURCE_694);
 D_800E1454_de->players[player].nodes[1]=func_8040EC30_de(D_800E1454_de->players[player].menuWidget,PAK_SLOT_RESOURCE_691);
 D_800E1454_de->players[player].nodes[2]=func_8040EC30_de(D_800E1454_de->players[player].menuWidget,PAK_SLOT_RESOURCE_688);
 D_800E1454_de->players[player].nodes[3]=func_8040EC30_de(D_800E1454_de->players[player].menuWidget,PAK_SLOT_RESOURCE_692);
 for(i=0;i<4;i++) {
  D_800E1454_de->players[player].used[i]=2;
  D_800E1454_de->players[player].nodes[i]->alpha=255;
  label=func_8040EC30_de(D_800E1454_de->players[player].nodes[i],PAK_SLOT_RESOURCE_689);
  func_8040E950_de(D_800E1454_de->players[player].nodes[i],0);
  value=func_8040EC30_de(D_800E1454_de->players[player].nodes[i],PAK_SLOT_RESOURCE_690);
  if(D_800E1454_de->players[player].records[i].player!=-1) {
   value->text=D_800E1454_de->players[player].records[i].name;
   D_800E1454_de->players[player].used[i]=1;
   if(D_800E1454_de->phase==1) {
    func_8040E8D8_de(func_8040EC30_de(D_800E1454_de->players[player].nodes[i],PAK_SLOT_RESOURCE_689),0);
    if(func_804358C0_de(D_800E1454_de->players[player].profile,D_800E1454_de->players[player].records[i].owner)!=-1) {
     D_800E1454_de->players[player].used[i]=0;
     func_8040E950_de(D_800E1454_de->players[player].nodes[i],1);
     func_8040E8D8_de(func_8040EC30_de(D_800E1454_de->players[player].nodes[i],PAK_SLOT_RESOURCE_689),1);
    }
   }
  } else {value->text=RW_LOCALIZED_TEXT(D_800D3250[0], D_800E1394, D_800DD124, D_80152789);func_8040E8D8_de(label,0);}
 }
 label=func_8041B7FC_de(D_800E1454_de->root,player);
 while(func_8040EBD0_de(label))label=label->next;
 func_8041B8DC_de(D_800E1454_de->root,player,label);
}
