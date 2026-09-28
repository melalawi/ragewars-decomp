#include "basetypes.h"

/* Frees the block a handle holds through func_802538A8 and func_802537D8, allocates a new one through func_802533DC sized 256 bytes per requested unit or D_8011FECC plus 0x610 when none are requested, stores the block in the handle and its data pointer in the second argument, and zeroes the data with func_802A101C. */

extern char *D_8011FECC;
extern char D_800E0D90[];
extern void func_802538A8(s32 a);
extern void func_802537D8(s32, void *);
extern void **func_802533DC(s32, s32, s32, char *);
extern void func_802A101C(void *, s32, s32);

void func_804098F8(void ***handle, void **data, s32 units) {
    void **block;
    void *first;

    if (*handle != 0) {
        func_802538A8(0);
        func_802537D8(0, *handle);
    }
    if (units != 0) {
        units <<= 8;
    } else {
        units = (s32)(D_8011FECC + 0x610);
    }
    block = func_802533DC(0, units, 0x33, D_800E0D90);
    *handle = block;
    first = *block;
    *data = first;
    func_802A101C(first, 0, units);
}
