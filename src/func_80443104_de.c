#include "span_16E000/code_8044239C.h"
/* Calls func_8024B990_de with its three arguments and the table D_800D0EF8 as the fourth. */
extern char D_800CBCA8[];
extern void func_8024B990_de(void *, void *, void *, void *);

void func_80443104_de(void *first, void *second, void *third) {
    func_8024B990_de(first, second, third, D_800CBCA8);
}
