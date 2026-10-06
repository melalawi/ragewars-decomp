#include "span_1000/code_8028308C.h"
#if defined(VERSION_EU)
#define func_802B2350 func_802AD520_eu
#else
#define func_802B2350 func_802AD280_de
#endif
/* Adds acceleration along a direction and clamps the resulting speed to its configured limit. */
#include "types.h"
#include "common/unused.h"




f32 func_802B2350(u16); f32 func_802B72B0_de(f32);
void func_80271F9C_de(Vec3 *,Vec3 *,f32); void func_80271F34_de(Vec3 *,Vec3 *,Vec3 *);
void func_80283A80_de(Obj_func_80283A80_de *arg0) {
 Vec3 delta, direction;
 Vec3 *velocity, *dir;
 int condition;
 f32 accel, length, limit;
 accel=func_802B2350(arg0->link->params->accel);
 if(accel != 0.0f) {
 dir=&direction;
 direction=arg0->direction;
 func_80271F9C_de(&delta,dir,accel);
 velocity=&arg0->velocity;
 func_80271F34_de(velocity,velocity,&delta);
 length=func_802B72B0_de(arg0->velocity.x*arg0->velocity.x+arg0->velocity.y*arg0->velocity.y+arg0->velocity.z*arg0->velocity.z);
 limit=func_802B2350(arg0->link->params->limit);
 if(accel>0.0f) { if(!(limit<length)) goto done; } else { if(!(length<limit)) goto done; } func_80271F9C_de(velocity,dir,limit); done:;
 }
}
