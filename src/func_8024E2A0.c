/** Report whether the object pointed to at offset 0x18 equals one. */
int func_8024E2A0(void *arg0) {
    return *(int *)(*(int **)((char *)arg0 + 0x18)) == 1;
}
