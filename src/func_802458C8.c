/** Clear the global word at VRAM 0x800E2838. */
extern int D_800E2838;

void func_802458C8(void) {
    D_800E2838 = 0;
}
