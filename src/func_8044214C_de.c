#include "span_16E000/code_8043EEC0.h"
/* Loads a preview model into the widget state, resets its motion and remembers its original size. */



extern char D_8011BDC8[];
extern Model_func_8044214C_de *func_8028CFA0_de(void *,int,int);
Model_func_8044214C_de *func_8044214C_de(Widget_func_8044214C_de *widget,int selection,int kind) {
 State_func_8044214C_de *state=widget->state;
 Model_func_8044214C_de *model=func_8028CFA0_de(D_8011BDC8,selection,kind);
 if(!model){state->active=0;return 0;}
 state->selection=selection;
 state->active=1;
 state->model=*model;
 state->model.x=0;state->model.y=0;
 state->model.dx=0;state->model.dy=0;state->model.dz=0;
 state->model.depth=(10240.0f);
 state->size=state->model.size;
 return &state->model;
}
