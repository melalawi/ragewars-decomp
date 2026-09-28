extern void *D_80145060;

void *func_802392DC(int arg0) {
    void *node = D_80145060;
    if (node != 0) {
        do {
            if (*(int *)((char *)node + 0x5DC) == arg0) {
                return node;
            }
            node = *(void **)((char *)node + 0x16E0);
        } while (node != 0);
    }
    return 0;
}
