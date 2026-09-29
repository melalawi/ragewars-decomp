typedef struct func_8022D178_S1 func_8022D178_S1;
struct func_8022D178_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
};

/** Clear three consecutive words in the second argument. */
void func_8022D178(void *unused, void *object) {
    ((func_8022D178_S1 *)(object))->unk1C = 0;
    ((func_8022D178_S1 *)(object))->unk20 = 0;
    ((func_8022D178_S1 *)(object))->unk24 = 0;
}
