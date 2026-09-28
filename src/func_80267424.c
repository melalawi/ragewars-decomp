/* Forwards the actor, event value and three-component input with a zero final flag. */
typedef struct { int x,y,z; } Triple;
extern void func_80216288(void *,int,Triple,int);
void func_80267424(void *actor,int unused1,int unused2,Triple input,int event) {
 func_80216288(actor,event,input,0);
}
