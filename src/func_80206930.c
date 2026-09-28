/** Copy the source byte at offset 7 into two fields under object offset 0x18. */
void func_80206930(void *arg0, int arg1, void *arg2) {
    void *inner = *(void **)((char *)arg0 + 0x18);
    *(unsigned char *)((char *)inner + 0xE) = *(unsigned char *)((char *)arg2 + 7);
    inner = *(void **)((char *)arg0 + 0x18);
    *(unsigned char *)((char *)inner + 0x10) = *(unsigned char *)((char *)arg2 + 7);
}
