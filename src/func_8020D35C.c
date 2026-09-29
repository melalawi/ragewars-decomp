typedef struct func_8020D35C_S1 func_8020D35C_S1;
struct func_8020D35C_S1 {
    char pad0[0x28];
    int unk28;
};

/** Clear the word at offset 0x28. */
void func_8020D35C(void *arg0) {
    ((func_8020D35C_S1 *)(arg0))->unk28 = 0;
}
