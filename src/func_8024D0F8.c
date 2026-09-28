extern int func_80278530(int a, int b, void *c, int d, int e, void *f);
extern void func_80253E04(int a, int **b, int c);

void func_8024D0F8(void *arg0, int **arg1) {
    int *deref1;
    int deref2;
    int ret;

    deref1 = *arg1;
    deref2 = *deref1;
    ret = func_80278530(deref2, 0, (char *)arg0 + 0xE8, *(int *)((char *)arg0 + 0xB4), 1, arg0);
    func_80253E04(0, arg1, ret);
}
