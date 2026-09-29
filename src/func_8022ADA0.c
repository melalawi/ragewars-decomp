typedef struct func_8022ADA0_S1 func_8022ADA0_S1;
struct func_8022ADA0_S1 {
    char pad0[0x5E4];
    int unk5E4;
};

/** Report whether the signed word at byte offset 0x5E4 is below 0x6400. */
int func_8022ADA0(void *object) {
    return ((func_8022ADA0_S1 *)(object))->unk5E4 < 0x6400;
}
