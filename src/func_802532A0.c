void func_802532A0(void *arg0) {
    *(int *)((char *)arg0 + 8) = *(int *)((char *)arg0 + 8) + 1;
    *(unsigned int *)((char *)arg0 + 0xC) = *(unsigned int *)((char *)arg0 + 0xC) | 0x100;
}
