/** Swap the two float-groups at offsets 0x10 and 0x20 (three floats each). */
void func_80273DDC(void *object) {
    float t;
    t = *(float *)((char *)object + 0x10);
    *(float *)((char *)object + 0x10) = *(float *)((char *)object + 0x20);
    *(float *)((char *)object + 0x20) = t;

    t = *(float *)((char *)object + 0x14);
    *(float *)((char *)object + 0x14) = *(float *)((char *)object + 0x24);
    *(float *)((char *)object + 0x24) = t;

    t = *(float *)((char *)object + 0x18);
    *(float *)((char *)object + 0x18) = *(float *)((char *)object + 0x28);
    *(float *)((char *)object + 0x28) = t;
}
