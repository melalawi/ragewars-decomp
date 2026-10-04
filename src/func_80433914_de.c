#include "common/types.h"
#include "span_16E000/code_8042ED84.h"
#include "span_16E000/types.h"
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D1EFC_74[] = {0x80, 0x0C, 0xEF, 0xF4, 0x80, 0x0C, 0xEF, 0xFC, 0x80, 0x0C, 0xF0, 0x0C, 0x80, 0x0C, 0xF0, 0x14, 0x80, 0x0C, 0xF0, 0x1C, 0x80, 0x0C, 0xF0, 0x24, 0x80, 0x0C, 0xF0, 0x2C, 0x80, 0x0C, 0xF0, 0x34, 0x80, 0x0C, 0xF0, 0x40, 0x80, 0x0C, 0xF0, 0x48, 0x80, 0x0C, 0xF0, 0x50, 0x80, 0x0C, 0xF0, 0x58, 0x80, 0x0C, 0xF0, 0x64, 0x80, 0x0C, 0xF0, 0x6C, 0x80, 0x0C, 0xF0, 0x74, 0x80, 0x0C, 0xF0, 0x7C, 0x80, 0x0C, 0xF0, 0x84, 0x80, 0x0C, 0xF0, 0x8C, 0x80, 0x0C, 0xF0, 0x98, 0x80, 0x0C, 0xF0, 0xA0, 0x80, 0x0C, 0xF0, 0xA8, 0x80, 0x0C, 0xF0, 0xB0, 0x80, 0x0C, 0xF0, 0xB8, 0x80, 0x0C, 0xF0, 0xC0, 0x80, 0x0C, 0xF0, 0xC8, 0x80, 0x0C, 0xF0, 0xD0, 0x80, 0x0C, 0xF0, 0xD8, 0x80, 0x0C, 0xF0, 0xE4, 0x80, 0x0C, 0xF0, 0xEC};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D727C_74[] = {0x80, 0x0D, 0x43, 0x74, 0x80, 0x0D, 0x43, 0x7C, 0x80, 0x0D, 0x43, 0x8C, 0x80, 0x0D, 0x43, 0x94, 0x80, 0x0D, 0x43, 0x9C, 0x80, 0x0D, 0x43, 0xA4, 0x80, 0x0D, 0x43, 0xAC, 0x80, 0x0D, 0x43, 0xB4, 0x80, 0x0D, 0x43, 0xC0, 0x80, 0x0D, 0x43, 0xC8, 0x80, 0x0D, 0x43, 0xD0, 0x80, 0x0D, 0x43, 0xD8, 0x80, 0x0D, 0x43, 0xE4, 0x80, 0x0D, 0x43, 0xEC, 0x80, 0x0D, 0x43, 0xF4, 0x80, 0x0D, 0x43, 0xFC, 0x80, 0x0D, 0x44, 0x04, 0x80, 0x0D, 0x44, 0x0C, 0x80, 0x0D, 0x44, 0x18, 0x80, 0x0D, 0x44, 0x20, 0x80, 0x0D, 0x44, 0x28, 0x80, 0x0D, 0x44, 0x30, 0x80, 0x0D, 0x44, 0x38, 0x80, 0x0D, 0x44, 0x40, 0x80, 0x0D, 0x44, 0x48, 0x80, 0x0D, 0x44, 0x50, 0x80, 0x0D, 0x44, 0x58, 0x80, 0x0D, 0x44, 0x64, 0x80, 0x0D, 0x44, 0x6C};
#endif
