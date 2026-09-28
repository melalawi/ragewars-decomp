int func_802561DC(void *arg0, int arg1) {
    int node = *(int *)arg0;
    if (node != 0) {
        do {
            if (node == arg1) {
                return 1;
            }
            node = *(int *)(node + *(int *)((char *)arg0 + 0xC));
        } while (node != 0);
    }
    return 0;
}
