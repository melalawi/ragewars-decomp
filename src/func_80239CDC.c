/** Clear four consecutive object words beginning at offset 4. */
void func_80239CDC(void *arg0) {
    *(int *)((char *)arg0 + 0x4) = 0;
    *(int *)((char *)arg0 + 0x8) = 0;
    *(int *)((char *)arg0 + 0xC) = 0;
    *(int *)((char *)arg0 + 0x10) = 0;
}
