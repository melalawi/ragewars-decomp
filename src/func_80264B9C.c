/** Clear the global word at VRAM 0x8010FC40. */
extern int D_8010FC40;

void func_80264B9C(void) {
    D_8010FC40 = 0;
}
