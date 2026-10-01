#ifdef NON_MATCHING
/* NON_MATCHING: the cleanup callback follows the German version;
 * other versions retain measured relocation differences. */
#include "basetypes.h"

s32 D_80422020_auto();
s32 func_80254784(s32);
s32 func_802A3358();
extern s32 D_800E4F60;

s32 func_8042B574(void) {
    func_80254784(D_800E4F60);
    func_802A3358();
    D_80422020_auto();
    D_800E4F60 = 0;
    return 0;
}
#else
#include "basetypes.h"

/* Releases the object D_800E4F60 holds through func_80254784, calls func_802A3358 and
   func_80422050, clears D_800E4F60 and returns zero. */
extern void *D_800E4F60;
extern void func_80254784(void *);
extern void func_802A3358();
extern void func_80422050();

s32 func_8042B574(void) {
    func_80254784(D_800E4F60);
    func_802A3358();
    func_80422050();
    D_800E4F60 = 0;
    return 0;
}
#endif
