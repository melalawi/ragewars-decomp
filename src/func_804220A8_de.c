#include "span_16E000/code_80420E90.h"
#include "shared/func_804220A8_de_closed.h"

void func_804220A8_de(int key) {
 Globals_func_804220A8_de *g = &D_80140FE8_de;
 Object_func_804220A8_de *o = g->object;
 float width = 45.0f;
 float height = D_800DD610[1];
 State_func_804220A8_de *state = D_800DE7E0;
 int selection;
 o->width = width; o->height = height;
 o->a = state->a; o->b = state->b; o->c = state->c; o->d = state->d;
 selection = func_804030E0_de(key);
 if (!func_8025477C_de()) func_8025476C_de(1);
 func_8044D528_de(D_8011BDC8, ~selection, 0);
 g->width = width; width = height; g->height = width;
}
