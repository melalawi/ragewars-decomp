/* Adds acceleration along a direction and clamps the resulting speed to its configured limit. */
#include "basetypes.h"
typedef struct {f32 x,y,z;} Vec;
typedef struct {char pad[16]; u16 accel,limit;} Params;
typedef struct {char pad[48]; Params *params;} Link;
typedef struct {char pad[28]; Vec velocity; char gap[0x118-40]; Link *link; char gap2[0x174-0x11c]; Vec direction;} Obj;
f32 func_802B2350(u16); f32 func_802BC380(f32);
void func_8027200C(Vec *,Vec *,f32); void func_80271FA4(Vec *,Vec *,Vec *);
void func_80283A54(Obj *arg0) {
 Vec delta, direction;
 Vec *velocity, *dir;
 int condition;
 f32 accel, length, limit;
 accel=func_802B2350(arg0->link->params->accel);
 if(accel != 0.0f) {
 dir=&direction;
 direction=arg0->direction;
 func_8027200C(&delta,dir,accel);
 velocity=&arg0->velocity;
 func_80271FA4(velocity,velocity,&delta);
 length=func_802BC380(arg0->velocity.x*arg0->velocity.x+arg0->velocity.y*arg0->velocity.y+arg0->velocity.z*arg0->velocity.z);
 limit=func_802B2350(arg0->link->params->limit);
 if(accel>0.0f) { if(!(limit<length)) goto done; } else { if(!(length<limit)) goto done; } func_8027200C(velocity,dir,limit); done:;
 }
}
