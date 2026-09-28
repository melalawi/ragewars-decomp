/** Clear the target word when the pointer field is populated. */
void func_80285930(char *object) {
    int *target = *(int **)(object + 0x38);
    if (target != 0) {
        *target = 0;
    }
}
