#include "basetypes.h"

extern f32 func_8024BECC(void *arg0);
extern f32 D_800C9510;

f32 func_802672E8(u8 *arg0) {
    if (*arg0 == 1) {
        return func_8024BECC(arg0);
    } else {
        return D_800C9510;
    }
}
