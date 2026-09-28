extern void func_802164A8(void *a, void *b);

/** Thin wrapper forwarding arg0 and an offset of it to func_802164A8. */
void func_8024BE2C(void *arg0) {
    func_802164A8(arg0, (char *)arg0 + 0x170);
}
