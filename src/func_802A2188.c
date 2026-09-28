/** Clear the global word at VRAM 0x800D2BBC. */
extern int D_800D2BBC;

void func_802A2188(void) {
    D_800D2BBC = 0;
}
