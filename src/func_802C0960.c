void func_802C0960(void **arg0, void *arg1) {
    void **a0;
    void *v0;

    a0 = arg0;
    v0 = *a0;
    while (v0 != 0) {
        if (v0 != arg1) {
            a0 = (void **)v0;
            v0 = *a0;
        } else {
            *a0 = *(void **)v0;
            return;
        }
    }
}
