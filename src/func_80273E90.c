/** Swap the two floats within each of the object's four 0x10-byte records. */
void func_80273E90(void *object) {
    float t;
    t = *(float *)((char *)object + 0x4);
    *(float *)((char *)object + 0x4) = *(float *)((char *)object + 0x8);
    *(float *)((char *)object + 0x8) = t;

    t = *(float *)((char *)object + 0x14);
    *(float *)((char *)object + 0x14) = *(float *)((char *)object + 0x18);
    *(float *)((char *)object + 0x18) = t;

    t = *(float *)((char *)object + 0x24);
    *(float *)((char *)object + 0x24) = *(float *)((char *)object + 0x28);
    *(float *)((char *)object + 0x28) = t;

    t = *(float *)((char *)object + 0x34);
    *(float *)((char *)object + 0x34) = *(float *)((char *)object + 0x38);
    *(float *)((char *)object + 0x38) = t;
}
