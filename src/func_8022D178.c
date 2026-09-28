/** Clear three consecutive words in the second argument. */
void func_8022D178(void *unused, void *object) {
    *(int *)((char *)object + 0x1C) = 0;
    *(int *)((char *)object + 0x20) = 0;
    *(int *)((char *)object + 0x24) = 0;
}
