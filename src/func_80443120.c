/* Writes a numeric menu value through its bound storage callback using the selected scalar type. */
typedef struct {int pad0,type;char pad8[16];void *(*storage)(void);} Binding;
typedef struct {char pad[20];Binding *binding;} Item;
void func_80443120(Item *item,float value) {
 float *storage;
 Binding *binding;
 unsigned int *word;
 binding=item->binding;
 storage=binding->storage();

 switch(binding->type) {
 case 0:*(float *)storage=value;return;
 case 3:*(signed char *)storage=(int)value;return;
 case 4:*(short *)storage=(int)value;return;
 case 1:case 2:case 5:*(int *)storage=(int)value;return;
 case 6:*(unsigned char *)storage=(unsigned int)value;return;
 case 7:*(unsigned short *)storage=(unsigned int)value;return;
 case 8:word=(unsigned int *)storage;*word=(unsigned int)value;return;
 }
}
