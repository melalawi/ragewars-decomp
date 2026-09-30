/* Releases the save buffer and clears its global state. */
extern void func_802538A8(int);
extern void func_802537D8(int, int *);
extern int D_800E2850;
extern int D_800E2854;
extern int *D_800E2858;

void func_80404DDC(void) {
    func_802538A8(0);
    if (D_800E2858) {
        func_802537D8(0, D_800E2858);
        D_800E2858 = 0;
        D_800E2854 = 0;
    }
    D_800E2850 = 0;
}
