/* Changes an object's model when the requested model id is present in the resource bank, then rebuilds its model data. */
#include "basetypes.h"
typedef struct {s32 unused,count;u16 entries[1];} Table;
typedef struct {char pad0[0x24];s32 field24;char pad28[0x2C];s32 field54;char pad58[0x3C];Table *table;} Bank;
typedef struct {char pad0[4];s16 index;char pad6[0xDE];u16 id;} Object;
extern void func_80246BD8(Object *,s32,s32,s32);
static inline s32 find(Table *table,u16 id) {
 s32 index=0,count; u16 *entry;entry=table->entries;count=table->count;
 if(count>0) { do {if(*entry==id) return index; index++;entry++;} while(index<count); }
 return -1;
}
void func_8028B250(Bank *arg0,Object *arg1,s32 arg2,s32 arg3) {
 s32 index=0;
 if(arg1->id!=arg2) {
 index=find(arg0->table,arg2);
 if(index!=-1){arg1->index=index;arg1->id=arg2;func_80246BD8(arg1,arg0->field54,arg0->field24,arg3);}
 }
}
