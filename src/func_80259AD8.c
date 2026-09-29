typedef struct func_80259AD8_S1 func_80259AD8_S1;
typedef struct func_80259AD8_S2 func_80259AD8_S2;
struct func_80259AD8_S1 {
    char pad0[0x4];
    char unk4;
    char pad4[0x8 - 0x4 - sizeof(char)];
    void* unk8;
};
struct func_80259AD8_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0xB0 - 0x4 - sizeof(void*)];
    int unkB0;
};

int func_80259AD8(void *arg0, int arg1) {
    void *node = ((func_80259AD8_S1 *)(arg0))->unk8;
    void *sentinel = &((func_80259AD8_S1 *)(arg0))->unk4;
    if (node != sentinel) {
        do {
            int value = ((func_80259AD8_S2 *)(node))->unkB0;
            node = ((func_80259AD8_S2 *)(node))->unk4;
            if (value == arg1) {
                return 1;
            }
        } while (node != sentinel);
    }
    return 0;
}
