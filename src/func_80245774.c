/** Read the word at offset 0x38 from the globally selected record. */
extern void *D_800E2830;

int func_80245774(void) {
    void *record = D_800E2830;
    return *(int *)((char *)record + 0x38);
}
