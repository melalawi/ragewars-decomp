/** Reset two state words reached through the object's linked records. */
void func_80212FBC(void *object) {
    void *first = *(void **)((char *)object + 0x1D8);
    void *second = *(void **)((char *)first + 0x1454);
    *(int *)((char *)second + 0x220) = 0;
    *(int *)((char *)second + 0x224) = -1;
}
