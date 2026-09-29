typedef struct func_8022C884_S1 func_8022C884_S1;
struct func_8022C884_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
};

void func_8022C884(void *arg0, void *arg1) {
    ((func_8022C884_S1 *)(arg1))->unk1C = 0;
    ((func_8022C884_S1 *)(arg1))->unk20 = 0;
    ((func_8022C884_S1 *)(arg1))->unk24 = 0;
}
