/** Copy selected fields into the compact destination record. */
void func_802B73A8(void *arg0, void *arg1) {
    *(int *)((char *)arg1 + 0x0) = *(int *)((char *)arg0 + 0x8);
    *(unsigned short *)((char *)arg1 + 0xC) = *(unsigned short *)((char *)arg0 + 0x1A);
    *(int *)((char *)arg1 + 0x4) = *(int *)((char *)arg0 + 0xC);
}
