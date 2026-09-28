/* Allocates and clears the save buffer, while the adjacent release function frees it and resets its state. */
extern int *func_802533DC(int,int,int,void *);
extern void func_802537D8(int,int *),func_802538A8(int),func_802A101C(int,int,int);
extern char D_800E0CF0[];
extern int D_800E2850,D_800E2854;
extern int *D_800E2858;
void func_80404D84(void) {
 int *buffer=func_802533DC(0,0x810,0x23,D_800E0CF0);
 int data=*buffer;
 D_800E2858=buffer;
 D_800E2854=data;
 func_802A101C(data,0,0x810);
 D_800E2850=1;
}
void func_80404DDC(void) {
 func_802538A8(0);
 if(D_800E2858) {
  func_802537D8(0,D_800E2858);
  D_800E2858=0; D_800E2854=0;
 }
 D_800E2850=0;
}
