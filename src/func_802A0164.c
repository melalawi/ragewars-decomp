extern void func_8029DE3C(s32, s32, s32);

/** Thin wrapper forwarding arg0 twice (as first and third args) to func_8029DE3C. */
void func_802A0164(int arg0, int arg1) {
    func_8029DE3C(arg0, arg1, arg0);
}
