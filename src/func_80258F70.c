extern void func_8025D1DC(void *);

/** Thin wrapper forwarding an offset argument to func_8025D1DC. */
void func_80258F70(int arg0) {
    func_8025D1DC(arg0 + 0x2BC0);
}
