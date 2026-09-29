/* Advances the object's state timer at 0x48 while its state at 0x5C is 0 or 1, and after ten ticks invokes that state's transition, func_802A2D14(obj) or func_802A2D7C(obj, obj); returns 0. */
#include "basetypes.h"

typedef struct {
    char pad0[0x48];
    s32 timer;
    char pad4C[0x5C - 0x4C];
    s32 state;
} Obj;

extern void func_802A2D14(Obj *);
extern void func_802A2D7C(Obj *, Obj *);

s32 func_802A2FE8(Obj *obj) {
    Obj *self = obj; /* FAKEMATCH: copy-only local steers obj into a1 */

    switch (obj->state) {
    case 0:
        if (++obj->timer > 10) {
            func_802A2D14(obj);
        }
        break;
    case 1:
        if (++obj->timer > 10) {
            func_802A2D7C(obj, self);
        }
        break;
    case 2:
        break;
    }
    return 0;
}
