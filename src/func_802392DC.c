extern void *D_80145060;

typedef struct func_802392DC_S1 func_802392DC_S1;
struct func_802392DC_S1 {
    char pad0[0x5DC];
    int unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(int)];
    void* unk16E0;
};

void *func_802392DC(int arg0) {
    void *node = D_80145060;
    if (node != 0) {
        do {
            if (((func_802392DC_S1 *)(node))->unk5DC == arg0) {
                return node;
            }
            node = ((func_802392DC_S1 *)(node))->unk16E0;
        } while (node != 0);
    }
    return 0;
}
