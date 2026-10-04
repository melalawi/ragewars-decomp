#include "span_16E000/code_8044239C.h"
/* Initializes a widget from its descriptor and reserves extra state for type three widgets. */





void func_80442D10_de(Widget_func_80442D10_de *w, Descriptor_func_80442D10_de *d, char **arena, int id, int arg) {
 int size; char *extra;
 w->id=id; w->type=d->type; w->flags=d->flags|0x1800000;
 w->x=d->x; w->y=d->y; w->r=d->r; w->g=d->g; w->b=d->b; w->a=d->a;
 w->value=d->value; w->desc=d; w->index=-1; w->arg=arg;
 size=0; if(d->type==3) size=0x480;
 if(size) {
 w->extra=*arena;
 extra=*arena; if(d->type==3) ((struct Object_func_80442CF4_de *)(extra))->flag=1;
 { int step=0; if(d->type==3) step=0x480;
 *arena+=step; }
 }
}
