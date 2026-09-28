void func_8023CB80(void *arg0, void *arg1) {
    void *temp_v0;

    *(void **)((char *)arg1 + 4) = 0;
    *(void **)arg1 = *(void **)arg0;
    temp_v0 = *(void **)arg0;
    if (temp_v0 != 0) {
        *(void **)((char *)temp_v0 + 4) = arg1;
    }
    *(void **)arg0 = arg1;
    if (*(void **)((char *)arg0 + 4) == 0) {
        *(void **)((char *)arg0 + 4) = arg1;
    }
}
