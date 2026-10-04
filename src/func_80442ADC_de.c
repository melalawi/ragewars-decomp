#include "span_16E000/code_8044239C.h"
#include "types.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
#include "types.h"

/* Hands func_804422F0_de a target and the scale twice: the target is what func_8043F120_de returns for
   an object of kind 5, otherwise the word the pointer at offset 0x14 addresses. */


extern void *
#if defined(VERSION_DE) || defined(VERSION_EU) || defined(VERSION_EU_X) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_8043F120_de
#else
func_8043F114_de
#endif
(struct Object_func_80442ADC_de *);
extern void func_804422F0_de(void *, f32, f32);

void func_80442ADC_de(struct Object_func_80442ADC_de *object, f32 scale) {
    void *target;

    if (object->kind == 5) {
        target = 
#if defined(VERSION_DE) || defined(VERSION_EU) || defined(VERSION_EU_X) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_8043F120_de
#else
func_8043F114_de
#endif
(object);
    } else {
        
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        target = object->target[D_80152789];
#else
        target = *object->target;
#endif
    }
    func_804422F0_de(target, scale, scale);
}
