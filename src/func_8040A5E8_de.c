#include "common/types.h"
#include "span_16E000/code_8040A4BC.h"
#include "types.h"

/* Calls func_802AD548_eu on the word at offset 0x24 of the structure D_800E28BC points to and
   returns zero. */


extern struct func_80207B5C_S2 *D_800DE86C;
extern void 
#if defined(VERSION_EU) || defined(VERSION_EU_X) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_802AD548_eu
#else
func_802AD2A8
#endif
(s32);

s32 func_8040A5E8_de(void) {
    
#if defined(VERSION_EU) || defined(VERSION_EU_X) || defined(VERSION_US) || defined(VERSION_US_REV1)
func_802AD548_eu
#else
func_802AD2A8
#endif
(D_800DE86C->unk24);
    return 0;
}
