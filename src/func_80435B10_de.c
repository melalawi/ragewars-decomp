#include "span_16E000/code_80435CF0.h"
/* Calls func_802A2164_us and then func_80298368_de with 1. */
extern void 
#if defined(VERSION_EU)
func_802A2344_eu
#elif defined(VERSION_EU_X)
func_802A2374_eu_x
#elif defined(VERSION_US) || defined(VERSION_US_REV1)
func_802A2164_us
#else
func_802A2224_de
#endif
();
extern void func_80298368_de(int);

void func_80435B10_de(void) {
    
#if defined(VERSION_EU)
func_802A2344_eu
#elif defined(VERSION_EU_X)
func_802A2374_eu_x
#elif defined(VERSION_US) || defined(VERSION_US_REV1)
func_802A2164_us
#else
func_802A2224_de
#endif
();
    func_80298368_de(1);
}
