/* Sets the resource transition state and sound, while its adjacent helper refreshes the controller-option bit. */
typedef struct { char pad[0x10]; unsigned char flags; } Input;
typedef struct {char pad[0x1B2B0];Input *input;char pad1b2b4[0x15C];int mode,active;char pad1b418[0x20];int selection;} State;
extern int D_800D15D0;
extern void func_8025DF54(int),func_8044CA54(void);
void func_8044E178(State *state,int selection,int mode) {
 state->active=1;
 state->mode=mode;
 state->selection=selection;
 if(mode==2 && selection!=999)func_8025DF54(0x21C);
}
void func_8044E1D0(State *state) {
 func_8044CA54();
 D_800D15D0=(state->input->flags>>2)&1;
}
