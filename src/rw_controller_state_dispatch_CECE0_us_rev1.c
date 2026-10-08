#include "types.h"
struct CloseAttackActor;
typedef struct CloseAttackActor CloseAttackActor;
struct PatrolActor;
typedef struct PatrolActor PatrolActor;
struct RouteChaseActor;
typedef struct RouteChaseActor RouteChaseActor;
struct Root802131E0;
typedef struct Root802131E0 Root802131E0;
struct Actor_func_802120A8_eu;
typedef struct Actor_func_802120A8_eu Actor_func_802120A8_eu;
struct Actor_func_80212D78_eu_x;
typedef struct Actor_func_80212D78_eu_x Actor_func_80212D78_eu_x;
/* Real controller-table callbacks take an actor in a0. Native callers
 * additionally set a1 to zero; extern declarations retain actual arity. */
typedef void (*ControllerCallback)(void *, void *);
extern void func_80212470_eu(void *arg0);
extern void func_80211490_eu(CloseAttackActor *actor);
typedef struct ControllerDispatchPrefix { s32 id; ControllerCallback enter, update; } ControllerDispatchPrefix;
ControllerDispatchPrefix rw_controller_state_dispatch_CECE0_us_rev1 = {4, (ControllerCallback)((char *)func_80212470_eu - 0x80000000U), (ControllerCallback)((char *)func_80211490_eu - 0x80000000U)};
