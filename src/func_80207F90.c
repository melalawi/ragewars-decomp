typedef struct func_80207F90_S1 func_80207F90_S1;
struct func_80207F90_S1 {
    char pad0[0x100];
    unsigned int unk100;
};

/** Set flags 0x2100 in the word at offset 0x100. */
void func_80207F90(void *arg0) {
    ((func_80207F90_S1 *)(arg0))->unk100 |= 0x2100;
}
