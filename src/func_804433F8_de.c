#include "span_16E000/code_804434BC.h"
#include "types.h"

/* Stores what func_802AD548_eu returns for D_8013B2BC in D_801540F4 and sets D_801540F0 to 0. */
extern s32 D_801371FC;
extern s32 D_8014DE64;
extern s32 D_8014DE60;
extern s32 
#if defined(VERSION_EU) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_802AD548_eu
#else
func_802AD2A8
#endif
(s32);

void func_804433F8_de(void) {
    D_8014DE64 = 
#if defined(VERSION_EU) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_802AD548_eu
#else
func_802AD2A8
#endif
(D_801371FC);
    D_8014DE60 = 0;
}
