#include "span_1000/code_80286050.h"
#include "types.h"
/* Changes an object's model when the requested model id is present in the resource bank, then rebuilds its model data. */



extern void func_80246BE8_de(Object_func_8028B274_de *,s32,s32,s32);
static inline s32 find(Table_func_8028B274_de *table,u16 id) {
 s32 index=0,count; u16 *entry;entry=table->entries;count=table->count;
 if(count>0) { do {if(*entry==id) return index; index++;entry++;} while(index<count); }
 return -1;
}
void func_8028B274_de(Bank_func_8028B274_de *arg0,Object_func_8028B274_de *arg1,s32 arg2,s32 arg3) {
 s32 index=0;
 if(arg1->id!=arg2) {
 index=find(arg0->table,arg2);
 if(index!=-1){arg1->index=index;arg1->id=arg2;func_80246BE8_de(arg1,arg0->field54,arg0->field24,arg3);}
 }
}
