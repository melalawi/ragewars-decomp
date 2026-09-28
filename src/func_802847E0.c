#include "basetypes.h"

extern s32 func_80274544(void);

s32 func_802847E0(s32 arg0) {
    if (arg0 != 0) {
        return func_80274544() % (arg0 + 1);
    }
    return 0;
}
