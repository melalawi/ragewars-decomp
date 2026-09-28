extern void *D_800D80A0;
extern void func_802B8840(void);

void func_802B7570(void *arg0) {
    void **p;

    p = &D_800D80A0;
    if (*p == 0) {
        *p = arg0;
        func_802B8840();
    }
}
