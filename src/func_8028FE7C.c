void func_8028FE7C(int *arg0, int **arg1, int *arg2) {
    char *p;
    *arg1 = arg0;
    p = (char *)arg0 + *arg0 * 4;
    *arg2 = *(int *)(p + 4);
}
