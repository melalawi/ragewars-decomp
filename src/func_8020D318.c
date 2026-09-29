typedef struct func_8020D318_S1 func_8020D318_S1;
struct func_8020D318_S1 {
    char pad0[0x28];
    unsigned int unk28;
};

/** Report whether the word at object offset 0x28 equals two. */
int func_8020D318(void *arg0) {
    return ((func_8020D318_S1 *)(arg0))->unk28 == 2;
}
