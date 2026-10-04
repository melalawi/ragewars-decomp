#include "span_16E000/code_80403BCC.h"
/* Releases the save buffer and clears its global state. */
extern void func_80253908_de(int);
extern void func_80253838_de(int, int *);
extern int D_800DE800;
extern int D_800DE804;
extern int *D_800DE808;

void func_80404DDC_de(void) {
    func_80253908_de(0);
    if (D_800DE808) {
        func_80253838_de(0, D_800DE808);
        D_800DE808 = 0;
        D_800DE804 = 0;
    }
    D_800DE800 = 0;
}
