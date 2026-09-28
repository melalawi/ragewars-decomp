/* Computes the signed incline between two horizontal points projected onto a plane. */
#include "basetypes.h"
typedef struct {f32 x,y,z;} Vec;
typedef struct {char pad[0x18]; Vec pos;char pad24[0x24];Vec normal;} Plane;
extern f32 func_802BC380(f32),func_80274640(f32);
extern f32 D_800C8820[],D_800C8828;
static inline f32 height(Plane *p,f32 x,f32 z) {
 Vec n=p->normal;
 if(n.y==0) return p->pos.y;
 else {Vec v=p->pos; return ((v.z-z)*n.z+(v.x-x)*n.x+v.y*n.y)/n.y;}
}
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
f32 func_80240A88(Plane *p,f32 x0,f32 z0,f32 x1,f32 z1) {
 f32 y0,y1,dx,dz,dy,h,v,r;
 if(!p)return 0;
 y0=height(p,x0,z0);y1=height(p,x1,z1);
 dx=x1-x0;dz=z1-z0;dy=y1-y0;
 h=dx*dx+dz*dz;v=h+dy*dy;
 r=0.0f;
 if(v!=0){r=func_802BC380(h/v);r=func_80274640(MAX(-1.0f,MIN(1.0f,r)));if(!(y0<y1))r=-r;}
 return r;
}
