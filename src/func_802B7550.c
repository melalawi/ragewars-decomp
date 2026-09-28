void func_802B7550(void *arg0, void **arg1) {
    void *temp;

    temp = *arg1;
    *(void **)((char *)arg0 + 4) = arg1;
    *(void **)arg0 = temp;
    temp = *arg1;
    if (temp != 0) {
        *(void **)((char *)temp + 4) = arg0;
    }
    *arg1 = arg0;
}
