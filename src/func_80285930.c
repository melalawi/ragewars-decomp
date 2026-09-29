typedef struct func_80285930_S1 func_80285930_S1;
struct func_80285930_S1 {
    char pad0[0x38];
    int* unk38;
};

/** Clear the target word when the pointer field is populated. */
void func_80285930(char *object) {
    int *target = ((func_80285930_S1 *)(object))->unk38;
    if (target != 0) {
        *target = 0;
    }
}
