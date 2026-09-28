/* Dispatches menu events to update the selected player slot state. */
typedef struct {char pad[0x54];int mode,state,selection,next,p64,p68,transition;char tail[0xAF8];} Slot;
extern Slot *D_800E54A4;
extern void func_8029A73C(void),func_80432488(int);
extern int func_8043492C(void);
int func_8042FD28(int a,int b,unsigned int event,int key){
 int index=event&65535; int offset0,offset1,offset2,offset3,offset4,offset5,offset6;
 if((event>>16)==3){
 switch(D_800E54A4->mode){
 case 6:
 if(key==10){int state;offset0=index*0xB68;state=((Slot *)((char *)D_800E54A4+offset0))->state;if(state==4){func_8029A73C();((Slot *)((char *)D_800E54A4+offset0))->transition=2;((Slot *)((char *)D_800E54A4+offset0))->state=2;((Slot *)((char *)D_800E54A4+offset0))->next=state;func_80432488(index);}}
 break;
 case 4:
 switch(key){
 case 11:case 13:
 offset1=index*0xB68;
 if(((Slot *)((char *)D_800E54A4+offset1))->state==0){func_8029A73C();((Slot *)((char *)D_800E54A4+offset1))->transition=2;((Slot *)((char *)D_800E54A4+offset1))->state=2;((Slot *)((char *)D_800E54A4+offset1))->next=4;func_80432488(index);}break;
 case 10:{int state;offset2=index*0xB68;state=((Slot *)((char *)D_800E54A4+offset2))->state;if(state==4){func_8029A73C();((Slot *)((char *)D_800E54A4+offset2))->transition=2;((Slot *)((char *)D_800E54A4+offset2))->state=2;((Slot *)((char *)D_800E54A4+offset2))->next=state;func_80432488(index);}break;}
 }break;
 case 0:
 if(key==11||key==13){offset3=index*0xB68;if(((Slot *)((char *)D_800E54A4+offset3))->state==0){func_8029A73C();((Slot *)((char *)D_800E54A4+offset3))->transition=2;((Slot *)((char *)D_800E54A4+offset3))->state=2;((Slot *)((char *)D_800E54A4+offset3))->next=12;func_80432488(index);}}break;
 case 3:
 if(key==11||key==13){offset4=index*0xB68;if(((Slot *)((char *)D_800E54A4+offset4))->state==0){func_8029A73C();((Slot *)((char *)D_800E54A4+offset4))->transition=2;((Slot *)((char *)D_800E54A4+offset4))->state=2;((Slot *)((char *)D_800E54A4+offset4))->next=13;((Slot *)((char *)D_800E54A4+offset4))->selection=5;func_80432488(index);}}break;
 case 1:
 if(key==11||key==13){offset5=index*0xB68;if(((Slot *)((char *)D_800E54A4+offset5))->state==0){func_8029A73C();((Slot *)((char *)D_800E54A4+offset5))->state=14;if(func_8043492C()>=0){((Slot *)((char *)D_800E54A4+offset5))->transition=2;((Slot *)((char *)D_800E54A4+offset5))->state=2;((Slot *)((char *)D_800E54A4+offset5))->next=13;((Slot *)((char *)D_800E54A4+offset5))->selection=6;}func_80432488(index);}}break;
 case 2:
 if(key==11||key==13){offset6=index*0xB68;if(((Slot *)((char *)D_800E54A4+offset6))->state==0){func_8029A73C();((Slot *)((char *)D_800E54A4+offset6))->state=14;if(func_8043492C()>=0){((Slot *)((char *)D_800E54A4+offset6))->transition=2;((Slot *)((char *)D_800E54A4+offset6))->state=2;((Slot *)((char *)D_800E54A4+offset6))->next=13;((Slot *)((char *)D_800E54A4+offset6))->selection=3;}func_80432488(index);}}break;
 case 5:case 7:break;
 }
 }return 0;
}
