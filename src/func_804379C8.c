#include "basetypes.h"

#ifdef VERSION_EU_X
#define VV_03D0 0x3D4
#define VV_03D1 0x3D5
#elif defined(VERSION_DE)
#define VV_03D0 0x3CA
#define VV_03D1 0x3CB
#else
#define VV_03D0 0x3D0
#define VV_03D1 0x3D1
#endif

/* Calls func_8041B190 with 0x3D0 and then 0x3D1, and returns zero. */
extern void func_8041B190(s32);

s32 func_804379C8(void) {
    func_8041B190(VV_03D0);
    func_8041B190(VV_03D1);
    return 0;
}
