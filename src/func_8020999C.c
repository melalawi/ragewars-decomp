/** Clear five consecutive object words beginning at offset 0x300. */
void func_8020999C(void *arg0) {
    *(int *)((char *)arg0 + 0x300) = 0;
    *(int *)((char *)arg0 + 0x304) = 0;
    *(int *)((char *)arg0 + 0x308) = 0;
    *(int *)((char *)arg0 + 0x30C) = 0;
    *(int *)((char *)arg0 + 0x310) = 0;
}
