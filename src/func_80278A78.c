/* Copies vertex RGB channels into output colors while clamping each channel to the range 30 through 225; the traversal cast reuses the input pointer register, and -fno-strength-reduce preserves the reference loop layout. */
#include "basetypes.h"
typedef struct { char pad0[0xC]; u8 r,g,b,a; } Vertex;
typedef struct { s32 unused,count; Vertex vertices[1]; } Model;
typedef struct { u8 r,g,b,a; } Color;
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
void func_80278A78(Model *model, Color *out) {
 s32 i,count; Vertex *v; Color *c;
 i=0;count=((Model *)model)->count;model=(Model *)model->vertices;
 if(count>0) do {
 c=out++; c->r=MAX(MIN(((Vertex *)model)->r,225),30);c->g=MAX(MIN(((Vertex *)model)->g,225),30);c->b=MAX(MIN(((Vertex *)model)->b,225),30);
 i++;model=(Model *)((char *)model+sizeof(Vertex));
 } while(i<count);
}