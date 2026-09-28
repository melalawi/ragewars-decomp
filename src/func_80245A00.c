/** Clear the word at offset 0x100 in the active object. */
extern char *D_800E2830;

void func_80245A00(void) {
    char *base = D_800E2830;
    *(int *)(base + 0x100) = 0;
}
