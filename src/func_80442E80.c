/* Initializes a widget from its descriptor and reserves extra state for type three widgets. */
typedef struct { short type; short pad; int flags; unsigned short x,y; unsigned char r,g,b,a; int value; } Descriptor;
typedef struct { int id; unsigned short type,pad; int flags; unsigned short x,y; unsigned char r,g,b,a; int value; Descriptor *desc; int index; void *extra; int arg; } Widget;
void func_80442E80(Widget *w, Descriptor *d, char **arena, int id, int arg) {
 int size; char *extra;
 w->id=id; w->type=d->type; w->flags=d->flags|0x1800000;
 w->x=d->x; w->y=d->y; w->r=d->r; w->g=d->g; w->b=d->b; w->a=d->a;
 w->value=d->value; w->desc=d; w->index=-1; w->arg=arg;
 size=0; if(d->type==3) size=0x480;
 if(size) {
 w->extra=*arena;
 extra=*arena; if(d->type==3) *(int *)(extra+0x478)=1;
 { int step=0; if(d->type==3) step=0x480;
 *arena+=step; }
 }
}
