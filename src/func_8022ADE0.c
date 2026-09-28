#include "basetypes.h"

extern f32 func_8024D274(void);
extern f32 D_800C7DF8;

f32 func_8022ADE0(void *arg0) {
    if (*(int *)((char *)arg0 + 0x18) != 0) {
        return func_8024D274();
    } else {
        return D_800C7DF8;
    }
}
