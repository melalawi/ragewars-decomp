#include "span_16E000/code_8041ADB4.h"
#include "span_16E000/code_80436D48.h"
#include "types.h"

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

/* Calls func_8041B110_de with 0x13B, 0x13A and 0x13C in turn and returns zero. */


s32 func_80437414_de(void) {
    func_8041B110_de(VV_013B);
    func_8041B110_de(VV_013A);
    func_8041B110_de(VV_013C);
    return 0;
}
