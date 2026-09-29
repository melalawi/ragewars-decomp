typedef struct func_802561DC_S1 func_802561DC_S1;
struct func_802561DC_S1 {
    char pad0[0xC];
    int unkC;
};

int func_802561DC(void *arg0, int arg1) {
    int node = *(int *)arg0;
    if (node != 0) {
        do {
            if (node == arg1) {
                return 1;
            }
            node = *(int *)(node + ((func_802561DC_S1 *)(arg0))->unkC);
        } while (node != 0);
    }
    return 0;
}
