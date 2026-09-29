/* Returns the matching resource entry index, or minus one when absent. */
extern void *func_8028FD94(int,int);
typedef struct func_802508E0_S1 func_802508E0_S1;
struct func_802508E0_S1 {
    char pad0[0x8];
    char unk8;
};

int func_802508E0(void *wanted,int key) {
 int result=-1; int i,count,offset; char *entries;
 void *h=func_8028FD94(key,0);
 count=*((int *)h+1); entries=&((func_802508E0_S1 *)(h))->unk8;
i=0; if(count>0) {offset=i; do {if(entries+offset!=wanted) {i++;offset+=232;} else {result=i;break;}}while(i<count);}return result;}
