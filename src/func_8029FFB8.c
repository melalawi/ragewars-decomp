/** Clear the three words at object offsets 0x30 through 0x38. */
void func_8029FFB8(void *arg0) {
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x34) = 0;
    *(int *)((char *)arg0 + 0x38) = 0;
}
