extern void func_8044B420(int a);

/** Thin wrapper forwarding an offset argument to func_8044B420. */
void func_80239C10(int arg0) {
    func_8044B420(arg0 + 0x570);
}
