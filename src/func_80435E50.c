#include "basetypes.h"

/* On event 3 with value 0xD, clears D_80146894 and calls func_802A3304 and func_8025E3A4. Returns
   zero. */
extern s32 D_80146894;
extern void func_802A3304();
extern void func_8025E3A4();

s32 func_80435E50(void *first, void *second, u32 event, s32 value) {
    if ((event >> 16) == 3) {
        if (value != 0xD) {
            return 0;
        }
        D_80146894 = 0;
        func_802A3304();
        func_8025E3A4();
    }
    return 0;
}
