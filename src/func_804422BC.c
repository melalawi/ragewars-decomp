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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD1A4_4 = 10240.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2524_4 = 10240.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EEB74_4 = 10240.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9D34_4 = 10240.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE4F4_4 = 10240.0f;
#endif
