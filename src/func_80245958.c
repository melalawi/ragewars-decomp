/* Returns the globally selected record's word at 0xA8 while its word at 0x38 is non-zero, and 0
   otherwise. */
extern void *D_800E2830;

int func_80245958(void) {
    void *record = D_800E2830;
    int cond = *(int *)((char *)record + 0x38) != 0;
    if (cond) {
        if (record) {
            return *(int *)((char *)record + 0xA8);
        } else {
            return *(int *)((char *)record + 0xA8);
        }
    }
    return 0;
}
