/** Add an indexed word from the first argument to the second argument. */
int func_8028FE08(int *arg0, int arg1, int arg2) {
    arg0 += arg2;
    return arg1 + arg0[1];
}
