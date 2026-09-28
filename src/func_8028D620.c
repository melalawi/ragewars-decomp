/** Clear the object field at offset 0x10BC. */
void func_8028D620(void *object) {
    *(int *)((char *)object + 0x10BC) = 0;
}
