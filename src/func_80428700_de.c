#include "span_16E000/code_804264F0.h"
#include "types.h"



/* Opens the five option windows of screen D_800E0640_de: for each of options 0 to 4 it picks window
   0x149, 0x14C, 0x14D, 0x14E or 0x14F through jtbl_800DD9F0, opens it under the screen's parent at
   0x970, opens its 0x14B child and shows that through func_8040E8D8_de. The loop walks the table with
   its own pointer, as the cartridge's strength-reduced dispatch does. */
extern ResultsOptionsScreen *D_800E0640_de;
extern void *jtbl_800DD9F0[];
extern void *func_8040EC30_de(void *, s32);
extern void func_8040E8D8_de(void *, s32);

#if defined(VERSION_DE)
enum { RESULTS_OPTION_329 = 327, RESULTS_OPTION_331 = 329, RESULTS_OPTION_332 = 330, RESULTS_OPTION_333 = 331, RESULTS_OPTION_334 = 332, RESULTS_OPTION_335 = 333 };
#elif defined(VERSION_EU_X)
enum { RESULTS_OPTION_329 = 333, RESULTS_OPTION_331 = 335, RESULTS_OPTION_332 = 336, RESULTS_OPTION_333 = 337, RESULTS_OPTION_334 = 338, RESULTS_OPTION_335 = 339 };
#else
enum { RESULTS_OPTION_329 = 329, RESULTS_OPTION_331 = 331, RESULTS_OPTION_332 = 332, RESULTS_OPTION_333 = 333, RESULTS_OPTION_334 = 334, RESULTS_OPTION_335 = 335 };
#endif

void func_80428700_de(void) {
    /* FAKEMATCH: retain the recovered table labels and pointer-walking dispatch. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&option_0, &&option_1, &&option_2, &&option_3, &&option_4, &&open
    };
    s32 id = 0;
    s32 option;
    void **entry;

    for (option = 0, entry = jtbl_800DD9F0; option < 5; entry++, option++) {
        if ((u32)option >= 5) {
            goto open;
        }
        goto **entry;
    option_0:
        id = RESULTS_OPTION_329;
        goto open;
    option_1:
        id = RESULTS_OPTION_332;
        goto open;
    option_2:
        id = RESULTS_OPTION_333;
        goto open;
    option_3:
        id = RESULTS_OPTION_334;
        goto open;
    option_4:
        id = RESULTS_OPTION_335;
    open:
        func_8040E8D8_de(func_8040EC30_de(func_8040EC30_de(D_800E0640_de->parent, id), RESULTS_OPTION_331), 1);
    }
}
