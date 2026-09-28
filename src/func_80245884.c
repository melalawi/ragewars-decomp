/* Calls func_80402BA0 when the globally selected record's word at 0x38 is non-zero. */
extern void *D_800E2830;
extern void func_80402BA0(void);

void func_80245884(void) {
    void *record = D_800E2830;
    if (*(int *)((char *)record + 0x38) != 0) {
        func_80402BA0();
    }
}
