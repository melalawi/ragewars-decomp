extern void *D_800D92A0;

/** Return offset 0x14 from the supplied object or the default global object. */
unsigned int func_802BFE70(void *object) {
    if (object == 0) {
        object = D_800D92A0;
    }
    return *(unsigned int *)((char *)object + 0x14);
}
