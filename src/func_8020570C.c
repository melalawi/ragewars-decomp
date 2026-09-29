typedef struct func_8020570C_S1 func_8020570C_S1;
struct func_8020570C_S1 {
    char pad0[0xC];
    unsigned int unkC;
};

int func_8020570C(void *arg0) {
    return ((((func_8020570C_S1 *)(arg0))->unkC >> 9) ^ 1) & 1;
}
