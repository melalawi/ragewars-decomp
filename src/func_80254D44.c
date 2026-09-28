extern int D_80105180;

extern void func_80255F58(void *arg0);

void func_80254D44(void *arg0, void *arg1) {
    int *p = &D_80105180;
    *(int *)((char *)arg1 + 0x10) = *p;
    func_80255F58((char *)p - 0xC10);
}
