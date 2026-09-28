/** Swap the two words pointed to by arg0 and arg1. */
void func_8023B928(int *arg0, int *arg1) {
    int temp;

    temp = *arg0;
    *arg0 = *arg1;
    *arg1 = temp;
}
