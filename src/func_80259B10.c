void func_80259B10(void **arg0, void *arg1) {
    *(void **)arg1 = *arg0;
    *(void **)((char *)arg1 + 4) = arg0;
    *(void **)((char *)(*arg0) + 4) = arg1;
    *arg0 = arg1;
}
