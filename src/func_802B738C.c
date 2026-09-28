/** Copy selected fields from the compact source record. */
void func_802B738C(void *arg0, void *arg1) {
    *(int *)((char *)arg0 + 0x8) = *(int *)((char *)arg1 + 0x0);
    *(unsigned short *)((char *)arg0 + 0x1A) = *(unsigned short *)((char *)arg1 + 0xC);
    *(int *)((char *)arg0 + 0xC) = *(int *)((char *)arg1 + 0x4);
}
