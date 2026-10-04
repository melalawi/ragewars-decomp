#include "span_1000/code_802A31F4.h"
#include "types.h"
#if defined(VERSION_DE)
#define func_802A2164_us func_802A2224_de
#elif defined(VERSION_EU)
#define func_802A2164_us func_802A2344_eu
#elif defined(VERSION_EU_X)
#define func_802A2164_us func_802A2374_eu_x
#endif
s32 func_802A2164_us();
s32 func_8041EA70_de();
extern s32 D_800CDA28;
void func_802A21F4_de(void) {
    if (D_800CDA28 == 0) {
        func_8041EA70_de();
        func_802A2164_us();
    }
}
