extern void func_80225B74(void *a, void *b, int c);

/** Thin wrapper around func_80225B74 with a fixed third argument. */
void func_8022D928(void *a, void *b) {
    func_80225B74(a, b, 0x4A);
}
