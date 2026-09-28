/* Loads the preview resource into the sound buffer when idle, while the adjacent helper resets a changed selection. */
typedef struct {char pad[0x3C];int resource;char pad40[8];int bank;char pad4c[0x1B3C0];int selection;char pad1b410[12];int changed;} State;
extern char D_285130[],D_800CA1BC[],D_800F81F0[];
extern int func_80264B8C(void);
extern int *func_802518DC(int,int,int,int,int,int,void *,void *,int);
extern void func_802C2490(void *,int,int),func_802537D8(int,int *),func_8044E178(State *,int,int);
void func_8044DD40(State *state) {
 int *resource;
 int id;
 if(func_80264B8C()==0) {
  resource=func_802518DC(0,state->resource,state->resource,state->bank,0,0,D_285130,D_800CA1BC,1);
  func_802C2490(D_800F81F0,*resource,0x5000);
  func_802537D8(0,resource);
 }
}
void func_8044DDC8(State *state,int selection) {
 if(selection!=state->selection) {
  state->changed=0;
  func_8044E178(state,~selection,0);
 }
}
