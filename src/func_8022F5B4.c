extern void func_80265670(int a);

/** Thin wrapper forwarding an offset argument to func_80265670. */
void func_8022F5B4(int arg0) {
    func_80265670(arg0 + 0x51);
}
