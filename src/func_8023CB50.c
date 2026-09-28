void func_8023CB50(void *arg0, void *arg1) {
    void *temp_v0;

    *(void **)arg1 = 0;
    *(void **)((char *)arg1 + 4) = *(void **)((char *)arg0 + 4);
    temp_v0 = *(void **)((char *)arg0 + 4);
    if (temp_v0 != 0) {
        *(void **)temp_v0 = arg1;
    }
    *(void **)((char *)arg0 + 4) = arg1;
    if (*(void **)arg0 == 0) {
        *(void **)arg0 = arg1;
    }
}
