void func_8022A918(void *arg0, int arg1) {
    if (*(int *)((char *)arg0 + 4) == arg1) {
        *(int *)((char *)arg0 + 0xB4) = 1;
    }
    *(int *)((char *)arg0 + 4) = arg1;
}
