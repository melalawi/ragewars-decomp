typedef struct func_8024F460_S1 func_8024F460_S1;
struct func_8024F460_S1 {
    char pad0[0x1C4];
    int unk1C4;
};

/** Clear the word at object offset 0x1C4. */
void func_8024F460(void *arg0) {
    ((func_8024F460_S1 *)(arg0))->unk1C4 = 0;
}
