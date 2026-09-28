#include "basetypes.h"

/** Calls func_80257380 with &D_8010C080 as its argument. */

extern char D_8010C080[];

extern void func_80257380(void *arg0);

void func_8025DE50(void) {
    func_80257380(D_8010C080);
}
