/* Sets up a red effect with the default transform for the active view, draws it, and clears its mode. */
typedef struct {float x,y,z;} Vec;
typedef struct {Vec position,rotation;} Transform;
typedef struct {char pad[0x140];Transform view[1];} Object;
typedef struct {float red,green,blue,radius,extra;} Effect;
extern int D_800D15E0;
extern Effect D_800D15E4;
extern float D_800E2728;
extern Transform D_800D0EF8;
extern int D_800D297C,D_801540E0;
extern void func_8024A1C0(Object *, void *, void *);
void func_80443298(Object *object, void *context, void *lookup) {
 D_800D15E0=3;
 object->view[D_800D297C]=D_800D0EF8;
 D_800D15E4.red=D_800E2728;
 D_800D15E4.green=0;
 D_800D15E4.blue=0;
 D_800D15E4.extra=0;
 D_800D15E4.radius=(float)(D_801540E0/2);
 func_8024A1C0(object,context,lookup);
 D_800D15E0=0;
}
