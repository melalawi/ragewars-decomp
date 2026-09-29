typedef struct func_8028403C_S1 func_8028403C_S1;
struct func_8028403C_S1 {
    char pad0[0x5C];
    unsigned int unk5C;
};

int func_8028403C(void *arg0) {
    char pad[0x10];
    return (((func_8028403C_S1 *)(arg0))->unk5C >> 2) & 1;
}
