typedef struct func_8022A404_S1 func_8022A404_S1;
struct func_8022A404_S1 {
    char pad0[0x20];
    int unk20;
};

int func_8022A404(void *arg0) {
    return ((func_8022A404_S1 *)(arg0))->unk20;
}
