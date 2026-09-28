/** Clear the object's fields, preserving the field at offset 0x10. */
void func_802636D0(void *object) {
    *(int *)((char *)object + 0x0) = 0;
    *(int *)((char *)object + 0x4) = 0;
    *(int *)((char *)object + 0x8) = 0;
    *(int *)((char *)object + 0xC) = 0;
    *(int *)((char *)object + 0x14) = 0;
    *(int *)((char *)object + 0x18) = 0;
    *(int *)((char *)object + 0x1C) = 0;
    *(int *)((char *)object + 0x20) = 0;
    *(int *)((char *)object + 0x24) = 0;
    *(int *)((char *)object + 0x28) = 0;
    *(int *)((char *)object + 0x2C) = 0;
    *(int *)((char *)object + 0x30) = 0;
    *(int *)((char *)object + 0x34) = 0;
}
