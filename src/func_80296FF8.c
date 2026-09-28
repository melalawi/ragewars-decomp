/** Clear the global word at VRAM 0x800D2B00. */
extern int D_800D2B00;

void func_80296FF8(void) {
    D_800D2B00 = 0;
}
