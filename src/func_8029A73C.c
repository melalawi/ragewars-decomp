/** Mark the global object's field at offset 0x520. */
extern void *D_8014D080;

void func_8029A73C(void) {
    void *object = D_8014D080;
    *(int *)((char *)object + 0x520) = 1;
}
