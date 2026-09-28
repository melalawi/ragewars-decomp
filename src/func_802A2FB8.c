/** Apply state two for event class three when the subcode is six or seven. */
int func_802A2FB8(void *object, int unused, unsigned int event, int subcode) {
    if ((event >> 16) == 3 && subcode < 8 && subcode >= 6) {
        *(int *)((char *)object + 0x5C) = 2;
        *(int *)((char *)object + 0x48) = 0;
    }
    return 0;
}
