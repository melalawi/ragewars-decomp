/* Marks the active player weapon slots from the eight identifiers in the selected resource. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char pad[0x78];u8 active;char pad79[0x18];u8 out;} Status;
typedef struct {char pad[0x5D8];Status *status;char pad5dc[0x26];u8 weapons[22][2];} Player;
extern char D_8011FE88[];
extern s32 D_8015402C;
extern void *func_8028D450(void *,s32);
void func_804263BC(Player *player) {
 Status *status=player->status;s32 i;u16 *entries;s32 id; s32 active;u16 *resource;
 if(status->out!=1 && status->active!=0) {
  resource=func_8028D450(D_8011FE88,D_8015402C);i=0;active=1;entries=resource;
  do {
   id=entries[3];
   if((s32)id>=0x4C3) {id-=0x4C3;player->weapons[id][0]=active;player->weapons[id][1]=i;}
   i++;entries++;
  }while(i<8);
 }
}