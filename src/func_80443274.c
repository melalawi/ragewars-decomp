/* Calls func_8024B980 with its three arguments and the table D_800D0EF8 as the fourth. */
extern char D_800D0EF8[];
extern void func_8024B980(void *, void *, void *, void *);

void func_80443274(void *first, void *second, void *third) {
    func_8024B980(first, second, third, D_800D0EF8);
}
