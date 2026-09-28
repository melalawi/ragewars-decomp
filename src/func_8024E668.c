/** Select one of two float fields according to the leading byte. */
float func_8024E668(void *object) {
    if (*(unsigned char *)object != 1) {
        return *(float *)((char *)object + 0xC);
    }
    return *(float *)((char *)object + 0x40);
}
