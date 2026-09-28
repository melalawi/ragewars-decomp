/** Reset a record and mark its word at offset 0x6C as invalid. */
void func_80218F84(void *record) {
    *(unsigned int *)((char *)record + 0) = 0;
    *(unsigned int *)((char *)record + 4) = 0;
    *(int *)((char *)record + 0x6C) = -1;
    *(unsigned int *)((char *)record + 8) = 0;
}
