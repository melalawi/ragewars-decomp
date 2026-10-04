#include "span_1000/code_80201ACC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
/** Run the object's update hook, then advance its timer and fire the expiry action when due. */


extern float D_800CD738;

extern void func_80214178_de(void *, void *, int);






void func_802039F8_de(char *arg0, Obj *arg1) {
    if (arg1->hook != 0 && arg1->hook->fn != 0) {
        arg1->hook->fn(arg0, arg1);
    }
    if (((struct Owner_func_8020388C_de *)(arg0))->id == 0x40C) {
        arg1->timer += D_800CD738;
        if (D_800C1A48_de < arg1->timer || arg1->count <= 0) {
            func_80214178_de(arg0, arg1, 0x40);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1978_4 = 675.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B38_4 = 675.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CE8_4 = 675.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D28_4 = 675.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A48_4 = 675.0f;
#endif
