/* Loads a preview model into the widget state, resets its motion and remembers its original size. */
typedef struct {float x,y,depth;char padc[8];float dx,dy,dz;char pad20[0xD4];float size;char padf8[0x90];} Model;
typedef struct {int selection;Model model;char pad18c[0x2EC];int active;float size;} State;
typedef struct {char pad[0x20];State *state;} Widget;
extern char D_8011FE88[];
extern Model *func_8028CF7C(void *,int,int);
extern float D_800E2524;
Model *func_804422BC(Widget *widget,int selection,int kind) {
 State *state=widget->state;
 Model *model=func_8028CF7C(D_8011FE88,selection,kind);
 if(!model){state->active=0;return 0;}
 state->selection=selection;
 state->active=1;
 state->model=*model;
 state->model.x=0;state->model.y=0;
 state->model.dx=0;state->model.dy=0;state->model.dz=0;
 state->model.depth=D_800E2524;
 state->size=state->model.size;
 return &state->model;
}
