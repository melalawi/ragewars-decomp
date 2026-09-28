/** Reset three state words and set the final state to one. */
void func_80209988(void *arg0) {
    *(int *)((char *)arg0 + 0x2F4) = 0;
    *(int *)((char *)arg0 + 0x2F8) = 0;
    *(int *)((char *)arg0 + 0x2FC) = 1;
}
