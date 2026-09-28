/* Updates the two menu options and plays their change sounds. */
typedef struct { int first; int second; } Menu;
extern Menu *D_800E58A4;
extern unsigned char D_801462E1[];
extern int func_8041A760(int);
extern void func_8025DF54(int),func_8025E2F4(int);
extern int func_8025E2E4(void);
int func_804394E8(void) {
 int value;
 unsigned char *options;
 int sound;
 value=func_8041A760(D_800E58A4->second);
 options=D_801462E1;
 if(value!=options[0]){options[0]=value;func_8025DF54(0x460);}
 value=func_8041A760(D_800E58A4->first);
 if(value!=options[-1]){
  options[-1]=value;
  if((unsigned char)value<5) sound=0;
  else {if(func_8025E2E4()!=0)goto end; sound=0x34;}
  func_8025E2F4(sound);
 }
 end: return 0;
}
