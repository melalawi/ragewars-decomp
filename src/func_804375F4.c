#include "basetypes.h"

#ifdef VERSION_EU_X
#define VV_013B 0x13F
#define VV_013A 0x13E
#define VV_013C 0x140
#elif defined(VERSION_DE)
#define VV_013B 0x139
#define VV_013A 0x138
#define VV_013C 0x13A
#else
#define VV_013B 0x13B
#define VV_013A 0x13A
#define VV_013C 0x13C
#endif

/* Calls func_8041B190 with 0x13B, 0x13A and 0x13C in turn and returns zero. */
extern void func_8041B190(s32);

s32 func_804375F4(void) {
    func_8041B190(VV_013B);
    func_8041B190(VV_013A);
    func_8041B190(VV_013C);
    return 0;
}
