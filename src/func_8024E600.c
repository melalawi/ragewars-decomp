/** Return offset 0x34 only when the type byte at offset 0 is 1. */
int func_8024E600(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return *(int *)((char *)arg0 + 0x34);
    }
    return 0;
}
