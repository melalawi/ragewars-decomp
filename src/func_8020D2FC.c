typedef struct func_8020D2FC_S1 func_8020D2FC_S1;
struct func_8020D2FC_S1 {
    char pad0[0x28];
    int unk28;
};

/** Set the word at byte offset 0x28 to the state value two. */
void func_8020D2FC(void *object) {
    ((func_8020D2FC_S1 *)(object))->unk28 = 2;
}
