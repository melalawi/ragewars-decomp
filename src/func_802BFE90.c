extern void *D_800D92A0;

/** Return field 0x4 of arg0, falling back to a global record when arg0 is null. */
int func_802BFE90(void *arg0) {
    void *p = arg0;
    if (p == 0) {
        p = D_800D92A0;
    }
    return *(int *)((char *)p + 4);
}
