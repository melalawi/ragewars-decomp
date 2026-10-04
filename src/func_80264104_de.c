#include "common/types.h"
#include "span_1000/code_80263754.h"
#include "span_C76B0/data.h"
#include "types.h"






extern s32 D_8010AC90;

extern s32 D_801427D4;

extern void func_80285D30_de(s32 *);
extern void func_80285C78_de(void *arg0);
extern f32 func_802856E0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern unsigned int 
#if defined(VERSION_EU)
func_802B80B4_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B80F4_eu_x
#elif defined(VERSION_US)
func_802B7D44_us
#else
func_802B7E14_de
#endif
(void *arg0);
extern unsigned int 
#if defined(VERSION_EU)
func_802B7EF0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B7F30_eu_x
#elif defined(VERSION_US)
func_802B7B80_us
#else
func_802B7C50_de
#endif
(void *arg0);

void func_80264104_de(Obj80264124 *arg0) {
    Triple zero;
    void *object;
    s32 *global;
    f32 first;

    if (arg0->active != 0) {
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        if (arg0->state == 0) {
            goto reset;
        }
        global = &D_801427D4;
        if ((*global != 0) || (D_801371DC != 0) || (global[-6] != 13)) {
reset:
            arg0->amount = 0.0f;
            func_80285D30_de(arg0->object);
        } else {
            object = arg0->object;
            func_80285C78_de(object);
            first = func_802856E0_de(&D_8010AC90, arg0->x, arg0->y, arg0->z);
            arg0->amount = first + func_802856E0_de(object, zero.x, zero.y, zero.z);
        }
        if (arg0->active != 0) {
            if (arg0->amount != 0.0f) {
                arg0->timer += arg0->amount;
                if (arg0->timer >= D_800C4308_de) {
                    arg0->timer -= D_800C4308_de;
                    
#if defined(VERSION_EU)
func_802B80B4_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B80F4_eu_x
#elif defined(VERSION_US)
func_802B7D44_us
#else
func_802B7E14_de
#endif
((void *)arg0->status);
                    return;
                }
            }
            
#if defined(VERSION_EU)
func_802B7EF0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B7F30_eu_x
#elif defined(VERSION_US)
func_802B7B80_us
#else
func_802B7C50_de
#endif
((void *)arg0->status);
        }
    }
}
