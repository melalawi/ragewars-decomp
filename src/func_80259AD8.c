int func_80259AD8(void *arg0, int arg1) {
    void *node = *(void **)((char *)arg0 + 8);
    void *sentinel = (char *)arg0 + 4;
    if (node != sentinel) {
        do {
            int value = *(int *)((char *)node + 0xB0);
            node = *(void **)((char *)node + 4);
            if (value == arg1) {
                return 1;
            }
        } while (node != sentinel);
    }
    return 0;
}
